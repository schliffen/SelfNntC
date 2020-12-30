//
// Created by ali on 28.12.2020.
//
#include "math_operations.h"

void div_by_scalar(const fp_t *input_channel, const uint16_t height, const uint16_t width, const fp_t denominator, fp_t* output_channel){

    // a division by scalar layer
    for (int i=0; i<height*width; i++)
        output_channel[i] = input_channel[i] / denominator;
};

void norm_naive_l2(const fp_t *input_channel, const uint16_t height, const uint16_t width, const int32_t param, const int32_t dim, fp_t* output_channel){
//todo: currently only norm 2 is supported -> expanding to other norms
    //
    //param = 2; // only norm 2
    // dim = 0; only dimansion 0 is supported fo the moment
    output_channel[dim] = 0;
    for (int i=0; i<height*width; i++)
        output_channel[dim] +=  input_channel[i] * input_channel[i];

    output_channel[dim] = sqrtf( output_channel[dim]);
};
