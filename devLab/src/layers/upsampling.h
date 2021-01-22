//
// Created by ali on 14.01.2021.
//

#ifndef TESTLAYERS_UPSAMPLING_H
#define TESTLAYERS_UPSAMPLING_H

#include "../parameters.h"
#include "../utils.h"
#include <stdint.h>
#include <stdio.h>
#include <math.h>

void upsampling_2D_nearest_neighbour(fp_t* input_channels, const uint16_t target_height, const uint16_t target_width, const uint16_t scale, fp_t* output_channel);



#endif //TESTLAYERS_UPSAMPLING_H
