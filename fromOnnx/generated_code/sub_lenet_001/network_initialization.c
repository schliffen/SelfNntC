#include "network_initialization.h"

void initialize_network() {

kernels = (fp_t***) malloc(1 * sizeof(fp_t**));
biases = (fp_t**) malloc(1 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (6, 3, 5, 5)
buffer_conv_weight = (fp_t**) malloc(18 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 18; kernel++){
    buffer_conv_weight[kernel] = (fp_t*) malloc(5*5 * sizeof(fp_t));
}



kernels[0] = buffer_conv_weight;


// (6,)
buffer_conv_bias = (fp_t*) malloc(6 * sizeof(fp_t));



biases[0] = buffer_conv_bias;


// Outputs
// (1, 6, 108, 108)
buffer_3 = (fp_t**) malloc(6 * sizeof(fp_t*));

for(uint32_t output = 0; output < 6; output++){
    buffer_3[output] = (fp_t*) malloc(108*108 * sizeof(fp_t));
}



// Layer: Relu_1, Operation: Relu
// Inputs
// Outputs
// (1, 6, 108, 108)
buffer_4 = (fp_t**) malloc(6 * sizeof(fp_t*));

for(uint32_t output = 0; output < 6; output++){
    buffer_4[output] = (fp_t*) malloc(108*108 * sizeof(fp_t));
}



// Layer: Reshape_7, Operation: Reshape
// Inputs
// Outputs
// (1, 69984)
output_output = (fp_t*) malloc(69984 * sizeof(fp_t));



}
