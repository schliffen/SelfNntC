/**
 * @brief provides the function for reading the binary weights file
 *
 * @author Alexander Jung (University of Tuebingen, Chair for Embedded Systems)
 */

#ifndef PICO_CNN_READ_BINARY_WEIGHTS_H
#define PICO_CNN_READ_BINARY_WEIGHTS_H

#include "../parameters.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int32_t read_binary_weights(const char* path_to_weights_file, fp_t **** kernels, fp_t *** biases);

#endif //PICO_CNN_READ_BINARY_WEIGHTS_H
