#ifndef NETWORK_H
#define NETWORK_H

#include "ai-cnn/parameters.h"
#include "mbfc_network_initialization.h"
#include "mbfc_network_cleanup.h"
#include "ai-cnn/ai-cnn.h"

void mbfc_feature_network(fp_t** mbfc_input,  fp_t *output_output);

#endif //NETWORK_H
