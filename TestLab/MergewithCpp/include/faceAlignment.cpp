//
// Created by ali on 18.01.2021.
//

#include <iostream>
#include <stdio.h>
#include <vector>
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


bool faceAlignment::postprocess_alignment(fp_t **face10_pre, fp_t *outputs_Conf, fp_t face_points[10], int16_t imgWidth, int16_t imgHeight){

    // controlling facealignment part
    int32_t gind=0;
    int out_shape[3] = {12800, 3200, 800};
    fp_t max_score=0;
    for (int i=0; i<3; i++){
        for (int j=0; j< out_shape[i]; j++) {
//            std:: cout << "conf:  "<<  outputs_Concat_176[i][2*j] << " ,  "<< outputs_Concat_176[i][2*j + 1] << std::endl;
//            std:: cout << "box:  "<<  output_Concat_151[i][4*j] << " ,  "<< output_Concat_151[i][4*j + 1] << std::endl;
            std:: cout << "lnd:  "<<  face10_pre[i][10*j] << " ,  "<< face10_pre[i][10*j + 4] << std::endl;
            std::cout << gind << " : " << outputs_Conf[gind] << std::endl;
            if (max_score < outputs_Conf[gind] )
                max_score =  outputs_Conf[gind];
//            if ( max_score > 0.8)
                std::cout << "************************* max index: " << " score: "<< max_score << " index: "<< gind << std::endl;
            gind++;
        }
////        error += almost_equal( ref_output[i], *output_0[0]++, EPSILON);
//        std::cout<< i <<" ref <--> model: "<< ref_output[i] << " <--> " << *(output[0][i]-1)<< " deifference: "<< sqrt(error) << std::endl;
    }
    std::cout<< "Finished ! max score: " << max_score << std::endl;


    // get feature map
    int feature_maps[3][2];
    get_feature_map( imgHeight, imgWidth, feature_maps);
    std::vector<std::vector<float>> anchors;
    std::vector<float> landms;
    std::vector<float> anch;
    for (int16_t k=0; k<3; k++ ) {
        //
        int i = 0, j = 0, fcnt = 0;
        while (fcnt < feature_maps[k][0] * feature_maps[k][1]) {
            i = fcnt % feature_maps[k][0];
            j = fcnt /feature_maps[k][0];
            fcnt++;
            for (int ms = 0; ms < 3; ms++) {
                float s_kx_1 = min_sizes[ms][0] / imgWidth;
                float s_ky_1 = min_sizes[ms][0] / imgHeight;
                float s_kx_2 = min_sizes[ms][1] / imgWidth;
                float s_ky_2 = min_sizes[ms][1] / imgHeight;
                float dense_cx = (j + 0.5) * steps[k] / imgWidth;
                float dense_cy = (i + 0.5) * steps[k] / imgHeight;

                anch.clear();
                anch.push_back( (dense_cx<1 ? dense_cx : 1.0) >0 ? (dense_cx<1 ? dense_cx : 1.0): 0 );
                anch.push_back( dense_cy<1 ? dense_cy : 1.0);

                anch.push_back( s_kx_1<1 ? s_kx_1 : 1.0);
                anch.push_back( s_ky_1<1 ? s_ky_1 : 1.0);
//                anchors.push_back(anch);
                anchors.push_back(anch);
                anch.clear();
                anch.push_back( dense_cx<1 ? dense_cx : 1.0);
                anch.push_back( dense_cy<1 ? dense_cy : 1.0);
                anch.push_back( s_kx_2<1 ? s_kx_2 : 1.0);
                anch.push_back( s_ky_2<1 ? s_kx_2 : 1.0);
                anchors.push_back(anch);
                }
        }
    }
    // decoding the anchors

    max_score = 0;
    int glob_idx = 0;
    for (int i=0; i<3;i++){
        for (int j=0; j<out_shape[i]; j++){
            float single_landm[10];
//            std::cout<< face10_pre[i][10*j ] << std::endl;
            single_landm[0] = (anchors[glob_idx][0] + face10_pre[i][10*j ] * variance[0]* anchors[glob_idx][2]) * imgHeight;
//            std::cout<< face10_pre[i][10*j +1 ] << std::endl;
            single_landm[1] = (anchors[glob_idx][1] + face10_pre[i][10*j +1] * variance[0]* anchors[glob_idx][3]) * imgWidth;
//            std::cout<< face10_pre[i][10*j +2 ] << std::endl;
            single_landm[2] = (anchors[glob_idx][0] + face10_pre[i][10*j +2] * variance[0]* anchors[glob_idx][2]) * imgHeight;
//            std::cout<< face10_pre[i][10*j +3 ] << std::endl;
            single_landm[3] = (anchors[glob_idx][1] + face10_pre[i][10*j +3] * variance[0]* anchors[glob_idx][3])* imgWidth;
//            std::cout<< face10_pre[i][10*j +4 ] << std::endl;
            single_landm[4] = (anchors[glob_idx][0] + face10_pre[i][10*j +4] * variance[0]* anchors[glob_idx][2]) * imgHeight;
//            std::cout<< face10_pre[i][10*j +5 ] << std::endl;
            single_landm[5] = (anchors[glob_idx][1] + face10_pre[i][10*j +5] * variance[0]* anchors[glob_idx][3])* imgWidth;
//            std::cout<< face10_pre[i][10*j +6 ] << std::endl;
            single_landm[6] = (anchors[glob_idx][0] + face10_pre[i][10*j +6] * variance[0]* anchors[glob_idx][2]) * imgHeight;
//            std::cout<< face10_pre[i][10*j +7 ] << std::endl;
            single_landm[7] = (anchors[glob_idx][1] + face10_pre[i][10*j +7] * variance[0]* anchors[glob_idx][3])* imgWidth;
//            std::cout<< face10_pre[i][10*j +8 ] << std::endl;
            single_landm[8] = (anchors[glob_idx][0] + face10_pre[i][10*j +8] * variance[0]* anchors[glob_idx][2]) * imgHeight;
//            std::cout<< face10_pre[i][10*j +9 ] << std::endl;
            single_landm[9] = (anchors[glob_idx][1] + face10_pre[i][10*j +9] * variance[0]* anchors[glob_idx][3])* imgWidth;

            // keep the max score
            // this is working just optimization is required
//            landms * scale1 / resize

            if (outputs_Conf[glob_idx] > max_score) {
                landms.clear();
                max_score = outputs_Conf[glob_idx];
                for (int l = 0; l < 10; l++) {
                    landms.push_back(single_landm[l]);
                    std::cout << " l: " << single_landm[l] << " i: " << i << " j: " << j << " glob_idx: " << glob_idx
                              << " confidence: " << outputs_Conf[glob_idx] << std::endl;
                }
            }
            glob_idx++;

        }
    }




    return true;
};