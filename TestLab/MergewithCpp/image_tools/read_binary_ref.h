//
// Created by ali on 28.12.2020.
//

#ifndef SUBLENET_READ_BINARY_REF_INPUT_H
#define SUBLENET_READ_BINARY_REF_INPUT_H



#include "../ai-cnn/parameters.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int32_t read_binary_reference_input(const char* path_to_sample_data, fp_t*** input);

int32_t read_binary_reference_output(const char* path_to_sample_data, fp_t** output);





#endif //SUBLENET_READ_BINARY_REF_INPUT_H
