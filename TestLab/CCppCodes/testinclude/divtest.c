//
// Created by ali on 28.12.2020.
//

#include "../layers/math_operations.h"
#include "divtest.h"
//void div_by_scalar(const fp_t *input_channel, const uint16_t height, const uint16_t width, const fp_t denominator, fp_t* output_channel){

    // a division by scalar layer
//    for (int i=0; i<height*width; i++)
//        output_channel[i] = input_channel[i] / denominator;
//};

int32_t test_div_by_scalar(){
    printf("test_relu_naive()\n");
    int32_t return_value = 0;

#define input_width 10
#define input_height 1
    fp_t error = 0.001;

    fp_t input[input_width] =           {9,11,-4,-5,-9,-4,-7, 5, 0, 7};
    fp_t expected_output[input_width] = {4.5,5.5, -2, -2.5, -4.5, -2, -3.5, 2.5, 0, 3.5};

    fp_t* output = (fp_t*) malloc(input_width * input_height * sizeof(fp_t));

    div_by_scalar(input, input_height, input_width, 2,output);

    return_value = compare1dFloatArray(output, expected_output, input_width,error);

    free(output);
    return return_value;

#undef input_width
#undef input_height
}