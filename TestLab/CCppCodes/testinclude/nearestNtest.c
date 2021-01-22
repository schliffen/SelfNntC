//
// Created by ali on 15.01.2021.
//

#include "nearestNtest.h"

void upsampling_2D_nearest_neighbour(fp_t** input_channels, const uint16_t target_height, const uint16_t target_width, const uint16_t scale, fp_t** output_channel){

//    calculate scale

    int in_i, in_j;
    for( int i=0; i< target_height; i++){
        for (int j=0; j< target_width; j++){
            // clculate corresponding indexes from input channel
            in_i = (int) floor(i/scale);
            in_j = (int) floor(j/scale);
            output_channel[i][j] = input_channels[in_i][in_j];

        }
    }
}

float test_nearest_neighbour() {


    printf("norm_naive_1()\n");
    float return_value = 0;

    const int input_width = 2, input_height = 2;
    const int output_width = 4, output_height = 4;

    fp_t error = 0.001;

    fp_t scale;
    scale = output_width / input_width;

    fp_t *input[input_height];
    for (int i = 0; i < input_width; i++){
        input[i] = (int *) malloc(input_width * sizeof(fp_t));
    }

    fp_t tmpinput[2][2] =  {{1.4142, 0}, {3.4, 2.5}};
    for (int i = 0; i < input_height; i++)
        for (int j = 0; j < input_width; j++){
        input[i][j] = tmpinput[i][j];
    }

    fp_t expected_output[4][4] = {{1.4142, 1.4142, 0.0,0.0}, {1.4142, 1.4142, 0.0,0.0}, {3.4, 3.4, 2.5, 2.5}, {3.4, 3.4,  2.5, 2.5}};


    fp_t *output[output_height];
    for (int i=0; i<output_width; i++)
        output[i] = (int *)malloc(output_width * sizeof(fp_t));


    upsampling_2D_nearest_neighbour(input, input_height, input_width, output_height, output_width, scale, output);

    for (int i=0; i<output_width; i++)
        for (int j=0; j<output_height; j++) {
            return_value += sqrtf(pow(expected_output[i][j] - output[i][j], 2));
            printf( "i %d, j %d,  exp: %f, res: %f \n", i,  j,  expected_output[i][j] , output[i][j]);
        }

    for (int i = 0; i < output_height; i++){
        free(output[i]);
    }
    for (int i = 0; i < input_height; i++){
        free(input[i]);
    }


//    free(output);
//    free(input);





    return return_value;


}