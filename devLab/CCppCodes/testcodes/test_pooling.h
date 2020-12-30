/**
 * @brief contains all activation functions
 *
 * @author Alexander Jung (University of Tuebingen, Chair for Embedded Systems)
 * @author Nils Weinhardt (University of Tuebingen, Chair for Embedded Systems)
 */
#ifndef TEST_POOLING_H
#define TEST_POOLING_H

#include "pico-cnn/parameters.h"
#include "pico-cnn/layers/pooling.h"
#include "../utility_functions.h"

#include <stdio.h>
#include <assert.h>

void pooling_output_channel_dimensions(uint16_t height, uint16_t width,
                                       const uint16_t kernel_size[2],
                                       uint16_t stride, uint16_t **computed_dimensions);

int32_t test_max_pooling1d();
int32_t test_max_pooling1d_padding();
int32_t test_max_pooling2d();
int32_t test_max_pooling2d_padding();

int32_t test_avg_pooling1d();
int32_t test_avg_pooling1d_padding();
int32_t test_avg_pooling2d();
int32_t test_avg_pooling2d_padding();

int32_t test_global_average_pooling2d();
int32_t test_global_max_pooling2d();

#endif //TEST_POOLING_H
