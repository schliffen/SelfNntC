#include "network_cleanup.h"

void cleanup_network() {

for(uint32_t i = 0; i < 192; i++){
    free(buffer_354[i]);
}

free(buffer_354);

free(buffer_355);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_353[i]);
}

free(buffer_353);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_359[i]);
}

free(buffer_359);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_337[i]);
}

free(buffer_337);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_357[i]);
}

free(buffer_357);

free(buffer_358);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_356[i]);
}

free(buffer_356);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_360[i]);
}

free(buffer_360);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_341[i]);
}

free(buffer_341);

free(buffer_349);

free(buffer_bn_weight);

free(buffer_bn_bias);

free(buffer_bn_running_mean);

free(buffer_bn_running_var);

free(buffer_350);

free(buffer_351);

free(output_output);

free(kernels);
free(biases);
}
