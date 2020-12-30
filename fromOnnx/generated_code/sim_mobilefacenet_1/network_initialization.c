#include "network_initialization.h"

void initialize_network() {

kernels = (fp_t***) malloc(3 * sizeof(fp_t**));
biases = (fp_t**) malloc(3 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
buffer_350 = (fp_t**) malloc(192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 192; kernel++){
    buffer_350[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[0] = buffer_350;


// (64,)
buffer_351 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[0] = buffer_351;


// Outputs
// (1, 64, 56, 56)
buffer_349 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_349[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_1, Operation: PRelu
// Inputs
// (64, 1, 1)
buffer_352 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_352[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[1] = buffer_352;


// Outputs
// (1, 64, 56, 56)
buffer_337 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_337[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Reshape_7, Operation: Reshape
// Inputs
// Outputs
// (1, 200704)
buffer_345 = (fp_t*) malloc(200704 * sizeof(fp_t));



// Layer: MatMul_8, Operation: MatMul
// Inputs
// (200704, 512)
buffer_354 = (fp_t*) malloc(102760448 * sizeof(fp_t));



kernels[2] = &buffer_354;


// Outputs
// (1, 512)
buffer_347 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: BatchNormalization_9, Operation: BatchNormalization
// Inputs
// (512,)
buffer_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[1] = buffer_bn_running_var;


// (512,)
buffer_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[2] = buffer_bn_bias;


// Outputs
// (1, 512)
output_output = (fp_t*) malloc(512 * sizeof(fp_t));



}
