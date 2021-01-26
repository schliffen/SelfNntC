//
// Created by ali on 28.12.2020.
//

#include "BN1dtest.h"

int32_t test_batch_normalization_naive_1() {

    printf("test_batch_normalization_naive_1()\n");
    int32_t return_value = 0;

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
    fp_t expected_output[input_height*input_width] = {-0.999995, 0.0, 0.999995};

    fp_t* output = (fp_t*) malloc(input_height * input_width * sizeof(fp_t));

    for (int i=0; i< input_width*input_height; i++){
        batch_normalization_naive_1d(input+i, output+i, gamma, beta, mean, variance, epsilon);
        printf("computed bn %f", output[i]);}

    return_value = compare1dFloatArray(output, expected_output, input_height*input_width, error);

    free(output);
#undef input_width
#undef input_height



    return return_value;
}
