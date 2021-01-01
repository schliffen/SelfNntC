#include "network_cleanup.h"

void cleanup_network() {

for(uint32_t i = 0; i < 192; i++){
    free(buffer_350[i]);
}

free(buffer_350);

free(buffer_351);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_349[i]);
}

free(buffer_349);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_352[i]);
}

free(buffer_352);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_337[i]);
}

free(buffer_337);

free(buffer_345);

free(buffer_bn_weight);

free(buffer_bn_bias);

free(buffer_bn_running_mean);

free(buffer_bn_running_var);

free(buffer_346);

free(buffer_347);

free(output_output);

free(kernels);
free(biases);
}
