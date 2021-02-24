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

    float_t min_sizes[3][2] = {{16, 32}, {64, 128}, {256, 512}};
    float_t steps[3] = {8, 16, 32};
    float variance[2] = {0.1, 0.2};
    float mean[3] = {104, 117, 123};


    void get_feature_map(int16_t imgHeight, int16_t imgWidth, int feature_maps[3][2]) {
        for (int i=0; i<3; i++){
//          for (int j=0; j<2; j++)
            feature_maps[i][0] = std::ceil( imgHeight / steps[i]);
            feature_maps[i][1] = std::ceil(imgWidth / steps[i]);
        }
    }


    bool initialize(char*);
    //
    bool forward( unsigned char * input_input0 );

    bool clearnetwork();

    bool postprocess_alignment( fp_t face_points[10], int16_t imgWidth, int16_t imgHeight);



};




#endif //SUBLENET_FACEALIGNMENT_H
