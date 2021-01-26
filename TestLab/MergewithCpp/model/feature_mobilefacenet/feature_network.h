#ifndef NETWORK_H
#define NETWORK_H

#include "ai-cnn/parameters.h"
#include "feature_network_initialization.h"
#include "feature_network_cleanup.h"
#include "ai-cnn/ai-cnn.h"

void feature_network(fp_t **input_data, fp_t *output_output);

#endif //NETWORK_H
