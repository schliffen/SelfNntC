#include "network_cleanup.h"

void cleanup_network() {

for(uint32_t i = 0; i < 18; i++){
    free(buffer_conv_weight[i]);
}

free(buffer_conv_weight);

free(buffer_conv_bias);

for(uint32_t i = 0; i < 6; i++){
    free(buffer_3[i]);
}

free(buffer_3);

for(uint32_t i = 0; i < 6; i++){
    free(buffer_4[i]);
}

free(buffer_4);

free(output_output);

free(kernels);
free(biases);
}
