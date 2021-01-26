

#define EPSILON 0.001

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <memory>
#include <fstream>

extern "C" {
//#include "model_to_Test/network.h"
//#include "model_to_Test/network_initialization.h"
//#include "model_to_Test/network_cleanup.h"
//#include "ai-cnn/ai-cnn.h"
#include "image_tools/read_binary_ref.h"
//#include "ai-cnn/utils.h"
}
#include "image_tools/imgUtils.h"
#include "include/fextractor.h"
#include "include/faceAlignment.h"

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
    int16_t inp_w, inp_h, inp_ch, f_w, f_h;
    inp_w = 640;
    inp_h = 640;
    f_w = 112;
    f_h = 112;
    inp_ch = 3; // working on color images
    int16_t featureSize = 512;
    int16_t alignSize =16800;
    char alignment_weight_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/model/alignment/alignment.weights.bin";
    char feature_weights_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/model/feature/feature.weights.bin";

    //    char reference_output_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/reference_output.bin";
    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/refInput_640_640.bin";
    //    strcpy(weights_path, argv[1]);
    //    char sample_input_path[1024] = "./sub_lenet_001/";
    //    strcpy(sample_input_path, argv[2]);


    std::string path_to_test_image = "/home/ali/Projlab/Nist/ModelAnalysis/images/S001-02-t10_01.ppm";
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

    // preparing image data for inference ...
    fp_t** input = (fp_t**) malloc(inp_ch*sizeof(fp_t*));

    // output
    fp_t* output = (fp_t*) malloc(featureSize*sizeof(fp_t));

    for(uint32_t i = 0; i < inp_ch; i++){
        input[i] = (fp_t*) malloc(inp_w*inp_h*sizeof(fp_t));
    }

//    unsigned char * inp_img = raw_img.data.get();
    // justify network input
    for (int c = 0; c <inp_ch; c++) {
        for (int i=0; i<inp_h * inp_w; i++) {
            if (c == 0)
                input[c][i] =  (fp_t) * (model_input + i*inp_ch + 2-c) - 104.;
            else if (c == 1)
                input[c][i] = (fp_t) *(model_input + i*inp_ch + c)  - 117.;
            else
                input[c][i] = (fp_t) *( model_input + i*inp_ch + 2-c) - 123.;
//            std::cout<< i <<  " : " << input[c][i] << std::endl;
        }
//        std::cout<<  "0 : " << input[0][i] << std::endl;
//        std::cout<<  "1 : " << input[1][i] << std::endl;
//        std::cout<<  "2 : " << input[2][i] << std::endl;
    }


//



    //    unsigned char *image_data = model_input.data.get();
    // reading input from bin
//    if(read_binary_reference_input(reference_input_path, &input) != 0)
//        return -1;


//    for (int j=0; j< 3; j++)
//        for (int i =0; i<inp_w*inp_h; i++)
//            std::cout<< j << " , "  <<  i <<" input: "<< input[j][i] << std::endl;


    // comparing results with the reference output
//    fp_t* ref_output = (fp_t*) malloc(outputSize*sizeof(fp_t));

    //     reading reference output from binary file
//    if(read_binary_reference_output(reference_output_path, &ref_output) != 0)
//        return -1;


    faceAlignment get_face_align;
//    fextractor get_feature;



    get_face_align.initialize(alignment_weight_path);
    fp_t** output_Concat_151 = (fp_t**) malloc(3 * sizeof(fp_t*));
    fp_t** outputs_Concat_201 = (fp_t**) malloc(3 * sizeof(fp_t*));
    fp_t* outputs_Conf = (fp_t*) malloc( alignSize  * sizeof(fp_t*));
    fp_t face_points[10];

    get_face_align.forward(input, output_Concat_151, outputs_Concat_201, outputs_Conf);

    get_face_align.postprocess_alignment(outputs_Concat_201, outputs_Conf, face_points, inp_w, inp_h);



    //    get_feature.initialize(feature_weights_path);
//    get_feature.forward(input, output);







    // comparing network output and reference output
//    float error = 0;
//    for (int i=0; i<inp_w*inp_h; i++) {
//        for (int c = 0; c < inp_ch; c++) {
//            error += almost_equal(ref_output[i], *output++, EPSILON);
//            std::cout << i << " ref <--> model: " << ref_output[i] << " <--> " << *(output - 1) << " deifference: "
//                      << sqrt(error) << std::endl;
//        }
//    }


//    std::cout<< "Model Differences: "<< sqrt(error) << std::endl;

    INFO_MSG("After CNN\n");




    // Wrapping up accupied memory
    get_face_align.clearnetwork();

    for(uint32_t i = 0; i < 3; i++) {
        free(input[i]);
    }

    free(input);
    free( outputs_Conf);

    for (int i=0; i<3; i++){
        free(outputs_Concat_201[i]);
        free(output_Concat_151[i]);
//        free(outputs_Concat_201[i]);
    }

    free(outputs_Concat_201);
    free(output_Concat_151);


//    cleanup_network();

//    netobj.clearnetwork();

//    free(ref_output);


//    for(uint32_t i = 0; i < 3; i++) {
//        free(input[i]);
//    }


//    free(input);



    return 0;
}


