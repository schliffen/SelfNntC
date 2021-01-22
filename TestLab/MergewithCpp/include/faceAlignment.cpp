//
// Created by ali on 18.01.2021.
//

#include "faceAlignment.h"


bool faceAlignment::initialize(char* weights_path) {
    // initialize network
    alignment_initialize_network();
    //
    if(read_binary_weights(weights_path, &kernels, &biases) != 0){
        ERROR_MSG("could not read weights from '%s'\n", weights_path);
        return 1;
    } else{
        return 0;
    }
};


bool faceAlignment::forward(fp_t ** input_input0, fp_t ** inputs_Concat_151, fp_t ** outputs_Concat_201, fp_t *outputs_Conf) {

    alignment_network( input_input0, inputs_Concat_151, outputs_Concat_201, outputs_Conf);


    return true;

};

bool faceAlignment::clearnetwork() {
    alignment_cleanup_network();
}
