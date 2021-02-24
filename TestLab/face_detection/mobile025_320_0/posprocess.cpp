//
// Created by ali on 19.02.2021.
//

#include "posprocess.h"



//  std::vector<std::vector<float>>& anchors
void calculateAnchors(std::vector<std::vector<fp_t>>& anchors, int16_t imgWidth,  int16_t imgHeight){
    // get feature map
    int feature_maps[3][2];
    get_feature_map( imgHeight, imgWidth, feature_maps);
//    std::vector<std::vector<float>> anchors;
//    std::vector<float> landms;
    std::vector<fp_t> anch;
    for (int16_t k=0; k<3; k++ ) {
        //
        int i = 0, j = 0, fcnt = 0;
        while (fcnt < feature_maps[k][0] * feature_maps[k][1]) {
            j = fcnt % feature_maps[k][0];
            i = fcnt /feature_maps[k][0];
            fcnt++;
//            for (int ms = 0; ms < 3; ms++) {
            fp_t s_kx_1 = min_sizes[k][0] / imgWidth;
            fp_t s_ky_1 = min_sizes[k][0] / imgHeight;
            fp_t s_kx_2 = min_sizes[k][1] / imgWidth;
            fp_t s_ky_2 = min_sizes[k][1] / imgHeight;
            fp_t dense_cx = (j + 0.5) * steps[k] / imgWidth;
            fp_t dense_cy = (i + 0.5) * steps[k] / imgHeight;

            anch.clear();
            anch.push_back( (dense_cx<1 ? dense_cx : 1.0) >0 ? (dense_cx<1 ? dense_cx : 1.0): 0 );
            anch.push_back( (dense_cy<1 ? dense_cy : 1.0)>0 ? (dense_cy<1 ? dense_cy : 1.0):0 );

            anch.push_back( (s_kx_1<1 ? s_kx_1 : 1.0)>0 ? (s_kx_1<1 ? s_kx_1 : 1.0):0);
            anch.push_back( (s_ky_1<1 ? s_ky_1 : 1.0)>0 ? (s_ky_1<1 ? s_ky_1 : 1.0):0);
//                anchors.push_back(anch);
            anchors.push_back(anch);
            anch.clear();
            anch.push_back( (dense_cx<1 ? dense_cx : 1.0) >0 ? (dense_cx<1 ? dense_cx : 1.0): 0 );
            anch.push_back( (dense_cy<1 ? dense_cy : 1.0)>0 ? (dense_cy<1 ? dense_cy : 1.0):0 );
            anch.push_back( (s_kx_2<1 ? s_kx_2 : 1.0)>0 ? (s_kx_2<1 ? s_kx_2 : 1.0):0);
            anch.push_back( (s_ky_2<1 ? s_ky_2 : 1.0)>0 ? (s_ky_2<1 ? s_ky_2 : 1.0):0);
            anchors.push_back(anch);
//                }
        }
    }
}



bool postprocess_alignment(fp_t face_points[10], int16_t imgWidth, int16_t imgHeight, std::vector<std::vector<double>>  &anchors){

    // controlling facealignment part
    int32_t gind=0;
    int second_index[3] = {40, 20, 10};
    int first_index[3] = {20, 10, 5}; // should be half
    fp_t max_score=0;

    // decoding the anchors

    float score =0;
    max_score = 0.8;
    int glob_idx = 0;

    // checking the confidence

    for (int i=0; i<3; i++) {
        for (int ind1 = 0; ind1 < first_index[i]; ind1++) {
            for (int ind2 = 0; ind2 < second_index[i]; ind2++) {

                float single_landm[10];
                if (i == 0) {
                    std::cout<< " 0 " <<  mb025_buffer_513[ind1][2 * ind2 ] << std::endl;
                    std::cout<< " 1 " << mb025_buffer_513[ind1][2 * ind2 + 1] << std::endl;
                    score = expl((long double) mb025_buffer_513[ind1][2 * ind2 + 1]) /
                            (expl((long double) mb025_buffer_513[ind1][2 * ind2]) +
                             expl((long double) mb025_buffer_513[ind1][2 * ind2 + 1]));

                    if (score > max_score) {

                        //            std::cout<< face10_pre[i][10*j ] << std::endl;
                        single_landm[0] = (anchors[glob_idx][0] +
                                           mb025_buffer_550[ind1][10 * ind2] * variance[0] * anchors[glob_idx][2]) * imgWidth;
                        //            std::cout<< face10_pre[i][10*j +1 ] << std::endl;
                        single_landm[1] = ( anchors[glob_idx][1] +
                                            mb025_buffer_550[ind1][10 * ind2 + 1] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +2 ] << std::endl;
                        single_landm[2] = ( anchors[glob_idx][0] +
                                            mb025_buffer_550[ind1][10 * ind2 + 2] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +3 ] << std::endl;
                        single_landm[3] = ( anchors[glob_idx][1] +
                                            mb025_buffer_550[ind1][10 * ind2 + 3] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +4 ] << std::endl;
                        single_landm[4] = ( anchors[glob_idx][0] +
                                            mb025_buffer_550[ind1][10 * ind2 + 4] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +5 ] << std::endl;
                        single_landm[5] = ( anchors[glob_idx][1] +
                                            mb025_buffer_550[ind1][10 * ind2 + 5] * variance[0] *  anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +6 ] << std::endl;
                        single_landm[6] = ( anchors[glob_idx][0] +
                                            mb025_buffer_550[ind1][10 * ind2 + 6] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +7 ] << std::endl;
                        single_landm[7] = ( anchors[glob_idx][1] +
                                            mb025_buffer_550[ind1][10 * ind2 + 7] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +8 ] << std::endl;
                        single_landm[8] = ( anchors[glob_idx][0] +
                                            mb025_buffer_550[ind1][10 * ind2 + 8] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +9 ] << std::endl;
                        single_landm[9] = ( anchors[glob_idx][1] +
                                            mb025_buffer_550[ind1][10 * ind2 + 9] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;

//                        landms.clear();
                        max_score = score;
                        for (int l = 0; l < 10; l++) {
//                            landms.push_back(single_landm[l]);
                            face_points[l] = single_landm[l];
//                              std::cout << " l: " << face_points[l] << " glob_idx: "
//                                      << glob_idx
//                                      << " confidence: " << score << std::endl;
                        }
                    }

                } else if (i == 1) {
                    score = expl((long double) mb025_buffer_525[ind1][2 * ind2 + 1]) /
                            (expl((long double) mb025_buffer_525[ind1][2 * ind2]) +
                             expl((long double) mb025_buffer_525[ind1][2 * ind2 + 1]));
                    if (score > max_score) {
                        single_landm[0] = ( anchors[glob_idx][0] +
                                            mb025_buffer_562[ind1][10 * ind2] * variance[0] * anchors[glob_idx][2]) * imgWidth;
                        //            std::cout<< face10_pre[i][10*j +1 ] << std::endl;
                        single_landm[1] = ( anchors[glob_idx][1] +
                                            mb025_buffer_562[ind1][10 * ind2 + 1] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +2 ] << std::endl;
                        single_landm[2] = ( anchors[glob_idx][0] +
                                            mb025_buffer_562[ind1][10 * ind2 + 2] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +3 ] << std::endl;
                        single_landm[3] = ( anchors[glob_idx][1] +
                                            mb025_buffer_562[ind1][10 * ind2 + 3] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +4 ] << std::endl;
                        single_landm[4] = ( anchors[glob_idx][0] +
                                            mb025_buffer_562[ind1][10 * ind2 + 4] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +5 ] << std::endl;
                        single_landm[5] = ( anchors[glob_idx][1] +
                                            mb025_buffer_562[ind1][10 * ind2 + 5] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +6 ] << std::endl;
                        single_landm[6] = ( anchors[glob_idx][0] +
                                            mb025_buffer_562[ind1][10 * ind2 + 6] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +7 ] << std::endl;
                        single_landm[7] = ( anchors[glob_idx][1] +
                                            mb025_buffer_562[ind1][10 * ind2 + 7] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +8 ] << std::endl;
                        single_landm[8] = ( anchors[glob_idx][0] +
                                            mb025_buffer_562[ind1][10 * ind2 + 8] * variance[0] *  anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +9 ] << std::endl;
                        single_landm[9] = ( anchors[glob_idx][1] +
                                            mb025_buffer_562[ind1][10 * ind2 + 9] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;

//                        landms.clear();
                        max_score = score;
                        for (int l = 0; l < 10; l++) {
//                            landms.push_back(single_landm[l]);
                            face_points[l] = single_landm[l];
//                            std::cout << " l: " << face_points[l] << " glob_idx: "
//                                      << glob_idx
//                                      << " confidence: " << score << std::endl;
                        }
                    }

                } else if (i == 2) {
                    score = expl((long double) mb025_buffer_537[ind1][2 * ind2 + 1]) /
                            (expl((long double) mb025_buffer_537[ind1][2 * ind2]) +
                             expl((long double) mb025_buffer_537[ind1][2 * ind2 + 1]));
                    if (score > max_score) {

                        single_landm[0] = ( anchors[glob_idx][0] +
                                            mb025_buffer_574[ind1][10 * ind2] * variance[0] * anchors[glob_idx][2]) * imgWidth;
                        //            std::cout<< face10_pre[i][10*j +1 ] << std::endl;
                        single_landm[1] = ( anchors[glob_idx][1] +
                                            mb025_buffer_574[ind1][10 * ind2 + 1] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +2 ] << std::endl;
                        single_landm[2] = ( anchors[glob_idx][0] +
                                            mb025_buffer_574[ind1][10 * ind2 + 2] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +3 ] << std::endl;
                        single_landm[3] = ( anchors[glob_idx][1] +
                                            mb025_buffer_574[ind1][10 * ind2 + 3] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +4 ] << std::endl;
                        single_landm[4] = ( anchors[glob_idx][0] +
                                            mb025_buffer_574[ind1][10 * ind2 + 4] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +5 ] << std::endl;
                        single_landm[5] = ( anchors[glob_idx][1] +
                                            mb025_buffer_574[ind1][10 * ind2 + 5] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +6 ] << std::endl;
                        single_landm[6] = ( anchors[glob_idx][0] +
                                            mb025_buffer_574[ind1][10 * ind2 + 6] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +7 ] << std::endl;
                        single_landm[7] = ( anchors[glob_idx][1] +
                                            mb025_buffer_574[ind1][10 * ind2 + 7] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //            std::cout<< face10_pre[i][10*j +8 ] << std::endl;
                        single_landm[8] = ( anchors[glob_idx][0] +
                                            mb025_buffer_574[ind1][10 * ind2 + 8] * variance[0] * anchors[glob_idx][2]) *
                                          imgWidth;
                        //            std::cout<< face10_pre[i][10*j +9 ] << std::endl;
                        single_landm[9] = ( anchors[glob_idx][1] +
                                            mb025_buffer_574[ind1][10 * ind2 + 9] * variance[0] * anchors[glob_idx][3]) *
                                          imgHeight;
                        //
//                        landms.clear();
                        max_score = score;
                        for (int l = 0; l < 10; l++) {
//                            landms.push_back(single_landm[l]);
                            face_points[l] = single_landm[l];
//                            std::cout << " l: " << face_points[l] << " glob_idx: "
//                                      << glob_idx
//                                      << " confidence: " << score << std::endl;
                        }
                    }

                }

                std::cout << " l: " << max_score << " glob_idx: "
                                      << glob_idx
                                      << " confidence: " << score << std::endl;
                glob_idx++;
            }
        }
    }


    return true;
};
