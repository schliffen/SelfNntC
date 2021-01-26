//
// Created by ali on 5.01.2021.
//

#ifndef SUBLENET_FEXTRACTOR_H
#define SUBLENET_FEXTRACTOR_H

extern "C" {
#include "model/feature_mobilefacenet/feature_network.h"
#include "model/feature_mobilefacenet/feature_network_initialization.h"
#include "model/feature_mobilefacenet/feature_network_cleanup.h"
#include "image_tools/read_binary_ref.h"

}


class fextractor{
public:
//    int inp_w, inp_h, inp_ch;
//    inp_w = 112;
//    inp_h = 112;
//    inp_ch = 3; // working on color images
//    int outputSize = 512;
//    char weights_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/FinalTest/model_to_Test/network.weights.bin";

//    void initialize_network();

    bool initialize(char*);
    bool forward(fp_t**, fp_t*);

    bool clearnetwork();

};


#endif //SUBLENET_FEXTRACTOR_H
