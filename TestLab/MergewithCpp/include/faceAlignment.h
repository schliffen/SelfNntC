//
// Created by ali on 18.01.2021.
//

#ifndef SUBLENET_FACEALIGNMENT_H
#define SUBLENET_FACEALIGNMENT_H
extern "C" {
#include "model/alignment/alignment_network.h"
#include "model/alignment/alignment_network_initialization.h"
#include "model/alignment/alignment_network_cleanup.h"
#include "image_tools/read_binary_ref.h"

}


class faceAlignment{
public:


    bool initialize(char*);
    bool forward(fp_t ** input_input0, fp_t ** inputs_Concat_151, fp_t ** outputs_Concat_201, fp_t *outputs_Conf);

    bool clearnetwork();

};


#endif //SUBLENET_FACEALIGNMENT_H
