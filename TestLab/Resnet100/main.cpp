

#define EPSILON 0.001

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <memory>
#include <fstream>

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
    char weights_path[1024] = "/home/ali/Projlab/Nist/SelfNntC/TestLab/FinalTest/model_to_Test/Resnet100_network.weights.bin";
    char reference_output_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/reference_detection_output.bin";
//    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/oefInput_640_640.bin";
    char reference_input_path[1024] = "/home/ali/Projlab/Nist/ConversionOutputs/refInput_112_112.bin";

//    strcpy(weights_path, argv[1]);

//    char sample_input_path[1024] = "./sub_lenet_001/";
//    strcpy(sample_input_path, argv[2]);

    /*
    std::string path_to_test_image = "/home/ali/Projlab/Nist/SelfNntC/fromOnnx/generated_code/inputs/face_1.ppm";
    // keep input image
    Image raw_img, model_input;
    bool readingStatus = IMU.readImg( path_to_test_image, raw_img);
    if (!readingStatus)
    {
        std::cerr<< "cannot read image! \n";
        return 1;
    }
    model_input.height = inp_h;
    model_input.width = inp_w;
    //
    bool resizeStatus = IMU.resizeImg(raw_img, model_input);
    if (!resizeStatus)
    {
        std::cerr<< "cannot resize image! \n";
        return 1;
    }
    */
    // preparing image data for inference ...
    fp_t** input = (fp_t**) malloc(inp_ch*sizeof(fp_t*));
    for(uint32_t i = 0; i < inp_ch; i++){
        input[i] = (fp_t*) malloc(inp_w*inp_h*sizeof(fp_t));
    }
    // output
    fp_t* res_output = (fp_t*) malloc(outputSize*sizeof(fp_t));
//    fp_t** output_1 = (fp_t**) malloc(outputSize*sizeof(fp_t));
//    fp_t** output_2 = (fp_t**) malloc(outputSize*sizeof(fp_t));

//    for (int i=0; i<outputSize; i++){
//        output_0[i] = (fp_t *) malloc( out_0 * sizeof (fp_t));
//        output_1[i] = (fp_t *) malloc( out_1 * sizeof (fp_t));
//        output_2[i] = (fp_t *) malloc( out_2 * sizeof (fp_t));
//    }



//    unsigned char *image_data = model_input.data.get();


    if(read_binary_reference_input(reference_input_path, &input) != 0)
        return -1;



//    for (int j=0; j< 3; j++)
//        for (int i =0; i<4; i++)
//            std::cout<< i <<" input: "<< input[j][i] << std::endl;


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

//    if(read_binary_weights(weights_path, &Resnet100_kernels, &Resnet100_biases) != 0){
//        ERROR_MSG("could not read weights from '%s'\n", weights_path);
//        return 1;
//    }

//    for(int i=0; i<10; i++)
//        std::cout<< buffer_297[i][0] << std::endl;


//    fp_t** outputs_Concat_176 = (fp_t**) malloc(3 * sizeof(fp_t*));
//    fp_t** output_Concat_151 = (fp_t**) malloc(3 * sizeof(fp_t*));
//    fp_t** outputs_Concat_201 = (fp_t**) malloc(3 * sizeof(fp_t*));
//    fp_t* outputs_Conf = (fp_t*) malloc( outputSize  * sizeof(fp_t*));

//    network(input, output_Concat_151, outputs_Concat_201, outputs_Conf);

//    for (int i=0; i<512;i++)


    // comparing network output and reference output
    float max_score = 1;
    /*
    float error = 0;
    int32_t gind=0;
    int out_shape[3] = {12800, 3200, 800};
    fp_t max_score=0;
    for (int i=0; i<3; i++){
        for (int j=0; j< out_shape[i]; j++) {
//            std:: cout << "conf:  "<<  outputs_Concat_176[i][2*j] << " ,  "<< outputs_Concat_176[i][2*j + 1] << std::endl;
            std:: cout << "box:  "<<  output_Concat_151[i][4*j] << " ,  "<< output_Concat_151[i][4*j + 1] << std::endl;
            std:: cout << "lnd:  "<<  outputs_Concat_201[i][10*j] << " ,  "<< outputs_Concat_201[i][10*j + 1] << std::endl;
            std::cout << gind << " : " << outputs_Conf[gind] << std::endl;
            if (max_score < outputs_Conf[gind] )
                max_score =  outputs_Conf[gind];
            if ( max_score > 0.8)
                std::cout << "************************* max index: " << gind << std::endl;
            gind++;
        }
//        error += almost_equal( ref_output[i], *output_0[0]++, EPSILON);
//        std::cout<< i <<" ref <--> model: "<< ref_output[i] << " <--> " << *(output[0][i]-1)<< " deifference: "<< sqrt(error) << std::endl;
        }
    */



    // initialize network


    Resnet100_initialize_network();

    if(read_binary_weights(weights_path, &Resnet100_kernels, &Resnet100_biases) != 0){
        ERROR_MSG("could not read weights from '%s'\n", weights_path);
        return 1;
    }


    Resnet100_network( input, res_output);




    std::cout<< "Finished ! max score: " << max_score << std::endl;

    INFO_MSG("After CNN\n");

    /*
    cleanup_network();

//    free(ref_output);


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

     */








    return 0;
}


