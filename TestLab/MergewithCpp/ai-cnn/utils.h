/**
*
 */

#ifndef UTILS_H
#define UTILS_H

#include "parameters.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * @brief Extends input_channel with padding by copying the data into a bigger array.
 *
 * @param input_channel
 * @param height
 * @param width
 * @param extended_input
 * @param padding
 */
void extend_2d_input_with_padding(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                                  fp_t** extended_input, const uint16_t* padding, fp_t initializer);
// the same function for the first layer
void extend_2d_input_with_padding_first_layer(const unsigned char* input_channel, const uint16_t height, const uint16_t width,
                                              fp_t** extended_input, const uint16_t* padding, fp_t initializer);

// modified for better performance
void extend_2d_input_with_padding_extended(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                                           fp_t** extended_input, const uint16_t* padding, fp_t initializer);
/**
 * @brief Extends input_channel with padding by copying the data into a bigger array.
 *
 * @param input_channel
 * @param width
 * @param extended_input
 * @param padding
 */
void extend_1d_input_with_padding(const fp_t* input_channel, const uint16_t width,
                                  fp_t** extended_input, const uint16_t* padding, fp_t initializer);


#endif // UTILS_H
