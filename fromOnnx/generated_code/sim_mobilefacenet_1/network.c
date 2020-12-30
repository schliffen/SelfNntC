#include "network.h"

void network(fp_t **input_data, fp_t *output_output){
    //Layer 0 Conv_0 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: data,350,351
    //Outputs: 349
    //Shape:
    //    data: (1, 3, 112, 112)
    //    350: (64, 3, 3, 3)
    //    351: (64,)
    //    349: (1, 64, 56, 56)

const uint16_t Conv_0_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(input_data[g*3/1],
                                    112,
                                    112,
                                    buffer_349[i],
                                    buffer_350[i*3/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_0_padding,
                                    
                                    buffer_351[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*3/1+1; j < (g+1)*3/1; j+=1){
            static fp_t temp_buffer[56*56];
            convolution2d_padding_naive(input_data[j],
                                        112,
                                        112,
                                        temp_buffer,
                                        buffer_350[i*3/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_0_padding,
                                        0.0);

            add_channel2d_naive(buffer_349[i],
                                temp_buffer,
                                56,
                                56);
            cnt+=1;
        }
        
    }
}

    //Layer 1 PRelu_1 PRelu
    //Attributes
    //Parameters
    //Inputs: 349,352
    //Outputs: 337
    //Shape:
    //    349: (1, 64, 56, 56)
    //    352: (64, 1, 1)
    //    337: (1, 64, 56, 56)

for (uint32_t i = 0; i < 64; i++) {
    parametrized_relu_naive(buffer_349[i],
               56,
               56,
               buffer_337[i],
               buffer_352[i]);
}

    //Layer 2 Reshape_7 Reshape
    //Attributes
    //Parameters
    //Inputs: 337,344
    //Outputs: 345
    //Shape:
    //    337: (1, 64, 56, 56)
    //    344: (2,)
    //    345: (1, 200704)

for(uint32_t i = 0; i < 64; i++){
    memcpy(&buffer_345[i*56*56],
           buffer_337[i],
           56*56*sizeof(fp_t));
}

    //Layer 3 MatMul_8 MatMul
    //Attributes
    //Parameters
    //Inputs: 345,354
    //Outputs: 347
    //Shape:
    //    345: (1, 200704)
    //    354: (200704, 512)
    //    347: (1, 512)
fully_connected_naive(buffer_345, 200704,
                      buffer_347, 512,
                      buffer_354, NULL);
    //Layer 4 BatchNormalization_9 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 347,bn.running_var,bn.bias,bn.bias,bn.running_var
    //Outputs: output
    //Shape:
    //    347: (1, 512)
    //    bn.running_var: (512,)
    //    bn.bias: (512,)
    //    bn.bias: (512,)
    //    bn.running_var: (512,)
    //    output: (1, 512)
for (uint32_t i = 0; i < 1; i++) {
    batch_normalization_naive(buffer_347,
                              512,
                              1,
                              output_output,
                              buffer_bn_running_var[i],
                              buffer_bn_bias[i],
                              buffer_bn_bias[i],
                              buffer_bn_running_var[i],
                              9.999999747378752e-06);
}
}

