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
fp_t **buffer_354;
// (64,)
fp_t *buffer_355;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_353;


// Layer: PRelu_1, Operation: PRelu
// Inputs
// (64, 1, 1)
fp_t **buffer_359;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_337;


// Layer: Conv_2, Operation: Conv
// Inputs
// (64, 1, 3, 3)
fp_t **buffer_357;
// (64,)
fp_t *buffer_358;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_356;


// Layer: PRelu_3, Operation: PRelu
// Inputs
// (64, 1, 1)
fp_t **buffer_360;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_341;


// Layer: Reshape_9, Operation: Reshape
// Inputs
// Outputs
// (1, 200704)
fp_t *buffer_349;


// Layer: BatchNormalization_10, Operation: BatchNormalization1d
// Inputs
// (200704,)
fp_t *buffer_bn_weight;
// (200704,)
fp_t *buffer_bn_bias;
// (200704,)
fp_t *buffer_bn_running_mean;
// (200704,)
fp_t *buffer_bn_running_var;
// Outputs
// (1, 200704)
fp_t *buffer_350;


// Layer: ReduceL2_11, Operation: ReduceL2
// Inputs
// Outputs
// (1, 1)
fp_t *buffer_351;


// Layer: Div_12, Operation: Div
// Inputs
// Outputs
// (1, 200704)
fp_t *output_output;


#endif //NETWORK_INITIALIZATION_H
