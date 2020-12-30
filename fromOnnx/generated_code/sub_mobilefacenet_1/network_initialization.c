#include "network_initialization.h"

void initialize_network() {

kernels = (fp_t***) malloc(2 * sizeof(fp_t**));
biases = (fp_t**) malloc(1 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
buffer_349 = (fp_t**) malloc(192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 192; kernel++){
    buffer_349[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[0] = buffer_349;


// (64,)
buffer_350 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[0] = buffer_350;


// Outputs
// (1, 64, 56, 56)
buffer_348 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_348[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_1, Operation: PRelu
// Inputs
// (64, 1, 1)
buffer_351 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_351[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[1] = buffer_351;


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



// Layer: ReduceL2_8, Operation: ReduceL2
// Inputs
// Outputs
// ()
buffer_346 = (fp_t*) malloc(1 * sizeof(fp_t));



// Layer: Div_9, Operation: Div
// Inputs
// Outputs
// (0, 200704)
output_output = (fp_t*) malloc(0 * sizeof(fp_t));



}
