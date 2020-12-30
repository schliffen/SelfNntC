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
// (64, 3, 3, 3)
fp_t **buffer_350;
// (64,)
fp_t *buffer_351;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_349;


// Layer: PRelu_1, Operation: PRelu
// Inputs
// (64, 1, 1)
fp_t **buffer_352;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_337;


// Layer: Reshape_7, Operation: Reshape
// Inputs
// Outputs
// (1, 200704)
fp_t *buffer_345;


// Layer: MatMul_8, Operation: MatMul
// Inputs
// (200704, 512)
fp_t *buffer_354;
// Outputs
// (1, 512)
fp_t *buffer_347;


// Layer: BatchNormalization_9, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_bn_running_var;
// (512,)
fp_t *buffer_bn_bias;
// Outputs
// (1, 512)
fp_t *output_output;


#endif //NETWORK_INITIALIZATION_H
