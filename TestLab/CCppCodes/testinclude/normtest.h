//
// Created by ali on 28.12.2020.
//

#ifndef TESTLAYERS_NORMTEST_H
#define TESTLAYERS_NORMTEST_H


#include <memory.h>
#include <stdlib.h>
#include "../testsrc/parameters.h"
#include "../testsrc/utility_functions.h"

void norm_naive_1(const fp_t *input_channel, const uint16_t height, const uint16_t width, const int32_t param, const int32_t dim, fp_t* output_channel);
float test_norm_naive_1();


#endif //TESTLAYERS_NORMTEST_H
