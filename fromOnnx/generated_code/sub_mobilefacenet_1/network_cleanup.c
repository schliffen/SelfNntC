#include "network_cleanup.h"

void cleanup_network() {

for(uint32_t i = 0; i < 192; i++){
    free(buffer_349[i]);
}

free(buffer_349);

free(buffer_350);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_348[i]);
}

free(buffer_348);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_351[i]);
}

free(buffer_351);

for(uint32_t i = 0; i < 64; i++){
    free(buffer_337[i]);
}

free(buffer_337);

free(buffer_345);

free(buffer_346);

free(output_output);

free(kernels);
free(biases);
}
