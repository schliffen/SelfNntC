//
// Created by ali on 15.01.2021.
//

#ifndef TESTLAYERS_NEARESTNTEST_H
#define TESTLAYERS_NEARESTNTEST_H


#include <memory.h>
#include <stdlib.h>
#include "../testsrc/parameters.h"
#include "../testsrc/utility_functions.h"

void upsampling_2D_nearest_neighbour(fp_t** input_channels, const uint16_t target_height, const uint16_t target_width, const uint16_t scale, fp_t** output_channel);
float test_nearest_neighbour();

#endif //TESTLAYERS_NEARESTNTEST_H
