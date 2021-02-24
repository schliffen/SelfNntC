#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <memory>
#include <vector>
#include <chrono>
extern "C" {
    #include "mobile025_320/mb25_network.h"
//    #include "mobile025_320/mb25_network_initialization.h"
//#include "model_to_Test/network_cleanup.h"
//#include "ai-cnn/ai-cnn.h"
#include "image_tools/read_binary_ref.h"
//#include "ai-cnn/utils.h"
}
#include "image_tools/imgUtils.h"
#include "mobile025_320/posprocess.h"





int main() {
    std::cout << "Iniutialized ... " << std::endl;

    imgUtils IMU;
    // network details
    int16_t inp_w, inp_h, inp_ch, f_w, f_h;
    inp_w = 320;
    inp_h =320;
    f_w = 112;
    f_h = 112;
    inp_ch = 3; // working on color images
    int16_t featureSize = 512;
    int16_t alignSize =16800;

    fp_t face_points[10];
    std::vector<std::vector<fp_t>>  anchors;

    char alignment_weight_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network.weights.bin";
//    char alignment_weight_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/model/alignment/alignment.weights.bin";
//    char feature_weights_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/model/feature/feature.weights.bin";
//    char reference_output_landm[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/detection_output_landm.bin";
//    char reference_output_conf[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/detection_output_conf.bin";
    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/det_mb025_320_320.bin";
    std::string path_to_test_image = "/home/ali/Projlab/Nist/ModelAnalysis/images/S001-01-t10_01.ppm";
    // keep input image
    Image raw_img;//, model_input;
    unsigned char model_input [inp_h*inp_w*inp_ch];

    bool readingStatus = IMU.readImg( path_to_test_image, raw_img);
    if (!readingStatus)
    {
        std::cerr<< "cannot read image! \n";
        return 1;
    }
//    model_input.height = inp_h;
//    model_input.width = inp_w;
    //
    bool resizeStatus = IMU.resizeImg(raw_img, model_input, inp_w, inp_h);
    if (!resizeStatus)
    {
        std::cerr<< "cannot resize image! \n";
        return 1;
    }

//    for (int i=0; i<100; i++ )
//        std::cout<< i << ": " << (float )*(model_input+i) << std::endl;


    mb25_initialize_network();

    if(read_binary_weights(alignment_weight_path, &mb25_kernels, &mb25_biases) != 0){
        ERROR_MSG("could not read weights from '%s'\n", alignment_weight_path);
        return 1;
    }


    auto start = std::chrono::high_resolution_clock::now();
//    std::cout<< mb25_buffer_297[0][0] << std::endl;
    mb25_network( model_input);
    //     Record end time
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Network Elapsed time: " << elapsed.count() << " s\n";


    calculateAnchors( (std::vector<std::vector<fp_t>> &) anchors, inp_w, inp_h);
    postprocess_alignment(face_points, inp_w, inp_h, (std::vector<std::vector<fp_t>> &) anchors);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
