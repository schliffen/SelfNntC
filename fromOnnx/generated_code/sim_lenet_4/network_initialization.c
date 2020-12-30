#include "network_initialization.h"

void initialize_network() {

kernels = (fp_t***) malloc(2 * sizeof(fp_t**));
biases = (fp_t**) malloc(1 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (3, 3, 3, 3)
buffer_conv_weight = (fp_t**) malloc(9 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 9; kernel++){
    buffer_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[0] = buffer_conv_weight;


// (3,)
buffer_conv_bias = (fp_t*) malloc(3 * sizeof(fp_t));



biases[0] = buffer_conv_bias;


// Outputs
// (1, 3, 110, 110)
buffer_4 = (fp_t**) malloc(3 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3; output++){
    buffer_4[output] = (fp_t*) malloc(110*110 * sizeof(fp_t));
}



// Layer: PRelu_1, Operation: PRelu
// Inputs
// (1, 1, 1)
buffer_15 = (fp_t**) malloc(1 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1; kernel++){
    buffer_15[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[1] = buffer_15;


// Outputs
// (1, 3, 110, 110)
buffer_6 = (fp_t**) malloc(3 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3; output++){
    buffer_6[output] = (fp_t*) malloc(110*110 * sizeof(fp_t));
}



// Layer: Reshape_7, Operation: Reshape
// Inputs
// Outputs
// (1, 36300)
output_output = (fp_t*) malloc(36300 * sizeof(fp_t));



}
