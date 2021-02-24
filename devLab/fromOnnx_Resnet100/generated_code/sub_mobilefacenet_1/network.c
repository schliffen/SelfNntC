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
    //Inputs: data,354,355
    //Outputs: 353
    //Shape:
    //    data: (1, 3, 112, 112)
    //    354: (64, 3, 3, 3)
    //    355: (64,)
    //    353: (1, 64, 56, 56)

const uint16_t Conv_0_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(input_data[g*3/1],
                                    112,
                                    112,
                                    buffer_353[i],
                                    buffer_354[i*3/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_0_padding,
                                    
                                    buffer_355[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*3/1+1; j < (g+1)*3/1; j+=1){
            static fp_t temp_buffer[56*56];
            convolution2d_padding_naive(input_data[j],
                                        112,
                                        112,
                                        temp_buffer,
                                        buffer_354[i*3/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_0_padding,
                                        0.0);

            add_channel2d_naive(buffer_353[i],
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
    //Inputs: 353,359
    //Outputs: 337
    //Shape:
    //    353: (1, 64, 56, 56)
    //    359: (64, 1, 1)
    //    337: (1, 64, 56, 56)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_353[i],
               56,
               56,
               buffer_337[i],
               buffer_359[i]);
}

    //Layer 2 Conv_2 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 64
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 337,357,358
    //Outputs: 356
    //Shape:
    //    337: (1, 64, 56, 56)
    //    357: (64, 1, 3, 3)
    //    358: (64,)
    //    356: (1, 64, 56, 56)

const uint16_t Conv_2_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 64; g++) {
    for(uint32_t i = g*64/64; i < (g+1)*64/64; i+=1){
        convolution2d_padding_naive(buffer_337[g*64/64],
                                    56,
                                    56,
                                    buffer_356[i],
                                    buffer_357[i*64/64],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_2_padding,
                                    
                                    buffer_358[i]
                                    );
        
    }
}

    //Layer 3 PRelu_3 PRelu
    //Attributes
    //Parameters
    //Inputs: 356,360
    //Outputs: 341
    //Shape:
    //    356: (1, 64, 56, 56)
    //    360: (64, 1, 1)
    //    341: (1, 64, 56, 56)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_356[i],
               56,
               56,
               buffer_341[i],
               buffer_360[i]);
}

    //Layer 4 Reshape_9 Reshape
    //Attributes
    //Parameters
    //Inputs: 341,348
    //Outputs: 349
    //Shape:
    //    341: (1, 64, 56, 56)
    //    348: (2,)
    //    349: (1, 200704)

for(uint32_t i = 0; i < 64; i++){
    memcpy(&buffer_349[i*56*56],
           buffer_341[i],
           56*56*sizeof(fp_t));
}

    //Layer 5 BatchNormalization_10 BatchNormalization1d
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 349,bn.weight,bn.bias,bn.running_mean,bn.running_var
    //Outputs: 350
    //Shape:
    //    349: (1, 200704)
    //    bn.weight: (200704,)
    //    bn.bias: (200704,)
    //    bn.running_mean: (200704,)
    //    bn.running_var: (200704,)
    //    350: (1, 200704)
for (uint32_t i = 0; i < 200704; i++) {
    batch_normalization_naive_1d(buffer_349+i,
                              buffer_350+i,
                              buffer_bn_weight[i],
                              buffer_bn_bias[i],
                              buffer_bn_running_mean[i],
                              buffer_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 6 ReduceL2_11 ReduceL2
    //Attributes
    //  axes: [1]
    //  keepdims: 1
    //Parameters
    //Inputs: 350
    //Outputs: 351
    //Shape:
    //    350: (1, 200704)
    //    351: (1, 1)

norm_naive_l2(buffer_350, 200704,2, buffer_351);

    //Layer 7 Div_12 Div
    //Attributes
    //Parameters
    //Inputs: 350,351
    //Outputs: output
    //Shape:
    //    350: (1, 200704)
    //    351: (1, 1)
    //    output: (1, 200704)

div_by_scalar(buffer_350, 200704, buffer_351, output_output);

}

