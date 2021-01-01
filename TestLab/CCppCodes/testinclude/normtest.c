//
// Created by ali on 28.12.2020.
//

#include "normtest.h"



void norm_naive_1(const fp_t *input_channel, const uint16_t height, const uint16_t width, const int32_t param, const int32_t dim, fp_t* output_channel){
//todo: currently only norm 2 is supported -> expanding to other norms
    //
    //param = 2; // only norm 2
    // dim = 0; only dimansion 0 is supported fo the moment
    output_channel[dim] = 0;
    for (int i=0; i<height*width; i++)
            output_channel[dim] +=  input_channel[i] * input_channel[i];

    output_channel[dim] = sqrtf( output_channel[dim]);
};

float test_norm_naive_1() {

    printf("norm_naive_1()\n");
    float return_value = 0;

#define input_width 3
#define input_height 1
    fp_t error = 0.001;

    fp_t gamma, beta, mean, variance, epsilon;

    gamma = 1.0;
    beta = 0;
    mean = 0;
    variance = 1;
    epsilon = 1e-5;

    fp_t input[input_height*input_width] =           {-1, 0, 1};
    fp_t expected_output[3] = {1.4142, 0,0};

    fp_t* output = (fp_t*) malloc(input_height * input_width * sizeof(fp_t));

    norm_naive_1(input, input_height, input_width, 2, 0, output);

    return_value = sqrtf( pow(expected_output[0] -  output[0],2) );


    free(output);
#undef input_width
#undef input_height



    return return_value;
}