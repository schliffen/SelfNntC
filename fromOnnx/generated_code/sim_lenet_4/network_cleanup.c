#include "network_cleanup.h"

void cleanup_network() {

for(uint32_t i = 0; i < 9; i++){
    free(buffer_conv_weight[i]);
}

free(buffer_conv_weight);

free(buffer_conv_bias);

for(uint32_t i = 0; i < 3; i++){
    free(buffer_4[i]);
}

free(buffer_4);

for(uint32_t i = 0; i < 1; i++){
    free(buffer_15[i]);
}

free(buffer_15);

for(uint32_t i = 0; i < 3; i++){
    free(buffer_6[i]);
}

free(buffer_6);

free(output_output);

free(kernels);
free(biases);
}
