#ifndef NETWORK_H
#define NETWORK_H

#include "ai-cnn/parameters.h"
#include "mb025_network_initialization.h"
#include "mb025_network_cleanup.h"
#include "ai-cnn/ai-cnn.h"

//unsigned char*
void mbnet_network(fp_t ** input_input0);
const uint16_t Conv_padding[4] = { 1, 1, 1, 1 };
#endif //NETWORK_H
