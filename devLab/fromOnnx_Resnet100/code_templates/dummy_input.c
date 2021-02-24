#define LOWER_BOUND 0.0
#define UPPER_BOUND 1.0

#include "network.h"
#include "network_initialization.h"
#include "network_cleanup.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "pico-cnn/pico-cnn.h"

void usage() {
    printf("./dummy_input PATH_TO_BINARY_WEIGHTS_FILE RUNS GENERATE_ONCE\n");
}

/**
 * @brief generates uniform random number in range
 * @param min (lower bound)
 * @param max (upper bound)
 */
static inline fp_t urand(fp_t min, fp_t max) {
    return (fp_t) ((((fp_t)rand()/(fp_t)(RAND_MAX)) * 1.0f) * (max - min) + min);
}


int32_t main(int32_t argc, char** argv) {

    if(argc != 4) {
        usage();
        return 1;
    }

    char weights_path[1024];
    strcpy(weights_path, argv[1]);

    int32_t RUNS = atoi(argv[2]);

    int32_t GENERATE_ONCE = atoi(argv[3]);

    {% if input_shape_len == 4 or input_shape_len == 3 %}
    fp_t** input = (fp_t**) malloc({{num_input_channels}}*sizeof(fp_t*));

    for(uint32_t i = 0; i < {{num_input_channels}}; i++){
        input[i] = (fp_t*) malloc({{input_channel_height}}*{{input_channel_width}}*sizeof(fp_t));
    }
    {% elif input_shape_len == 2 %}
    fp_t* input = (fp_t*) malloc({{input_channel_height}}*{{input_channel_width}}*sizeof(fp_t));
    {% endif %}

    {% if output_shape_len == 4 or output_shape_len == 3 %}
    fp_t** output = (fp_t**) malloc({{num_output_channels}}*sizeof(fp_t*));

    for(uint32_t i = 0; i < {{num_input_channels}}; i++){
        output[i] = (fp_t*) malloc({{output_channel_height}}*{{output_channel_width}}*sizeof(fp_t));
    }
    {% elif output_shape_len == 2 %}
    fp_t* output = (fp_t*) malloc({{output_channel_height}}*{{output_channel_width}}*sizeof(fp_t));
    {% endif %}


    if(GENERATE_ONCE) {
        INFO_MSG("Random input will be generated once for all inference runs.\n");

        srand(time(NULL));

        {% if input_shape_len == 4 or input_shape_len == 3 %}
        for(uint32_t channel = 0; channel < {{num_input_channels}}; channel++) {
            for(uint32_t pos = 0; pos < {{input_channel_height}}*{{input_channel_width}}; pos++) {
                input[channel][pos] = urand(LOWER_BOUND, UPPER_BOUND);
            }
        }
        {% elif input_shape_len == 2 %}
        for(uint32_t pos = 0; pos < {{input_channel_height}}*{{input_channel_width}}; pos++) {
                input[pos] = urand(LOWER_BOUND, UPPER_BOUND);
        }
        {% endif %}

    } else {
        INFO_MSG("Random input will be generated with new seed for each inference run.\n");
    }

    initialize_network();

    INFO_MSG("Reading weights from '%s'\n", weights_path);

    if(read_binary_weights(weights_path, &kernels, &biases) != 0){
        ERROR_MSG("could not read weights from '%s'\n", weights_path);
        return 1;
    }

    INFO_MSG("Starting CNN for %d runs...\n", RUNS);

    for(uint32_t run = 0; run < RUNS; run++) {

        DEBUG_MSG("Run %d of %d\n", run+1, RUNS);

        if(!GENERATE_ONCE) {
            srand(time(NULL));

            {% if input_shape_len == 4 or input_shape_len == 3 %}
            for(uint32_t channel = 0; channel < {{num_input_channels}}; channel++) {
                for(uint32_t pos = 0; pos < {{input_channel_height}}*{{input_channel_width}}; pos++) {
                    input[channel][pos] = urand(LOWER_BOUND, UPPER_BOUND);
                }
            }
            {% elif input_shape_len == 2 %}
            for(uint32_t pos = 0; pos < {{input_channel_height}}*{{input_channel_width}}; pos++) {
                    input[pos] = urand(LOWER_BOUND, UPPER_BOUND);
                }
            {% endif %}
        }
        network(input, output);
    }

    INFO_MSG("After CNN\n");

    cleanup_network();

    free(output);

    {% if input_shape_len == 4 or input_shape_len == 3 %}
    for(uint32_t i = 0; i < {{num_input_channels}}; i++) {
        free(input[i]);
    }
    {% endif %}

    free(input);

    return 0;

}