#define EPSILON 0.001

#include "network.h"
#include "network_initialization.h"
#include "network_cleanup.h"

#include <stdio.h>
#include <stdlib.h>

#include "pico-cnn/pico-cnn.h"

void usage() {
    printf("./reference_input PATH_TO_BINARY_WEIGHTS_FILE PATH_TO_REFERENCE_INPUT PATH_TO_REFERENCE_OUTPUT\n");
}

int32_t almost_equal(float a, float b, float epsilon){
    return (fabs(a-b) <= epsilon);
}

int32_t main(int32_t argc, char** argv) {

    if(argc != 4) {
        usage();
        return 1;
    }

    char weights_path[1024];
    strcpy(weights_path, argv[1]);

    char sample_input_path[1024];
    strcpy(sample_input_path, argv[2]);

    char sample_output_path[1024];
    strcpy(sample_output_path, argv[3]);

    
    fp_t** input = (fp_t**) malloc(3*sizeof(fp_t*));

    for(uint32_t i = 0; i < 3; i++){
        input[i] = (fp_t*) malloc(112*112*sizeof(fp_t));
    }
    

    
    fp_t* output = (fp_t*) malloc(1*200704*sizeof(fp_t));
    


    
    fp_t* ref_output = (fp_t*) malloc(1*200704*sizeof(fp_t));
    

    
    if(read_binary_reference_input_data(sample_input_path, &input) != 0)
        return -1;
    
    if(read_binary_reference_output_data(sample_output_path, &ref_output) != 0)
        return -1;

    initialize_network();

    INFO_MSG("Reading weights from '%s'\n", weights_path);

    if(read_binary_weights(weights_path, &kernels, &biases) != 0){
        ERROR_MSG("Could not read weights from '%s'\n", weights_path);
        return 1;
    }

    INFO_MSG("Starting CNN...\n");

    network(input, output);

    INFO_MSG("After CNN\n");

    cleanup_network();

    int32_t all_equal = 1;

    
    for(uint32_t i = 0; i < 1*200704; i++) {

        DEBUG_MSG("Position: %d\toutput: %f\tref_output: %f\n", i, output[i], ref_output[i]);

        if(!almost_equal(output[i], ref_output[i], EPSILON)) {
            all_equal = 0;
            ERROR_MSG("Not equal at position: %d, output: %f, ref_output: %f\n", i, output[i], ref_output[i]);
        }
    }
    

    if(all_equal) {
        INFO_MSG("Output is almost equal (epsilon=%f) to reference output!\n", EPSILON);
    } else {
        ERROR_MSG("WARNING: Output is not almost equal (epsilon=%f) to reference output!\n", EPSILON);
    }

    free(output);
    free(ref_output);

    
    for(uint32_t i = 0; i < 3; i++) {
        free(input[i]);
    }
    

    free(input);

    return 0;

}