

#define EPSILON 0.001

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <memory>
#include <fstream>
#include <chrono>
extern "C" {
#include "model_to_Test/Resnet100_network.h"
#include "model_to_Test/Resnet100_network_initialization.h"
#include "model_to_Test/Resnet100_network_cleanup.h"
//#include "ai-cnn/ai-cnn.h"
#include "image_tools/read_binary_ref.h"
//#include "ai-cnn/utils.h"
}
#include "image_tools/imgUtils.h"

void usage() {
    printf("./reference_input PATH_TO_BINARY_WEIGHTS_FILE PATH_TO_REFERENCE_INPUT PATH_TO_REFERENCE_OUTPUT\n");
}

float almost_equal(float a, float b, float epsilon){
    return (a-b)*(a-b);
}

/*
 * this main function will be used for testing all networks
 * generated likewise ..
 * */
int main() {
    std::cout << "Iniutialized ... " << std::endl;

    imgUtils IMU;
    // network details
    int inp_w, inp_h, inp_ch;
    inp_w = 112;
    inp_h = 112;
    inp_ch = 3; // working on color images
    int outputSize = 512;
    int out_0 = 4, out_1=2, out_2=10;
    char weights_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/Resnet100/model_to_Test/Resnet100_network.weights.bin";
    char reference_output_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/reference_detection_output.bin";
//    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/oefInput_640_640.bin";
    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/refInput_112_112.bin";

//    strcpy(weights_path, argv[1]);

//    char sample_input_path[1024] = "./sub_lenet_001/";
//    strcpy(sample_input_path, argv[2]);


    std::string path_to_test_image = "/home/ali/Projlab/Nist/ProcessedOutputs/croppedFaces/S001-02-t10_01.ppm";
    // keep input image
    Image raw_img, model_input;
    bool readingStatus = IMU.readImg( path_to_test_image, raw_img);
    if (!readingStatus)
    {
        std::cerr<< "cannot read image! \n";
        return 1;
    }

    // preparing image data for inference ...
    fp_t** res_input = (fp_t**) malloc(inp_ch*sizeof(fp_t*));
    for(uint32_t i = 0; i < inp_ch; i++){
        res_input[i] = (fp_t*) malloc(inp_w*inp_h*sizeof(fp_t));
    }
    // output
    fp_t* res_output = (fp_t*) malloc(outputSize*sizeof(fp_t));

//    unsigned char *image_data = model_input.data.get();





    unsigned char * input_data = raw_img.data.get();
    // filling the input

//    for (int i=0; i<3; i++)
//        for (int j=0; j<inp_h*inp_h; j++)
//
//        {
//            res_input[i][j] =  (( ( ( float)*(input_data + 3*j + (2-i) ) )/255 - 0.5 )/0.5 );
////            std::cout<< " verif: " << mbfc_input[i][j]  << std::endl;
//        }

    if(read_binary_reference_input(reference_input_path, &res_input) != 0)
        return -1;


    //
    INFO_MSG("Reading weights from '%s'\n", weights_path);


    // comparing network output and reference output
    float max_score = 1;

    // initialize network


    Resnet100_initialize_network();

    if(read_binary_weights(weights_path, &Resnet100_kernels, &Resnet100_biases) != 0){
        ERROR_MSG("could not read weights from '%s'\n", weights_path);
        return 1;
    }
    for (int i=0; i<10; i++) {
        auto start = std::chrono::high_resolution_clock::now();
        Resnet100_network(res_input, res_output);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        std::cout << "res100 Network Elapsed time: " << elapsed.count() << " s\n";
    }
    for (int i=0; i<10 ;i++) {
        std::cout << "res_output: " << res_output[i] << std::endl;
    }


    Resnet100_cleanup_network();

//    free(ref_output);


    for(uint32_t i = 0; i < 3; i++) {
        free(res_input[i]);
    }

    free(res_input);


    free(res_output);










    return 0;
}


