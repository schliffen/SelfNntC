//
// Created by ali on 19.02.2021.
//

#ifndef FACE_DETECTION_POSPROCESS_H
#define FACE_DETECTION_POSPROCESS_H
#include <iostream>
#include <cstdint>
#include <assert.h>
#include <string>
#include <vector>
#include <cstring>
#include <fstream>
#include  "mb25_network.h"


fp_t min_sizes[3][2] = {{16, 32}, {64, 128}, {256, 512}};
fp_t steps[3] = {8, 16, 32};
fp_t variance[2] = {0.1, 0.2};
fp_t mean[3] = {104, 117, 123};





void get_feature_map(int16_t imgHeight, int16_t imgWidth, int feature_maps[3][2]) {
    for (int i=0; i<3; i++){
//          for (int j=0; j<2; j++)
        feature_maps[i][0] = std::ceil( imgHeight / steps[i]);
        feature_maps[i][1] = std::ceil(imgWidth / steps[i]);
    }
};



bool postprocess_alignment(fp_t face_points[10], int16_t imgWidth, int16_t imgHeight, std::vector<std::vector<fp_t>>  &);

void calculateAnchors(std::vector<std::vector<fp_t>>& anchors, int16_t imgWidth,  int16_t imgHeight);
#endif //FACE_DETECTION_POSPROCESS_H
