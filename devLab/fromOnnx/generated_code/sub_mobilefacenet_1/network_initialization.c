#include "network_initialization.h"

void initialize_network() {

kernels = (fp_t***) malloc(4 * sizeof(fp_t**));
biases = (fp_t**) malloc(6 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
buffer_354 = (fp_t**) malloc(192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 192; kernel++){
    buffer_354[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[0] = buffer_354;


// (64,)
buffer_355 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[0] = buffer_355;


// Outputs
// (1, 64, 56, 56)
buffer_353 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_353[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_1, Operation: PRelu
// Inputs
// (64, 1, 1)
buffer_359 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_359[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[1] = buffer_359;


// Outputs
// (1, 64, 56, 56)
buffer_337 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_337[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Conv_2, Operation: Conv
// Inputs
// (64, 1, 3, 3)
buffer_357 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_357[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[2] = buffer_357;


// (64,)
buffer_358 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[1] = buffer_358;


// Outputs
// (1, 64, 56, 56)
buffer_356 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_356[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_3, Operation: PRelu
// Inputs
// (64, 1, 1)
buffer_360 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_360[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[3] = buffer_360;


// Outputs
// (1, 64, 56, 56)
buffer_341 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_341[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Reshape_9, Operation: Reshape
// Inputs
// Outputs
// (1, 200704)
buffer_349 = (fp_t*) malloc(200704 * sizeof(fp_t));



// Layer: BatchNormalization_10, Operation: BatchNormalization1d
// Inputs
// (200704,)
buffer_bn_weight = (fp_t*) malloc(200704 * sizeof(fp_t));



biases[2] = buffer_bn_weight;


// (200704,)
buffer_bn_bias = (fp_t*) malloc(200704 * sizeof(fp_t));



biases[3] = buffer_bn_bias;


// (200704,)
buffer_bn_running_mean = (fp_t*) malloc(200704 * sizeof(fp_t));



biases[4] = buffer_bn_running_mean;


// (200704,)
buffer_bn_running_var = (fp_t*) malloc(200704 * sizeof(fp_t));



biases[5] = buffer_bn_running_var;


// Outputs
// (1, 200704)
buffer_350 = (fp_t*) malloc(200704 * sizeof(fp_t));



// Layer: ReduceL2_11, Operation: ReduceL2
// Inputs
// Outputs
// (1, 1)
buffer_351 = (fp_t*) malloc(1 * sizeof(fp_t));



// Layer: Div_12, Operation: Div
// Inputs
// Outputs
// (1, 200704)
output_output = (fp_t*) malloc(200704 * sizeof(fp_t));



}
