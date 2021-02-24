

#define EPSILON 0.001

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <memory>
#include <fstream>
#include <chrono>

extern "C" {
#include "model_to_Test/mbfc_network.h"
#include "model_to_Test/mbfc_network_initialization.h"
#include "model_to_Test/mbfc_network_cleanup.h"
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
    char weights_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/mbfacenet/model_to_Test/mbfc_network.weights.bin";
    char reference_output_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/reference_detection_output.bin";
//    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/oefInput_640_640.bin";
//    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/refInput_112_112.bin";
    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/rec_mbfc025_112_112.bin";

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
//    model_input.height = inp_h;
//    model_input.width = inp_w;
//    //
//    bool resizeStatus = IMU.resizeImg(raw_img, model_input);
//    if (!resizeStatus)
//    {
//        std::cerr<< "cannot resize image! \n";
//        return 1;
//    }
//


    // preparing image data for inference ...
    fp_t** mbfc_input = (fp_t**) malloc(inp_ch*sizeof(fp_t*));
    for(uint32_t i = 0; i < inp_ch; i++){
        mbfc_input[i] = (fp_t*) malloc(inp_w*inp_h*sizeof(fp_t));
    }


    // output
    fp_t* mbfc_output = (fp_t*) malloc(outputSize*sizeof(fp_t));
//    fp_t* cntrl_output = (fp_t*) malloc(outputSize*sizeof(fp_t));



    unsigned char * input_data = raw_img.data.get();
    // filling the input

    for (int i=0; i<3; i++)
        for (int j=0; j<inp_h*inp_h; j++)

        {
            mbfc_input[i][j] =  (( ( ( float)*(input_data + 3*j + (2-i) ) )/255 - 0.5 )/0.5 );
//            std::cout<< " verif: " << mbfc_input[i][j]  << std::endl;
        }

//    for (int j=0; j< 1; j++)
//        for (int i =0; i<5; i++)
//            std::cout<< i <<" mbfc input: "<< mbfc_input[j][i] << std::endl;



//    fp_t** mbfc_input_cntrl = (fp_t**) malloc(inp_ch*sizeof(fp_t*));
//    for(uint32_t i = 0; i < inp_ch; i++){
//        mbfc_input_cntrl[i] = (fp_t*) malloc(inp_w*inp_h*sizeof(fp_t));
//    }
        //
//    if(read_binary_reference_input(reference_input_path, &mbfc_input_cntrl) != 0)
//        return -1;
//
//    for (int i =0; i<15; i++)
//        for (int j=0; j< 3; j++)
//            std::cout<< i <<" cntrl input: "<< mbfc_input_cntrl[j][i] << std::endl;


    // comparing results with the reference output
//    fp_t* ref_output = (fp_t*) malloc(outputSize*sizeof(fp_t));

    //     reading reference output from binary file
//    if(read_binary_reference_output(reference_output_path, &ref_output) != 0)
//        return -1;


//    for (int i =0; i<12; i++)
//        std::cout<< i <<" ref output: "<< ref_output[i] << std::endl;

    // initialize network
//    initialize_network();

    //
    INFO_MSG("Reading weights from '%s'\n", weights_path);




    mbfc_feature_initialize_network();

    if(read_binary_weights(weights_path, &mbfc_kernels, &mbfc_biases) != 0){
        ERROR_MSG("could not read weights from '%s'\n", weights_path);
        return 1;
    }

    auto start = std::chrono::high_resolution_clock::now();

    mbfc_feature_network( mbfc_input, mbfc_output );

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Network Elapsed time: " << elapsed.count() << " s\n";

//    mbfc_feature_network( mbfc_input_cntrl, cntrl_output );



    for (int i=0; i<10 ;i++) {
        std::cout << "mbfc_output: " << mbfc_output[i] << std::endl;
//        std::cout << "cntrl_output: " << cntrl_output[i] << std::endl;

    }

    INFO_MSG("After CNN\n");


    mbfc_feature_cleanup_network();

//    free(ref_output);


    for(uint32_t i = 0; i < 3; i++) {
        free(mbfc_input[i]);
    }

    free(mbfc_input);

    free(mbfc_output);











    return 0;
}


