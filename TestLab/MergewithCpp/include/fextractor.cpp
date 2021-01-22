//
// Created by ali on 5.01.2021.
//

#include "fextractor.h"

bool fextractor::initialize(char* weights_path) {
    // initialize network
    feature_initialize_network();
    //
    if(read_binary_weights(weights_path, &feature_kernels, &feature_biases) != 0){
        ERROR_MSG("could not read weights from '%s'\n", weights_path);
        return 1;
    } else{
        return 0;
    }
};


bool fextractor::forward(fp_t** input, fp_t* output) {

    feature_network(input, output);


    return true;

};

bool fextractor::clearnetwork() {
    feature_cleanup_network();
}
