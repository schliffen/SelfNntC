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
fp_t **buffer_349;
// (64,)
fp_t *buffer_350;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_348;


// Layer: PRelu_1, Operation: PRelu
// Inputs
// (64, 1, 1)
fp_t **buffer_351;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_337;


// Layer: Reshape_7, Operation: Reshape
// Inputs
// Outputs
// (1, 200704)
fp_t *buffer_345;


// Layer: ReduceL2_8, Operation: ReduceL2
// Inputs
// Outputs
// ()
fp_t buffer_346;


// Layer: Div_9, Operation: Div
// Inputs
// Outputs
// (0, 200704)
fp_t *output_output;


#endif //NETWORK_INITIALIZATION_H
