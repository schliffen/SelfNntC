#include "network.h"

void network(fp_t **input_data, fp_t *output_output){
    //Layer 0 Conv_0 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: data,conv.weight,conv.bias
    //Outputs: 4
    //Shape:
    //    data: (1, 3, 112, 112)
    //    conv.weight: (3, 3, 3, 3)
    //    conv.bias: (3,)
    //    4: (1, 3, 110, 110)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*3/1; i < (g+1)*3/1; i+=1){
        convolution2d_naive(input_data[g*3/1],
                            112,
                            112,
                            buffer_4[i],
                            buffer_conv_weight[i*3/1],
                            3,
                            3,
                            1,
                            1,
                            
                            buffer_conv_bias[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*3/1+1; j < (g+1)*3/1; j+=1){
            static fp_t temp_buffer[110*110];
            convolution2d_naive(input_data[j],
                                112,
                                112,
                                temp_buffer,
                                buffer_conv_weight[i*3/1+cnt],
                                3,
                                3,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_4[i],
                                temp_buffer,
                                110,
                                110);
            cnt+=1;
        }
        
    }
}

    //Layer 1 PRelu_1 PRelu
    //Attributes
    //Parameters
    //Inputs: 4,15
    //Outputs: 6
    //Shape:
    //    4: (1, 3, 110, 110)
    //    15: (1, 1, 1)
    //    6: (1, 3, 110, 110)

for (uint32_t i = 0; i < 3; i++) {
    prelu(buffer_4[i],
               110,
               110,
               buffer_6[i],
               0.25);
}

    //Layer 2 Reshape_7 Reshape
    //Attributes
    //Parameters
    //Inputs: 6,13
    //Outputs: output
    //Shape:
    //    6: (1, 3, 110, 110)
    //    13: (2,)
    //    output: (1, 36300)

for(uint32_t i = 0; i < 3; i++){
    memcpy(&output_output[i*110*110],
           buffer_6[i],
           110*110*sizeof(fp_t));
}

}

