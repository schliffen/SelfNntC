#ifndef NETWORK_H
#define NETWORK_H

#include "ai-cnn/parameters.h"
#include "alignment_network_initialization.h"
#include "alignment_network_cleanup.h"
#include "ai-cnn/ai-cnn.h"

void alignment_network(fp_t ** input_input0, fp_t ** inputs_Concat_151, fp_t ** outputs_Concat_201, fp_t *outputs_Conf);

#endif //NETWORK_H
