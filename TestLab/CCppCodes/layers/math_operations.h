//
// Created by ali on 28.12.2020.
//

#ifndef TESTLAYERS_MATH_OPERATIONS_H
#define TESTLAYERS_MATH_OPERATIONS_H

#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include "../testsrc/parameters.h"

void div_by_scalar(const fp_t *input_channel, const uint16_t height, const uint16_t width, const fp_t denominator, fp_t* output_channel);
void norm_naive_l2(const fp_t *input_channel, const uint16_t height, const uint16_t width, const int32_t param, const int32_t dim, fp_t* output_channel);

#endif //TESTLAYERS_MATH_OPERATIONS_H
