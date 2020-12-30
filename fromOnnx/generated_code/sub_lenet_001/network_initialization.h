#ifndef NETWORK_INITIALIZATION_H
#define NETWORK_INITIALIZATION_H
#include <stdlib.h>
#include <stdint.h>
#include "ai-cnn/parameters.h"

void initialize_network();

fp_t*** kernels;
fp_t** biases;
// Layer: Conv_0, Operation: Conv
// Inputs
// (6, 3, 5, 5)
fp_t **buffer_conv_weight;
// (6,)
fp_t *buffer_conv_bias;
// Outputs
// (1, 6, 108, 108)
fp_t **buffer_4;


// Layer: PRelu_1, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_15;
// Outputs
// (1, 6, 108, 108)
fp_t **buffer_6;


// Layer: Reshape_7, Operation: Reshape
// Inputs
// Outputs
// (1, 69984)
fp_t *output_output;


#endif //NETWORK_INITIALIZATION_H
