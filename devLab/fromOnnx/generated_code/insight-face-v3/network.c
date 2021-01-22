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
    //Inputs: data,1942,1943
    //Outputs: 1941
    //Shape:
    //    data: (1, 3, 112, 112)
    //    1942: (64, 3, 3, 3)
    //    1943: (64,)
    //    1941: (1, 64, 110, 110)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(input_data[g*3/1],
                            112,
                            112,
                            buffer_1941[i],
                            buffer_1942[i*3/1],
                            3,
                            3,
                            1,
                            1,
                            
                            buffer_1943[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*3/1+1; j < (g+1)*3/1; j+=1){
            static fp_t temp_buffer[110*110];
            convolution2d_naive(input_data[j],
                                112,
                                112,
                                temp_buffer,
                                buffer_1942[i*3/1+cnt],
                                3,
                                3,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_1941[i],
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
    //Inputs: 1941,2151
    //Outputs: 800
    //Shape:
    //    1941: (1, 64, 110, 110)
    //    2151: (1, 1, 1)
    //    800: (1, 64, 110, 110)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_1941[i],
               110,
               110,
               buffer_800[i],
               [i]);
}

    //Layer 2 MaxPool_2 MaxPool
    //Attributes
    //  ceil_mode: 0
    //  kernel_shape: [2, 2]
    //  pads: [0, 0, 0, 0]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 800
    //Outputs: 801
    //Shape:
    //    800: (1, 64, 110, 110)
    //    801: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    max_pooling2d_naive(buffer_800[i],
                      110, 110, buffer_801[i],
                      2, 2);
}

    //Layer 3 BatchNormalization_3 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 801,layer1.0.bn0.weight,layer1.0.bn0.bias,layer1.0.bn0.running_mean,layer1.0.bn0.running_var
    //Outputs: 802
    //Shape:
    //    801: (1, 64, 55, 55)
    //    layer1.0.bn0.weight: (64,)
    //    layer1.0.bn0.bias: (64,)
    //    layer1.0.bn0.running_mean: (64,)
    //    layer1.0.bn0.running_var: (64,)
    //    802: (1, 64, 55, 55)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_801[i],
                              55,
                              55,
                              buffer_802[i],
                              buffer_layer1_0_bn0_weight[i],
                              buffer_layer1_0_bn0_bias[i],
                              buffer_layer1_0_bn0_running_mean[i],
                              buffer_layer1_0_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 4 Conv_4 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 802,1945,1946
    //Outputs: 1944
    //Shape:
    //    802: (1, 64, 55, 55)
    //    1945: (64, 64, 3, 3)
    //    1946: (64,)
    //    1944: (1, 64, 55, 55)

const uint16_t Conv_4_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_802[g*64/1],
                                    55,
                                    55,
                                    buffer_1944[i],
                                    buffer_1945[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_4_padding,
                                    
                                    buffer_1946[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[55*55];
            convolution2d_padding_naive(buffer_802[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1945[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_4_padding,
                                        0.0);

            add_channel2d_naive(buffer_1944[i],
                                temp_buffer,
                                55,
                                55);
            cnt+=1;
        }
        
    }
}

    //Layer 5 PRelu_5 PRelu
    //Attributes
    //Parameters
    //Inputs: 1944,2152
    //Outputs: 806
    //Shape:
    //    1944: (1, 64, 55, 55)
    //    2152: (1, 1, 1)
    //    806: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_1944[i],
               55,
               55,
               buffer_806[i],
               [i]);
}

    //Layer 6 Conv_6 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 806,1948,1949
    //Outputs: 1947
    //Shape:
    //    806: (1, 64, 55, 55)
    //    1948: (64, 64, 3, 3)
    //    1949: (64,)
    //    1947: (1, 64, 55, 55)

const uint16_t Conv_6_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_806[g*64/1],
                                    55,
                                    55,
                                    buffer_1947[i],
                                    buffer_1948[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_6_padding,
                                    
                                    buffer_1949[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[55*55];
            convolution2d_padding_naive(buffer_806[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1948[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_6_padding,
                                        0.0);

            add_channel2d_naive(buffer_1947[i],
                                temp_buffer,
                                55,
                                55);
            cnt+=1;
        }
        
    }
}

    //Layer 7 GlobalAveragePool_13 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1947
    //Outputs: 815
    //Shape:
    //    1947: (1, 64, 55, 55)
    //    815: (1, 64, 1, 1)
for (uint32_t i = 0; i < 64; i++) {
    global_average_pooling2d_naive(buffer_1947[i],
                                   55,
                                   55,
                                   buffer_815[i]);
}
    //Layer 8 Gemm_18 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 815,layer1.0.se.fc.0.weight,layer1.0.se.fc.0.bias
    //Outputs: 820
    //Shape:
    //    815: (1, 64, 1, 1)
    //    layer1.0.se.fc.0.weight: (4, 64)
    //    layer1.0.se.fc.0.bias: (4,)
    //    820: (1, 4)

fully_connected_naive(buffer_815, 64,
                      buffer_820, 4,
                      buffer_layer1_0_se_fc_0_weight, buffer_layer1_0_se_fc_0_bias);

    //Layer 9 PRelu_19 PRelu
    //Attributes
    //Parameters
    //Inputs: 820,layer1.0.se.fc.1.weight
    //Outputs: 821
    //Shape:
    //    820: (1, 4)
    //    layer1.0.se.fc.1.weight: (1,)
    //    821: (1, 4)

for (uint32_t i = 0; i < 4; i++) {
    prelu(buffer_820[i],
               1,
               1,
               buffer_821[i],
               [i]);
}

    //Layer 10 Gemm_20 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 821,layer1.0.se.fc.2.weight,layer1.0.se.fc.2.bias
    //Outputs: 822
    //Shape:
    //    821: (1, 4)
    //    layer1.0.se.fc.2.weight: (64, 4)
    //    layer1.0.se.fc.2.bias: (64,)
    //    822: (1, 64)

fully_connected_naive(buffer_821, 4,
                      buffer_822, 64,
                      buffer_layer1_0_se_fc_2_weight, buffer_layer1_0_se_fc_2_bias);

    //Layer 11 Sigmoid_21 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 822
    //Outputs: 823
    //Shape:
    //    822: (1, 64)
    //    823: (1, 64)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_822, 1, 64, buffer_823);

    //Layer 12 Mul_26 Mul
    //Attributes
    //Parameters
    //Inputs: 1947,823
    //Outputs: 832
    //Shape:
    //    1947: (1, 64, 55, 55)
    //    823: (1, 64)
    //    832: (1, 64, 55, 55)
{
for(uint32_t i = 0; i < 64; i++)
    for(uint32_t j = 0; j < 55*55; j++)
        buffer_832[i][j] = buffer_1947[i][j] * <memory_manager.Buffer object at 0x7fae95be8d30>;

}
    //Layer 13 Add_27 Add
    //Attributes
    //Parameters
    //Inputs: 832,801
    //Outputs: 833
    //Shape:
    //    832: (1, 64, 55, 55)
    //    801: (1, 64, 55, 55)
    //    833: (1, 64, 55, 55)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_833[i],
               buffer_832[i],
               55*55*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_833[i], buffer_801[i], 55, 55);
    }


    //Layer 14 PRelu_28 PRelu
    //Attributes
    //Parameters
    //Inputs: 833,2155
    //Outputs: 835
    //Shape:
    //    833: (1, 64, 55, 55)
    //    2155: (1, 1, 1)
    //    835: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_833[i],
               55,
               55,
               buffer_835[i],
               [i]);
}

    //Layer 15 BatchNormalization_29 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 835,layer1.1.bn0.weight,layer1.1.bn0.bias,layer1.1.bn0.running_mean,layer1.1.bn0.running_var
    //Outputs: 836
    //Shape:
    //    835: (1, 64, 55, 55)
    //    layer1.1.bn0.weight: (64,)
    //    layer1.1.bn0.bias: (64,)
    //    layer1.1.bn0.running_mean: (64,)
    //    layer1.1.bn0.running_var: (64,)
    //    836: (1, 64, 55, 55)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_835[i],
                              55,
                              55,
                              buffer_836[i],
                              buffer_layer1_1_bn0_weight[i],
                              buffer_layer1_1_bn0_bias[i],
                              buffer_layer1_1_bn0_running_mean[i],
                              buffer_layer1_1_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 16 Conv_30 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 836,1951,1952
    //Outputs: 1950
    //Shape:
    //    836: (1, 64, 55, 55)
    //    1951: (64, 64, 3, 3)
    //    1952: (64,)
    //    1950: (1, 64, 55, 55)

const uint16_t Conv_30_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_836[g*64/1],
                                    55,
                                    55,
                                    buffer_1950[i],
                                    buffer_1951[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_30_padding,
                                    
                                    buffer_1952[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[55*55];
            convolution2d_padding_naive(buffer_836[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1951[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_30_padding,
                                        0.0);

            add_channel2d_naive(buffer_1950[i],
                                temp_buffer,
                                55,
                                55);
            cnt+=1;
        }
        
    }
}

    //Layer 17 PRelu_31 PRelu
    //Attributes
    //Parameters
    //Inputs: 1950,2156
    //Outputs: 840
    //Shape:
    //    1950: (1, 64, 55, 55)
    //    2156: (1, 1, 1)
    //    840: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_1950[i],
               55,
               55,
               buffer_840[i],
               [i]);
}

    //Layer 18 Conv_32 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 840,1954,1955
    //Outputs: 1953
    //Shape:
    //    840: (1, 64, 55, 55)
    //    1954: (64, 64, 3, 3)
    //    1955: (64,)
    //    1953: (1, 64, 55, 55)

const uint16_t Conv_32_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_840[g*64/1],
                                    55,
                                    55,
                                    buffer_1953[i],
                                    buffer_1954[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_32_padding,
                                    
                                    buffer_1955[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[55*55];
            convolution2d_padding_naive(buffer_840[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1954[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_32_padding,
                                        0.0);

            add_channel2d_naive(buffer_1953[i],
                                temp_buffer,
                                55,
                                55);
            cnt+=1;
        }
        
    }
}

    //Layer 19 GlobalAveragePool_39 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1953
    //Outputs: 849
    //Shape:
    //    1953: (1, 64, 55, 55)
    //    849: (1, 64, 1, 1)
for (uint32_t i = 0; i < 64; i++) {
    global_average_pooling2d_naive(buffer_1953[i],
                                   55,
                                   55,
                                   buffer_849[i]);
}
    //Layer 20 Gemm_44 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 849,layer1.1.se.fc.0.weight,layer1.1.se.fc.0.bias
    //Outputs: 854
    //Shape:
    //    849: (1, 64, 1, 1)
    //    layer1.1.se.fc.0.weight: (4, 64)
    //    layer1.1.se.fc.0.bias: (4,)
    //    854: (1, 4)

fully_connected_naive(buffer_849, 64,
                      buffer_854, 4,
                      buffer_layer1_1_se_fc_0_weight, buffer_layer1_1_se_fc_0_bias);

    //Layer 21 PRelu_45 PRelu
    //Attributes
    //Parameters
    //Inputs: 854,layer1.1.se.fc.1.weight
    //Outputs: 855
    //Shape:
    //    854: (1, 4)
    //    layer1.1.se.fc.1.weight: (1,)
    //    855: (1, 4)

for (uint32_t i = 0; i < 4; i++) {
    prelu(buffer_854[i],
               1,
               1,
               buffer_855[i],
               [i]);
}

    //Layer 22 Gemm_46 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 855,layer1.1.se.fc.2.weight,layer1.1.se.fc.2.bias
    //Outputs: 856
    //Shape:
    //    855: (1, 4)
    //    layer1.1.se.fc.2.weight: (64, 4)
    //    layer1.1.se.fc.2.bias: (64,)
    //    856: (1, 64)

fully_connected_naive(buffer_855, 4,
                      buffer_856, 64,
                      buffer_layer1_1_se_fc_2_weight, buffer_layer1_1_se_fc_2_bias);

    //Layer 23 Sigmoid_47 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 856
    //Outputs: 857
    //Shape:
    //    856: (1, 64)
    //    857: (1, 64)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_856, 1, 64, buffer_857);

    //Layer 24 Mul_52 Mul
    //Attributes
    //Parameters
    //Inputs: 1953,857
    //Outputs: 866
    //Shape:
    //    1953: (1, 64, 55, 55)
    //    857: (1, 64)
    //    866: (1, 64, 55, 55)
{
for(uint32_t i = 0; i < 64; i++)
    for(uint32_t j = 0; j < 55*55; j++)
        buffer_866[i][j] = buffer_1953[i][j] * <memory_manager.Buffer object at 0x7fae8f410278>;

}
    //Layer 25 Add_53 Add
    //Attributes
    //Parameters
    //Inputs: 866,835
    //Outputs: 867
    //Shape:
    //    866: (1, 64, 55, 55)
    //    835: (1, 64, 55, 55)
    //    867: (1, 64, 55, 55)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_867[i],
               buffer_866[i],
               55*55*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_867[i], buffer_835[i], 55, 55);
    }


    //Layer 26 PRelu_54 PRelu
    //Attributes
    //Parameters
    //Inputs: 867,2159
    //Outputs: 869
    //Shape:
    //    867: (1, 64, 55, 55)
    //    2159: (1, 1, 1)
    //    869: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_867[i],
               55,
               55,
               buffer_869[i],
               [i]);
}

    //Layer 27 BatchNormalization_55 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 869,layer1.2.bn0.weight,layer1.2.bn0.bias,layer1.2.bn0.running_mean,layer1.2.bn0.running_var
    //Outputs: 870
    //Shape:
    //    869: (1, 64, 55, 55)
    //    layer1.2.bn0.weight: (64,)
    //    layer1.2.bn0.bias: (64,)
    //    layer1.2.bn0.running_mean: (64,)
    //    layer1.2.bn0.running_var: (64,)
    //    870: (1, 64, 55, 55)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_869[i],
                              55,
                              55,
                              buffer_870[i],
                              buffer_layer1_2_bn0_weight[i],
                              buffer_layer1_2_bn0_bias[i],
                              buffer_layer1_2_bn0_running_mean[i],
                              buffer_layer1_2_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 28 Conv_56 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 870,1957,1958
    //Outputs: 1956
    //Shape:
    //    870: (1, 64, 55, 55)
    //    1957: (64, 64, 3, 3)
    //    1958: (64,)
    //    1956: (1, 64, 55, 55)

const uint16_t Conv_56_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_870[g*64/1],
                                    55,
                                    55,
                                    buffer_1956[i],
                                    buffer_1957[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_56_padding,
                                    
                                    buffer_1958[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[55*55];
            convolution2d_padding_naive(buffer_870[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1957[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_56_padding,
                                        0.0);

            add_channel2d_naive(buffer_1956[i],
                                temp_buffer,
                                55,
                                55);
            cnt+=1;
        }
        
    }
}

    //Layer 29 PRelu_57 PRelu
    //Attributes
    //Parameters
    //Inputs: 1956,2160
    //Outputs: 874
    //Shape:
    //    1956: (1, 64, 55, 55)
    //    2160: (1, 1, 1)
    //    874: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_1956[i],
               55,
               55,
               buffer_874[i],
               [i]);
}

    //Layer 30 Conv_58 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 874,1960,1961
    //Outputs: 1959
    //Shape:
    //    874: (1, 64, 55, 55)
    //    1960: (64, 64, 3, 3)
    //    1961: (64,)
    //    1959: (1, 64, 55, 55)

const uint16_t Conv_58_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_874[g*64/1],
                                    55,
                                    55,
                                    buffer_1959[i],
                                    buffer_1960[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_58_padding,
                                    
                                    buffer_1961[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[55*55];
            convolution2d_padding_naive(buffer_874[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1960[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_58_padding,
                                        0.0);

            add_channel2d_naive(buffer_1959[i],
                                temp_buffer,
                                55,
                                55);
            cnt+=1;
        }
        
    }
}

    //Layer 31 GlobalAveragePool_65 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1959
    //Outputs: 883
    //Shape:
    //    1959: (1, 64, 55, 55)
    //    883: (1, 64, 1, 1)
for (uint32_t i = 0; i < 64; i++) {
    global_average_pooling2d_naive(buffer_1959[i],
                                   55,
                                   55,
                                   buffer_883[i]);
}
    //Layer 32 Gemm_70 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 883,layer1.2.se.fc.0.weight,layer1.2.se.fc.0.bias
    //Outputs: 888
    //Shape:
    //    883: (1, 64, 1, 1)
    //    layer1.2.se.fc.0.weight: (4, 64)
    //    layer1.2.se.fc.0.bias: (4,)
    //    888: (1, 4)

fully_connected_naive(buffer_883, 64,
                      buffer_888, 4,
                      buffer_layer1_2_se_fc_0_weight, buffer_layer1_2_se_fc_0_bias);

    //Layer 33 PRelu_71 PRelu
    //Attributes
    //Parameters
    //Inputs: 888,layer1.2.se.fc.1.weight
    //Outputs: 889
    //Shape:
    //    888: (1, 4)
    //    layer1.2.se.fc.1.weight: (1,)
    //    889: (1, 4)

for (uint32_t i = 0; i < 4; i++) {
    prelu(buffer_888[i],
               1,
               1,
               buffer_889[i],
               [i]);
}

    //Layer 34 Gemm_72 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 889,layer1.2.se.fc.2.weight,layer1.2.se.fc.2.bias
    //Outputs: 890
    //Shape:
    //    889: (1, 4)
    //    layer1.2.se.fc.2.weight: (64, 4)
    //    layer1.2.se.fc.2.bias: (64,)
    //    890: (1, 64)

fully_connected_naive(buffer_889, 4,
                      buffer_890, 64,
                      buffer_layer1_2_se_fc_2_weight, buffer_layer1_2_se_fc_2_bias);

    //Layer 35 Sigmoid_73 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 890
    //Outputs: 891
    //Shape:
    //    890: (1, 64)
    //    891: (1, 64)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_890, 1, 64, buffer_891);

    //Layer 36 Mul_78 Mul
    //Attributes
    //Parameters
    //Inputs: 1959,891
    //Outputs: 900
    //Shape:
    //    1959: (1, 64, 55, 55)
    //    891: (1, 64)
    //    900: (1, 64, 55, 55)
{
for(uint32_t i = 0; i < 64; i++)
    for(uint32_t j = 0; j < 55*55; j++)
        buffer_900[i][j] = buffer_1959[i][j] * <memory_manager.Buffer object at 0x7fae95c0b0b8>;

}
    //Layer 37 Add_79 Add
    //Attributes
    //Parameters
    //Inputs: 900,869
    //Outputs: 901
    //Shape:
    //    900: (1, 64, 55, 55)
    //    869: (1, 64, 55, 55)
    //    901: (1, 64, 55, 55)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_901[i],
               buffer_900[i],
               55*55*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_901[i], buffer_869[i], 55, 55);
    }


    //Layer 38 PRelu_80 PRelu
    //Attributes
    //Parameters
    //Inputs: 901,2163
    //Outputs: 903
    //Shape:
    //    901: (1, 64, 55, 55)
    //    2163: (1, 1, 1)
    //    903: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_901[i],
               55,
               55,
               buffer_903[i],
               [i]);
}

    //Layer 39 BatchNormalization_81 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 903,layer2.0.bn0.weight,layer2.0.bn0.bias,layer2.0.bn0.running_mean,layer2.0.bn0.running_var
    //Outputs: 904
    //Shape:
    //    903: (1, 64, 55, 55)
    //    layer2.0.bn0.weight: (64,)
    //    layer2.0.bn0.bias: (64,)
    //    layer2.0.bn0.running_mean: (64,)
    //    layer2.0.bn0.running_var: (64,)
    //    904: (1, 64, 55, 55)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_903[i],
                              55,
                              55,
                              buffer_904[i],
                              buffer_layer2_0_bn0_weight[i],
                              buffer_layer2_0_bn0_bias[i],
                              buffer_layer2_0_bn0_running_mean[i],
                              buffer_layer2_0_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 40 Conv_82 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 904,1963,1964
    //Outputs: 1962
    //Shape:
    //    904: (1, 64, 55, 55)
    //    1963: (64, 64, 3, 3)
    //    1964: (64,)
    //    1962: (1, 64, 55, 55)

const uint16_t Conv_82_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_904[g*64/1],
                                    55,
                                    55,
                                    buffer_1962[i],
                                    buffer_1963[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_82_padding,
                                    
                                    buffer_1964[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[55*55];
            convolution2d_padding_naive(buffer_904[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1963[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_82_padding,
                                        0.0);

            add_channel2d_naive(buffer_1962[i],
                                temp_buffer,
                                55,
                                55);
            cnt+=1;
        }
        
    }
}

    //Layer 41 PRelu_83 PRelu
    //Attributes
    //Parameters
    //Inputs: 1962,2164
    //Outputs: 908
    //Shape:
    //    1962: (1, 64, 55, 55)
    //    2164: (1, 1, 1)
    //    908: (1, 64, 55, 55)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_1962[i],
               55,
               55,
               buffer_908[i],
               [i]);
}

    //Layer 42 Conv_84 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 908,1966,1967
    //Outputs: 1965
    //Shape:
    //    908: (1, 64, 55, 55)
    //    1966: (128, 64, 3, 3)
    //    1967: (128,)
    //    1965: (1, 128, 28, 28)

const uint16_t Conv_84_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_908[g*64/1],
                                    55,
                                    55,
                                    buffer_1965[i],
                                    buffer_1966[i*64/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_84_padding,
                                    
                                    buffer_1967[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_908[j],
                                        55,
                                        55,
                                        temp_buffer,
                                        buffer_1966[i*64/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_84_padding,
                                        0.0);

            add_channel2d_naive(buffer_1965[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 43 GlobalAveragePool_91 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1965
    //Outputs: 917
    //Shape:
    //    1965: (1, 128, 28, 28)
    //    917: (1, 128, 1, 1)
for (uint32_t i = 0; i < 128; i++) {
    global_average_pooling2d_naive(buffer_1965[i],
                                   28,
                                   28,
                                   buffer_917[i]);
}
    //Layer 44 Gemm_96 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 917,layer2.0.se.fc.0.weight,layer2.0.se.fc.0.bias
    //Outputs: 922
    //Shape:
    //    917: (1, 128, 1, 1)
    //    layer2.0.se.fc.0.weight: (8, 128)
    //    layer2.0.se.fc.0.bias: (8,)
    //    922: (1, 8)

fully_connected_naive(buffer_917, 128,
                      buffer_922, 8,
                      buffer_layer2_0_se_fc_0_weight, buffer_layer2_0_se_fc_0_bias);

    //Layer 45 PRelu_97 PRelu
    //Attributes
    //Parameters
    //Inputs: 922,layer2.0.se.fc.1.weight
    //Outputs: 923
    //Shape:
    //    922: (1, 8)
    //    layer2.0.se.fc.1.weight: (1,)
    //    923: (1, 8)

for (uint32_t i = 0; i < 8; i++) {
    prelu(buffer_922[i],
               1,
               1,
               buffer_923[i],
               [i]);
}

    //Layer 46 Gemm_98 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 923,layer2.0.se.fc.2.weight,layer2.0.se.fc.2.bias
    //Outputs: 924
    //Shape:
    //    923: (1, 8)
    //    layer2.0.se.fc.2.weight: (128, 8)
    //    layer2.0.se.fc.2.bias: (128,)
    //    924: (1, 128)

fully_connected_naive(buffer_923, 8,
                      buffer_924, 128,
                      buffer_layer2_0_se_fc_2_weight, buffer_layer2_0_se_fc_2_bias);

    //Layer 47 Sigmoid_99 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 924
    //Outputs: 925
    //Shape:
    //    924: (1, 128)
    //    925: (1, 128)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_924, 1, 128, buffer_925);

    //Layer 48 Mul_104 Mul
    //Attributes
    //Parameters
    //Inputs: 1965,925
    //Outputs: 934
    //Shape:
    //    1965: (1, 128, 28, 28)
    //    925: (1, 128)
    //    934: (1, 128, 28, 28)
{
for(uint32_t i = 0; i < 128; i++)
    for(uint32_t j = 0; j < 28*28; j++)
        buffer_934[i][j] = buffer_1965[i][j] * <memory_manager.Buffer object at 0x7fae8f435cc0>;

}
    //Layer 49 Conv_105 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 903,1969,1970
    //Outputs: 1968
    //Shape:
    //    903: (1, 64, 55, 55)
    //    1969: (128, 64, 1, 1)
    //    1970: (128,)
    //    1968: (1, 128, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_903[g*64/1],
                            55,
                            55,
                            buffer_1968[i],
                            buffer_1969[i*64/1],
                            1,
                            1,
                            2,
                            2,
                            
                            buffer_1970[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_903[j],
                                55,
                                55,
                                temp_buffer,
                                buffer_1969[i*64/1+cnt],
                                1,
                                1,
                                2,
                                2,
                                0.0);

            add_channel2d_naive(buffer_1968[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 50 Add_106 Add
    //Attributes
    //Parameters
    //Inputs: 934,1968
    //Outputs: 937
    //Shape:
    //    934: (1, 128, 28, 28)
    //    1968: (1, 128, 28, 28)
    //    937: (1, 128, 28, 28)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_937[i],
               buffer_934[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_937[i], buffer_1968[i], 28, 28);
    }


    //Layer 51 PRelu_107 PRelu
    //Attributes
    //Parameters
    //Inputs: 937,2167
    //Outputs: 939
    //Shape:
    //    937: (1, 128, 28, 28)
    //    2167: (1, 1, 1)
    //    939: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_937[i],
               28,
               28,
               buffer_939[i],
               [i]);
}

    //Layer 52 BatchNormalization_108 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 939,layer2.1.bn0.weight,layer2.1.bn0.bias,layer2.1.bn0.running_mean,layer2.1.bn0.running_var
    //Outputs: 940
    //Shape:
    //    939: (1, 128, 28, 28)
    //    layer2.1.bn0.weight: (128,)
    //    layer2.1.bn0.bias: (128,)
    //    layer2.1.bn0.running_mean: (128,)
    //    layer2.1.bn0.running_var: (128,)
    //    940: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_939[i],
                              28,
                              28,
                              buffer_940[i],
                              buffer_layer2_1_bn0_weight[i],
                              buffer_layer2_1_bn0_bias[i],
                              buffer_layer2_1_bn0_running_mean[i],
                              buffer_layer2_1_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 53 Conv_109 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 940,1972,1973
    //Outputs: 1971
    //Shape:
    //    940: (1, 128, 28, 28)
    //    1972: (128, 128, 3, 3)
    //    1973: (128,)
    //    1971: (1, 128, 28, 28)

const uint16_t Conv_109_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_940[g*128/1],
                                    28,
                                    28,
                                    buffer_1971[i],
                                    buffer_1972[i*128/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_109_padding,
                                    
                                    buffer_1973[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_940[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1972[i*128/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_109_padding,
                                        0.0);

            add_channel2d_naive(buffer_1971[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 54 PRelu_110 PRelu
    //Attributes
    //Parameters
    //Inputs: 1971,2168
    //Outputs: 944
    //Shape:
    //    1971: (1, 128, 28, 28)
    //    2168: (1, 1, 1)
    //    944: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_1971[i],
               28,
               28,
               buffer_944[i],
               [i]);
}

    //Layer 55 Conv_111 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 944,1975,1976
    //Outputs: 1974
    //Shape:
    //    944: (1, 128, 28, 28)
    //    1975: (128, 128, 3, 3)
    //    1976: (128,)
    //    1974: (1, 128, 28, 28)

const uint16_t Conv_111_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_944[g*128/1],
                                    28,
                                    28,
                                    buffer_1974[i],
                                    buffer_1975[i*128/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_111_padding,
                                    
                                    buffer_1976[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_944[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1975[i*128/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_111_padding,
                                        0.0);

            add_channel2d_naive(buffer_1974[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 56 GlobalAveragePool_118 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1974
    //Outputs: 953
    //Shape:
    //    1974: (1, 128, 28, 28)
    //    953: (1, 128, 1, 1)
for (uint32_t i = 0; i < 128; i++) {
    global_average_pooling2d_naive(buffer_1974[i],
                                   28,
                                   28,
                                   buffer_953[i]);
}
    //Layer 57 Gemm_123 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 953,layer2.1.se.fc.0.weight,layer2.1.se.fc.0.bias
    //Outputs: 958
    //Shape:
    //    953: (1, 128, 1, 1)
    //    layer2.1.se.fc.0.weight: (8, 128)
    //    layer2.1.se.fc.0.bias: (8,)
    //    958: (1, 8)

fully_connected_naive(buffer_953, 128,
                      buffer_958, 8,
                      buffer_layer2_1_se_fc_0_weight, buffer_layer2_1_se_fc_0_bias);

    //Layer 58 PRelu_124 PRelu
    //Attributes
    //Parameters
    //Inputs: 958,layer2.1.se.fc.1.weight
    //Outputs: 959
    //Shape:
    //    958: (1, 8)
    //    layer2.1.se.fc.1.weight: (1,)
    //    959: (1, 8)

for (uint32_t i = 0; i < 8; i++) {
    prelu(buffer_958[i],
               1,
               1,
               buffer_959[i],
               [i]);
}

    //Layer 59 Gemm_125 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 959,layer2.1.se.fc.2.weight,layer2.1.se.fc.2.bias
    //Outputs: 960
    //Shape:
    //    959: (1, 8)
    //    layer2.1.se.fc.2.weight: (128, 8)
    //    layer2.1.se.fc.2.bias: (128,)
    //    960: (1, 128)

fully_connected_naive(buffer_959, 8,
                      buffer_960, 128,
                      buffer_layer2_1_se_fc_2_weight, buffer_layer2_1_se_fc_2_bias);

    //Layer 60 Sigmoid_126 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 960
    //Outputs: 961
    //Shape:
    //    960: (1, 128)
    //    961: (1, 128)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_960, 1, 128, buffer_961);

    //Layer 61 Mul_131 Mul
    //Attributes
    //Parameters
    //Inputs: 1974,961
    //Outputs: 970
    //Shape:
    //    1974: (1, 128, 28, 28)
    //    961: (1, 128)
    //    970: (1, 128, 28, 28)
{
for(uint32_t i = 0; i < 128; i++)
    for(uint32_t j = 0; j < 28*28; j++)
        buffer_970[i][j] = buffer_1974[i][j] * <memory_manager.Buffer object at 0x7fae8f424f28>;

}
    //Layer 62 Add_132 Add
    //Attributes
    //Parameters
    //Inputs: 970,939
    //Outputs: 971
    //Shape:
    //    970: (1, 128, 28, 28)
    //    939: (1, 128, 28, 28)
    //    971: (1, 128, 28, 28)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_971[i],
               buffer_970[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_971[i], buffer_939[i], 28, 28);
    }


    //Layer 63 PRelu_133 PRelu
    //Attributes
    //Parameters
    //Inputs: 971,2171
    //Outputs: 973
    //Shape:
    //    971: (1, 128, 28, 28)
    //    2171: (1, 1, 1)
    //    973: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_971[i],
               28,
               28,
               buffer_973[i],
               [i]);
}

    //Layer 64 BatchNormalization_134 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 973,layer2.2.bn0.weight,layer2.2.bn0.bias,layer2.2.bn0.running_mean,layer2.2.bn0.running_var
    //Outputs: 974
    //Shape:
    //    973: (1, 128, 28, 28)
    //    layer2.2.bn0.weight: (128,)
    //    layer2.2.bn0.bias: (128,)
    //    layer2.2.bn0.running_mean: (128,)
    //    layer2.2.bn0.running_var: (128,)
    //    974: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_973[i],
                              28,
                              28,
                              buffer_974[i],
                              buffer_layer2_2_bn0_weight[i],
                              buffer_layer2_2_bn0_bias[i],
                              buffer_layer2_2_bn0_running_mean[i],
                              buffer_layer2_2_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 65 Conv_135 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 974,1978,1979
    //Outputs: 1977
    //Shape:
    //    974: (1, 128, 28, 28)
    //    1978: (128, 128, 3, 3)
    //    1979: (128,)
    //    1977: (1, 128, 28, 28)

const uint16_t Conv_135_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_974[g*128/1],
                                    28,
                                    28,
                                    buffer_1977[i],
                                    buffer_1978[i*128/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_135_padding,
                                    
                                    buffer_1979[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_974[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1978[i*128/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_135_padding,
                                        0.0);

            add_channel2d_naive(buffer_1977[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 66 PRelu_136 PRelu
    //Attributes
    //Parameters
    //Inputs: 1977,2172
    //Outputs: 978
    //Shape:
    //    1977: (1, 128, 28, 28)
    //    2172: (1, 1, 1)
    //    978: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_1977[i],
               28,
               28,
               buffer_978[i],
               [i]);
}

    //Layer 67 Conv_137 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 978,1981,1982
    //Outputs: 1980
    //Shape:
    //    978: (1, 128, 28, 28)
    //    1981: (128, 128, 3, 3)
    //    1982: (128,)
    //    1980: (1, 128, 28, 28)

const uint16_t Conv_137_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_978[g*128/1],
                                    28,
                                    28,
                                    buffer_1980[i],
                                    buffer_1981[i*128/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_137_padding,
                                    
                                    buffer_1982[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_978[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1981[i*128/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_137_padding,
                                        0.0);

            add_channel2d_naive(buffer_1980[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 68 GlobalAveragePool_144 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1980
    //Outputs: 987
    //Shape:
    //    1980: (1, 128, 28, 28)
    //    987: (1, 128, 1, 1)
for (uint32_t i = 0; i < 128; i++) {
    global_average_pooling2d_naive(buffer_1980[i],
                                   28,
                                   28,
                                   buffer_987[i]);
}
    //Layer 69 Gemm_149 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 987,layer2.2.se.fc.0.weight,layer2.2.se.fc.0.bias
    //Outputs: 992
    //Shape:
    //    987: (1, 128, 1, 1)
    //    layer2.2.se.fc.0.weight: (8, 128)
    //    layer2.2.se.fc.0.bias: (8,)
    //    992: (1, 8)

fully_connected_naive(buffer_987, 128,
                      buffer_992, 8,
                      buffer_layer2_2_se_fc_0_weight, buffer_layer2_2_se_fc_0_bias);

    //Layer 70 PRelu_150 PRelu
    //Attributes
    //Parameters
    //Inputs: 992,layer2.2.se.fc.1.weight
    //Outputs: 993
    //Shape:
    //    992: (1, 8)
    //    layer2.2.se.fc.1.weight: (1,)
    //    993: (1, 8)

for (uint32_t i = 0; i < 8; i++) {
    prelu(buffer_992[i],
               1,
               1,
               buffer_993[i],
               [i]);
}

    //Layer 71 Gemm_151 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 993,layer2.2.se.fc.2.weight,layer2.2.se.fc.2.bias
    //Outputs: 994
    //Shape:
    //    993: (1, 8)
    //    layer2.2.se.fc.2.weight: (128, 8)
    //    layer2.2.se.fc.2.bias: (128,)
    //    994: (1, 128)

fully_connected_naive(buffer_993, 8,
                      buffer_994, 128,
                      buffer_layer2_2_se_fc_2_weight, buffer_layer2_2_se_fc_2_bias);

    //Layer 72 Sigmoid_152 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 994
    //Outputs: 995
    //Shape:
    //    994: (1, 128)
    //    995: (1, 128)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_994, 1, 128, buffer_995);

    //Layer 73 Mul_157 Mul
    //Attributes
    //Parameters
    //Inputs: 1980,995
    //Outputs: 1004
    //Shape:
    //    1980: (1, 128, 28, 28)
    //    995: (1, 128)
    //    1004: (1, 128, 28, 28)
{
for(uint32_t i = 0; i < 128; i++)
    for(uint32_t j = 0; j < 28*28; j++)
        buffer_1004[i][j] = buffer_1980[i][j] * <memory_manager.Buffer object at 0x7fae8ac4dc18>;

}
    //Layer 74 Add_158 Add
    //Attributes
    //Parameters
    //Inputs: 1004,973
    //Outputs: 1005
    //Shape:
    //    1004: (1, 128, 28, 28)
    //    973: (1, 128, 28, 28)
    //    1005: (1, 128, 28, 28)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_1005[i],
               buffer_1004[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_1005[i], buffer_973[i], 28, 28);
    }


    //Layer 75 PRelu_159 PRelu
    //Attributes
    //Parameters
    //Inputs: 1005,2175
    //Outputs: 1007
    //Shape:
    //    1005: (1, 128, 28, 28)
    //    2175: (1, 1, 1)
    //    1007: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_1005[i],
               28,
               28,
               buffer_1007[i],
               [i]);
}

    //Layer 76 BatchNormalization_160 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1007,layer2.3.bn0.weight,layer2.3.bn0.bias,layer2.3.bn0.running_mean,layer2.3.bn0.running_var
    //Outputs: 1008
    //Shape:
    //    1007: (1, 128, 28, 28)
    //    layer2.3.bn0.weight: (128,)
    //    layer2.3.bn0.bias: (128,)
    //    layer2.3.bn0.running_mean: (128,)
    //    layer2.3.bn0.running_var: (128,)
    //    1008: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_1007[i],
                              28,
                              28,
                              buffer_1008[i],
                              buffer_layer2_3_bn0_weight[i],
                              buffer_layer2_3_bn0_bias[i],
                              buffer_layer2_3_bn0_running_mean[i],
                              buffer_layer2_3_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 77 Conv_161 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1008,1984,1985
    //Outputs: 1983
    //Shape:
    //    1008: (1, 128, 28, 28)
    //    1984: (128, 128, 3, 3)
    //    1985: (128,)
    //    1983: (1, 128, 28, 28)

const uint16_t Conv_161_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_1008[g*128/1],
                                    28,
                                    28,
                                    buffer_1983[i],
                                    buffer_1984[i*128/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_161_padding,
                                    
                                    buffer_1985[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_1008[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1984[i*128/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_161_padding,
                                        0.0);

            add_channel2d_naive(buffer_1983[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 78 PRelu_162 PRelu
    //Attributes
    //Parameters
    //Inputs: 1983,2176
    //Outputs: 1012
    //Shape:
    //    1983: (1, 128, 28, 28)
    //    2176: (1, 1, 1)
    //    1012: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_1983[i],
               28,
               28,
               buffer_1012[i],
               [i]);
}

    //Layer 79 Conv_163 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1012,1987,1988
    //Outputs: 1986
    //Shape:
    //    1012: (1, 128, 28, 28)
    //    1987: (128, 128, 3, 3)
    //    1988: (128,)
    //    1986: (1, 128, 28, 28)

const uint16_t Conv_163_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_1012[g*128/1],
                                    28,
                                    28,
                                    buffer_1986[i],
                                    buffer_1987[i*128/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_163_padding,
                                    
                                    buffer_1988[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_1012[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1987[i*128/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_163_padding,
                                        0.0);

            add_channel2d_naive(buffer_1986[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 80 GlobalAveragePool_170 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1986
    //Outputs: 1021
    //Shape:
    //    1986: (1, 128, 28, 28)
    //    1021: (1, 128, 1, 1)
for (uint32_t i = 0; i < 128; i++) {
    global_average_pooling2d_naive(buffer_1986[i],
                                   28,
                                   28,
                                   buffer_1021[i]);
}
    //Layer 81 Gemm_175 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1021,layer2.3.se.fc.0.weight,layer2.3.se.fc.0.bias
    //Outputs: 1026
    //Shape:
    //    1021: (1, 128, 1, 1)
    //    layer2.3.se.fc.0.weight: (8, 128)
    //    layer2.3.se.fc.0.bias: (8,)
    //    1026: (1, 8)

fully_connected_naive(buffer_1021, 128,
                      buffer_1026, 8,
                      buffer_layer2_3_se_fc_0_weight, buffer_layer2_3_se_fc_0_bias);

    //Layer 82 PRelu_176 PRelu
    //Attributes
    //Parameters
    //Inputs: 1026,layer2.3.se.fc.1.weight
    //Outputs: 1027
    //Shape:
    //    1026: (1, 8)
    //    layer2.3.se.fc.1.weight: (1,)
    //    1027: (1, 8)

for (uint32_t i = 0; i < 8; i++) {
    prelu(buffer_1026[i],
               1,
               1,
               buffer_1027[i],
               [i]);
}

    //Layer 83 Gemm_177 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1027,layer2.3.se.fc.2.weight,layer2.3.se.fc.2.bias
    //Outputs: 1028
    //Shape:
    //    1027: (1, 8)
    //    layer2.3.se.fc.2.weight: (128, 8)
    //    layer2.3.se.fc.2.bias: (128,)
    //    1028: (1, 128)

fully_connected_naive(buffer_1027, 8,
                      buffer_1028, 128,
                      buffer_layer2_3_se_fc_2_weight, buffer_layer2_3_se_fc_2_bias);

    //Layer 84 Sigmoid_178 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1028
    //Outputs: 1029
    //Shape:
    //    1028: (1, 128)
    //    1029: (1, 128)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1028, 1, 128, buffer_1029);

    //Layer 85 Mul_183 Mul
    //Attributes
    //Parameters
    //Inputs: 1986,1029
    //Outputs: 1038
    //Shape:
    //    1986: (1, 128, 28, 28)
    //    1029: (1, 128)
    //    1038: (1, 128, 28, 28)
{
for(uint32_t i = 0; i < 128; i++)
    for(uint32_t j = 0; j < 28*28; j++)
        buffer_1038[i][j] = buffer_1986[i][j] * <memory_manager.Buffer object at 0x7fae97c312b0>;

}
    //Layer 86 Add_184 Add
    //Attributes
    //Parameters
    //Inputs: 1038,1007
    //Outputs: 1039
    //Shape:
    //    1038: (1, 128, 28, 28)
    //    1007: (1, 128, 28, 28)
    //    1039: (1, 128, 28, 28)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_1039[i],
               buffer_1038[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_1039[i], buffer_1007[i], 28, 28);
    }


    //Layer 87 PRelu_185 PRelu
    //Attributes
    //Parameters
    //Inputs: 1039,2179
    //Outputs: 1041
    //Shape:
    //    1039: (1, 128, 28, 28)
    //    2179: (1, 1, 1)
    //    1041: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_1039[i],
               28,
               28,
               buffer_1041[i],
               [i]);
}

    //Layer 88 BatchNormalization_186 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1041,layer3.0.bn0.weight,layer3.0.bn0.bias,layer3.0.bn0.running_mean,layer3.0.bn0.running_var
    //Outputs: 1042
    //Shape:
    //    1041: (1, 128, 28, 28)
    //    layer3.0.bn0.weight: (128,)
    //    layer3.0.bn0.bias: (128,)
    //    layer3.0.bn0.running_mean: (128,)
    //    layer3.0.bn0.running_var: (128,)
    //    1042: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_1041[i],
                              28,
                              28,
                              buffer_1042[i],
                              buffer_layer3_0_bn0_weight[i],
                              buffer_layer3_0_bn0_bias[i],
                              buffer_layer3_0_bn0_running_mean[i],
                              buffer_layer3_0_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 89 Conv_187 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1042,1990,1991
    //Outputs: 1989
    //Shape:
    //    1042: (1, 128, 28, 28)
    //    1990: (128, 128, 3, 3)
    //    1991: (128,)
    //    1989: (1, 128, 28, 28)

const uint16_t Conv_187_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_padding_naive(buffer_1042[g*128/1],
                                    28,
                                    28,
                                    buffer_1989[i],
                                    buffer_1990[i*128/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_187_padding,
                                    
                                    buffer_1991[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_padding_naive(buffer_1042[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1990[i*128/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_187_padding,
                                        0.0);

            add_channel2d_naive(buffer_1989[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 90 PRelu_188 PRelu
    //Attributes
    //Parameters
    //Inputs: 1989,2180
    //Outputs: 1046
    //Shape:
    //    1989: (1, 128, 28, 28)
    //    2180: (1, 1, 1)
    //    1046: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_1989[i],
               28,
               28,
               buffer_1046[i],
               [i]);
}

    //Layer 91 Conv_189 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 1046,1993,1994
    //Outputs: 1992
    //Shape:
    //    1046: (1, 128, 28, 28)
    //    1993: (256, 128, 3, 3)
    //    1994: (256,)
    //    1992: (1, 256, 14, 14)

const uint16_t Conv_189_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1046[g*128/1],
                                    28,
                                    28,
                                    buffer_1992[i],
                                    buffer_1993[i*128/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_189_padding,
                                    
                                    buffer_1994[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1046[j],
                                        28,
                                        28,
                                        temp_buffer,
                                        buffer_1993[i*128/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_189_padding,
                                        0.0);

            add_channel2d_naive(buffer_1992[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 92 GlobalAveragePool_196 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 1992
    //Outputs: 1055
    //Shape:
    //    1992: (1, 256, 14, 14)
    //    1055: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_1992[i],
                                   14,
                                   14,
                                   buffer_1055[i]);
}
    //Layer 93 Gemm_201 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1055,layer3.0.se.fc.0.weight,layer3.0.se.fc.0.bias
    //Outputs: 1060
    //Shape:
    //    1055: (1, 256, 1, 1)
    //    layer3.0.se.fc.0.weight: (16, 256)
    //    layer3.0.se.fc.0.bias: (16,)
    //    1060: (1, 16)

fully_connected_naive(buffer_1055, 256,
                      buffer_1060, 16,
                      buffer_layer3_0_se_fc_0_weight, buffer_layer3_0_se_fc_0_bias);

    //Layer 94 PRelu_202 PRelu
    //Attributes
    //Parameters
    //Inputs: 1060,layer3.0.se.fc.1.weight
    //Outputs: 1061
    //Shape:
    //    1060: (1, 16)
    //    layer3.0.se.fc.1.weight: (1,)
    //    1061: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1060[i],
               1,
               1,
               buffer_1061[i],
               [i]);
}

    //Layer 95 Gemm_203 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1061,layer3.0.se.fc.2.weight,layer3.0.se.fc.2.bias
    //Outputs: 1062
    //Shape:
    //    1061: (1, 16)
    //    layer3.0.se.fc.2.weight: (256, 16)
    //    layer3.0.se.fc.2.bias: (256,)
    //    1062: (1, 256)

fully_connected_naive(buffer_1061, 16,
                      buffer_1062, 256,
                      buffer_layer3_0_se_fc_2_weight, buffer_layer3_0_se_fc_2_bias);

    //Layer 96 Sigmoid_204 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1062
    //Outputs: 1063
    //Shape:
    //    1062: (1, 256)
    //    1063: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1062, 1, 256, buffer_1063);

    //Layer 97 Mul_209 Mul
    //Attributes
    //Parameters
    //Inputs: 1992,1063
    //Outputs: 1072
    //Shape:
    //    1992: (1, 256, 14, 14)
    //    1063: (1, 256)
    //    1072: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1072[i][j] = buffer_1992[i][j] * <memory_manager.Buffer object at 0x7fae8f43fa58>;

}
    //Layer 98 Conv_210 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 1041,1996,1997
    //Outputs: 1995
    //Shape:
    //    1041: (1, 128, 28, 28)
    //    1996: (256, 128, 1, 1)
    //    1997: (256,)
    //    1995: (1, 256, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_1041[g*128/1],
                            28,
                            28,
                            buffer_1995[i],
                            buffer_1996[i*128/1],
                            1,
                            1,
                            2,
                            2,
                            
                            buffer_1997[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_1041[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_1996[i*128/1+cnt],
                                1,
                                1,
                                2,
                                2,
                                0.0);

            add_channel2d_naive(buffer_1995[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 99 Add_211 Add
    //Attributes
    //Parameters
    //Inputs: 1072,1995
    //Outputs: 1075
    //Shape:
    //    1072: (1, 256, 14, 14)
    //    1995: (1, 256, 14, 14)
    //    1075: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1075[i],
               buffer_1072[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1075[i], buffer_1995[i], 14, 14);
    }


    //Layer 100 PRelu_212 PRelu
    //Attributes
    //Parameters
    //Inputs: 1075,2183
    //Outputs: 1077
    //Shape:
    //    1075: (1, 256, 14, 14)
    //    2183: (1, 1, 1)
    //    1077: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1075[i],
               14,
               14,
               buffer_1077[i],
               [i]);
}

    //Layer 101 BatchNormalization_213 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1077,layer3.1.bn0.weight,layer3.1.bn0.bias,layer3.1.bn0.running_mean,layer3.1.bn0.running_var
    //Outputs: 1078
    //Shape:
    //    1077: (1, 256, 14, 14)
    //    layer3.1.bn0.weight: (256,)
    //    layer3.1.bn0.bias: (256,)
    //    layer3.1.bn0.running_mean: (256,)
    //    layer3.1.bn0.running_var: (256,)
    //    1078: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1077[i],
                              14,
                              14,
                              buffer_1078[i],
                              buffer_layer3_1_bn0_weight[i],
                              buffer_layer3_1_bn0_bias[i],
                              buffer_layer3_1_bn0_running_mean[i],
                              buffer_layer3_1_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 102 Conv_214 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1078,1999,2000
    //Outputs: 1998
    //Shape:
    //    1078: (1, 256, 14, 14)
    //    1999: (256, 256, 3, 3)
    //    2000: (256,)
    //    1998: (1, 256, 14, 14)

const uint16_t Conv_214_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1078[g*256/1],
                                    14,
                                    14,
                                    buffer_1998[i],
                                    buffer_1999[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_214_padding,
                                    
                                    buffer_2000[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1078[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_1999[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_214_padding,
                                        0.0);

            add_channel2d_naive(buffer_1998[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 103 PRelu_215 PRelu
    //Attributes
    //Parameters
    //Inputs: 1998,2184
    //Outputs: 1082
    //Shape:
    //    1998: (1, 256, 14, 14)
    //    2184: (1, 1, 1)
    //    1082: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1998[i],
               14,
               14,
               buffer_1082[i],
               [i]);
}

    //Layer 104 Conv_216 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1082,2002,2003
    //Outputs: 2001
    //Shape:
    //    1082: (1, 256, 14, 14)
    //    2002: (256, 256, 3, 3)
    //    2003: (256,)
    //    2001: (1, 256, 14, 14)

const uint16_t Conv_216_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1082[g*256/1],
                                    14,
                                    14,
                                    buffer_2001[i],
                                    buffer_2002[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_216_padding,
                                    
                                    buffer_2003[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1082[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2002[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_216_padding,
                                        0.0);

            add_channel2d_naive(buffer_2001[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 105 GlobalAveragePool_223 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2001
    //Outputs: 1091
    //Shape:
    //    2001: (1, 256, 14, 14)
    //    1091: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2001[i],
                                   14,
                                   14,
                                   buffer_1091[i]);
}
    //Layer 106 Gemm_228 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1091,layer3.1.se.fc.0.weight,layer3.1.se.fc.0.bias
    //Outputs: 1096
    //Shape:
    //    1091: (1, 256, 1, 1)
    //    layer3.1.se.fc.0.weight: (16, 256)
    //    layer3.1.se.fc.0.bias: (16,)
    //    1096: (1, 16)

fully_connected_naive(buffer_1091, 256,
                      buffer_1096, 16,
                      buffer_layer3_1_se_fc_0_weight, buffer_layer3_1_se_fc_0_bias);

    //Layer 107 PRelu_229 PRelu
    //Attributes
    //Parameters
    //Inputs: 1096,layer3.1.se.fc.1.weight
    //Outputs: 1097
    //Shape:
    //    1096: (1, 16)
    //    layer3.1.se.fc.1.weight: (1,)
    //    1097: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1096[i],
               1,
               1,
               buffer_1097[i],
               [i]);
}

    //Layer 108 Gemm_230 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1097,layer3.1.se.fc.2.weight,layer3.1.se.fc.2.bias
    //Outputs: 1098
    //Shape:
    //    1097: (1, 16)
    //    layer3.1.se.fc.2.weight: (256, 16)
    //    layer3.1.se.fc.2.bias: (256,)
    //    1098: (1, 256)

fully_connected_naive(buffer_1097, 16,
                      buffer_1098, 256,
                      buffer_layer3_1_se_fc_2_weight, buffer_layer3_1_se_fc_2_bias);

    //Layer 109 Sigmoid_231 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1098
    //Outputs: 1099
    //Shape:
    //    1098: (1, 256)
    //    1099: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1098, 1, 256, buffer_1099);

    //Layer 110 Mul_236 Mul
    //Attributes
    //Parameters
    //Inputs: 2001,1099
    //Outputs: 1108
    //Shape:
    //    2001: (1, 256, 14, 14)
    //    1099: (1, 256)
    //    1108: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1108[i][j] = buffer_2001[i][j] * <memory_manager.Buffer object at 0x7fae8f44a9e8>;

}
    //Layer 111 Add_237 Add
    //Attributes
    //Parameters
    //Inputs: 1108,1077
    //Outputs: 1109
    //Shape:
    //    1108: (1, 256, 14, 14)
    //    1077: (1, 256, 14, 14)
    //    1109: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1109[i],
               buffer_1108[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1109[i], buffer_1077[i], 14, 14);
    }


    //Layer 112 PRelu_238 PRelu
    //Attributes
    //Parameters
    //Inputs: 1109,2187
    //Outputs: 1111
    //Shape:
    //    1109: (1, 256, 14, 14)
    //    2187: (1, 1, 1)
    //    1111: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1109[i],
               14,
               14,
               buffer_1111[i],
               [i]);
}

    //Layer 113 BatchNormalization_239 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1111,layer3.2.bn0.weight,layer3.2.bn0.bias,layer3.2.bn0.running_mean,layer3.2.bn0.running_var
    //Outputs: 1112
    //Shape:
    //    1111: (1, 256, 14, 14)
    //    layer3.2.bn0.weight: (256,)
    //    layer3.2.bn0.bias: (256,)
    //    layer3.2.bn0.running_mean: (256,)
    //    layer3.2.bn0.running_var: (256,)
    //    1112: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1111[i],
                              14,
                              14,
                              buffer_1112[i],
                              buffer_layer3_2_bn0_weight[i],
                              buffer_layer3_2_bn0_bias[i],
                              buffer_layer3_2_bn0_running_mean[i],
                              buffer_layer3_2_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 114 Conv_240 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1112,2005,2006
    //Outputs: 2004
    //Shape:
    //    1112: (1, 256, 14, 14)
    //    2005: (256, 256, 3, 3)
    //    2006: (256,)
    //    2004: (1, 256, 14, 14)

const uint16_t Conv_240_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1112[g*256/1],
                                    14,
                                    14,
                                    buffer_2004[i],
                                    buffer_2005[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_240_padding,
                                    
                                    buffer_2006[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1112[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2005[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_240_padding,
                                        0.0);

            add_channel2d_naive(buffer_2004[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 115 PRelu_241 PRelu
    //Attributes
    //Parameters
    //Inputs: 2004,2188
    //Outputs: 1116
    //Shape:
    //    2004: (1, 256, 14, 14)
    //    2188: (1, 1, 1)
    //    1116: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2004[i],
               14,
               14,
               buffer_1116[i],
               [i]);
}

    //Layer 116 Conv_242 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1116,2008,2009
    //Outputs: 2007
    //Shape:
    //    1116: (1, 256, 14, 14)
    //    2008: (256, 256, 3, 3)
    //    2009: (256,)
    //    2007: (1, 256, 14, 14)

const uint16_t Conv_242_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1116[g*256/1],
                                    14,
                                    14,
                                    buffer_2007[i],
                                    buffer_2008[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_242_padding,
                                    
                                    buffer_2009[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1116[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2008[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_242_padding,
                                        0.0);

            add_channel2d_naive(buffer_2007[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 117 GlobalAveragePool_249 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2007
    //Outputs: 1125
    //Shape:
    //    2007: (1, 256, 14, 14)
    //    1125: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2007[i],
                                   14,
                                   14,
                                   buffer_1125[i]);
}
    //Layer 118 Gemm_254 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1125,layer3.2.se.fc.0.weight,layer3.2.se.fc.0.bias
    //Outputs: 1130
    //Shape:
    //    1125: (1, 256, 1, 1)
    //    layer3.2.se.fc.0.weight: (16, 256)
    //    layer3.2.se.fc.0.bias: (16,)
    //    1130: (1, 16)

fully_connected_naive(buffer_1125, 256,
                      buffer_1130, 16,
                      buffer_layer3_2_se_fc_0_weight, buffer_layer3_2_se_fc_0_bias);

    //Layer 119 PRelu_255 PRelu
    //Attributes
    //Parameters
    //Inputs: 1130,layer3.2.se.fc.1.weight
    //Outputs: 1131
    //Shape:
    //    1130: (1, 16)
    //    layer3.2.se.fc.1.weight: (1,)
    //    1131: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1130[i],
               1,
               1,
               buffer_1131[i],
               [i]);
}

    //Layer 120 Gemm_256 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1131,layer3.2.se.fc.2.weight,layer3.2.se.fc.2.bias
    //Outputs: 1132
    //Shape:
    //    1131: (1, 16)
    //    layer3.2.se.fc.2.weight: (256, 16)
    //    layer3.2.se.fc.2.bias: (256,)
    //    1132: (1, 256)

fully_connected_naive(buffer_1131, 16,
                      buffer_1132, 256,
                      buffer_layer3_2_se_fc_2_weight, buffer_layer3_2_se_fc_2_bias);

    //Layer 121 Sigmoid_257 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1132
    //Outputs: 1133
    //Shape:
    //    1132: (1, 256)
    //    1133: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1132, 1, 256, buffer_1133);

    //Layer 122 Mul_262 Mul
    //Attributes
    //Parameters
    //Inputs: 2007,1133
    //Outputs: 1142
    //Shape:
    //    2007: (1, 256, 14, 14)
    //    1133: (1, 256)
    //    1142: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1142[i][j] = buffer_2007[i][j] * <memory_manager.Buffer object at 0x7fae8f4b7a20>;

}
    //Layer 123 Add_263 Add
    //Attributes
    //Parameters
    //Inputs: 1142,1111
    //Outputs: 1143
    //Shape:
    //    1142: (1, 256, 14, 14)
    //    1111: (1, 256, 14, 14)
    //    1143: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1143[i],
               buffer_1142[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1143[i], buffer_1111[i], 14, 14);
    }


    //Layer 124 PRelu_264 PRelu
    //Attributes
    //Parameters
    //Inputs: 1143,2191
    //Outputs: 1145
    //Shape:
    //    1143: (1, 256, 14, 14)
    //    2191: (1, 1, 1)
    //    1145: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1143[i],
               14,
               14,
               buffer_1145[i],
               [i]);
}

    //Layer 125 BatchNormalization_265 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1145,layer3.3.bn0.weight,layer3.3.bn0.bias,layer3.3.bn0.running_mean,layer3.3.bn0.running_var
    //Outputs: 1146
    //Shape:
    //    1145: (1, 256, 14, 14)
    //    layer3.3.bn0.weight: (256,)
    //    layer3.3.bn0.bias: (256,)
    //    layer3.3.bn0.running_mean: (256,)
    //    layer3.3.bn0.running_var: (256,)
    //    1146: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1145[i],
                              14,
                              14,
                              buffer_1146[i],
                              buffer_layer3_3_bn0_weight[i],
                              buffer_layer3_3_bn0_bias[i],
                              buffer_layer3_3_bn0_running_mean[i],
                              buffer_layer3_3_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 126 Conv_266 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1146,2011,2012
    //Outputs: 2010
    //Shape:
    //    1146: (1, 256, 14, 14)
    //    2011: (256, 256, 3, 3)
    //    2012: (256,)
    //    2010: (1, 256, 14, 14)

const uint16_t Conv_266_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1146[g*256/1],
                                    14,
                                    14,
                                    buffer_2010[i],
                                    buffer_2011[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_266_padding,
                                    
                                    buffer_2012[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1146[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2011[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_266_padding,
                                        0.0);

            add_channel2d_naive(buffer_2010[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 127 PRelu_267 PRelu
    //Attributes
    //Parameters
    //Inputs: 2010,2192
    //Outputs: 1150
    //Shape:
    //    2010: (1, 256, 14, 14)
    //    2192: (1, 1, 1)
    //    1150: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2010[i],
               14,
               14,
               buffer_1150[i],
               [i]);
}

    //Layer 128 Conv_268 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1150,2014,2015
    //Outputs: 2013
    //Shape:
    //    1150: (1, 256, 14, 14)
    //    2014: (256, 256, 3, 3)
    //    2015: (256,)
    //    2013: (1, 256, 14, 14)

const uint16_t Conv_268_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1150[g*256/1],
                                    14,
                                    14,
                                    buffer_2013[i],
                                    buffer_2014[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_268_padding,
                                    
                                    buffer_2015[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1150[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2014[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_268_padding,
                                        0.0);

            add_channel2d_naive(buffer_2013[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 129 GlobalAveragePool_275 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2013
    //Outputs: 1159
    //Shape:
    //    2013: (1, 256, 14, 14)
    //    1159: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2013[i],
                                   14,
                                   14,
                                   buffer_1159[i]);
}
    //Layer 130 Gemm_280 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1159,layer3.3.se.fc.0.weight,layer3.3.se.fc.0.bias
    //Outputs: 1164
    //Shape:
    //    1159: (1, 256, 1, 1)
    //    layer3.3.se.fc.0.weight: (16, 256)
    //    layer3.3.se.fc.0.bias: (16,)
    //    1164: (1, 16)

fully_connected_naive(buffer_1159, 256,
                      buffer_1164, 16,
                      buffer_layer3_3_se_fc_0_weight, buffer_layer3_3_se_fc_0_bias);

    //Layer 131 PRelu_281 PRelu
    //Attributes
    //Parameters
    //Inputs: 1164,layer3.3.se.fc.1.weight
    //Outputs: 1165
    //Shape:
    //    1164: (1, 16)
    //    layer3.3.se.fc.1.weight: (1,)
    //    1165: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1164[i],
               1,
               1,
               buffer_1165[i],
               [i]);
}

    //Layer 132 Gemm_282 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1165,layer3.3.se.fc.2.weight,layer3.3.se.fc.2.bias
    //Outputs: 1166
    //Shape:
    //    1165: (1, 16)
    //    layer3.3.se.fc.2.weight: (256, 16)
    //    layer3.3.se.fc.2.bias: (256,)
    //    1166: (1, 256)

fully_connected_naive(buffer_1165, 16,
                      buffer_1166, 256,
                      buffer_layer3_3_se_fc_2_weight, buffer_layer3_3_se_fc_2_bias);

    //Layer 133 Sigmoid_283 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1166
    //Outputs: 1167
    //Shape:
    //    1166: (1, 256)
    //    1167: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1166, 1, 256, buffer_1167);

    //Layer 134 Mul_288 Mul
    //Attributes
    //Parameters
    //Inputs: 2013,1167
    //Outputs: 1176
    //Shape:
    //    2013: (1, 256, 14, 14)
    //    1167: (1, 256)
    //    1176: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1176[i][j] = buffer_2013[i][j] * <memory_manager.Buffer object at 0x7fae97c26860>;

}
    //Layer 135 Add_289 Add
    //Attributes
    //Parameters
    //Inputs: 1176,1145
    //Outputs: 1177
    //Shape:
    //    1176: (1, 256, 14, 14)
    //    1145: (1, 256, 14, 14)
    //    1177: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1177[i],
               buffer_1176[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1177[i], buffer_1145[i], 14, 14);
    }


    //Layer 136 PRelu_290 PRelu
    //Attributes
    //Parameters
    //Inputs: 1177,2195
    //Outputs: 1179
    //Shape:
    //    1177: (1, 256, 14, 14)
    //    2195: (1, 1, 1)
    //    1179: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1177[i],
               14,
               14,
               buffer_1179[i],
               [i]);
}

    //Layer 137 BatchNormalization_291 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1179,layer3.4.bn0.weight,layer3.4.bn0.bias,layer3.4.bn0.running_mean,layer3.4.bn0.running_var
    //Outputs: 1180
    //Shape:
    //    1179: (1, 256, 14, 14)
    //    layer3.4.bn0.weight: (256,)
    //    layer3.4.bn0.bias: (256,)
    //    layer3.4.bn0.running_mean: (256,)
    //    layer3.4.bn0.running_var: (256,)
    //    1180: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1179[i],
                              14,
                              14,
                              buffer_1180[i],
                              buffer_layer3_4_bn0_weight[i],
                              buffer_layer3_4_bn0_bias[i],
                              buffer_layer3_4_bn0_running_mean[i],
                              buffer_layer3_4_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 138 Conv_292 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1180,2017,2018
    //Outputs: 2016
    //Shape:
    //    1180: (1, 256, 14, 14)
    //    2017: (256, 256, 3, 3)
    //    2018: (256,)
    //    2016: (1, 256, 14, 14)

const uint16_t Conv_292_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1180[g*256/1],
                                    14,
                                    14,
                                    buffer_2016[i],
                                    buffer_2017[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_292_padding,
                                    
                                    buffer_2018[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1180[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2017[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_292_padding,
                                        0.0);

            add_channel2d_naive(buffer_2016[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 139 PRelu_293 PRelu
    //Attributes
    //Parameters
    //Inputs: 2016,2196
    //Outputs: 1184
    //Shape:
    //    2016: (1, 256, 14, 14)
    //    2196: (1, 1, 1)
    //    1184: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2016[i],
               14,
               14,
               buffer_1184[i],
               [i]);
}

    //Layer 140 Conv_294 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1184,2020,2021
    //Outputs: 2019
    //Shape:
    //    1184: (1, 256, 14, 14)
    //    2020: (256, 256, 3, 3)
    //    2021: (256,)
    //    2019: (1, 256, 14, 14)

const uint16_t Conv_294_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1184[g*256/1],
                                    14,
                                    14,
                                    buffer_2019[i],
                                    buffer_2020[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_294_padding,
                                    
                                    buffer_2021[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1184[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2020[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_294_padding,
                                        0.0);

            add_channel2d_naive(buffer_2019[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 141 GlobalAveragePool_301 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2019
    //Outputs: 1193
    //Shape:
    //    2019: (1, 256, 14, 14)
    //    1193: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2019[i],
                                   14,
                                   14,
                                   buffer_1193[i]);
}
    //Layer 142 Gemm_306 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1193,layer3.4.se.fc.0.weight,layer3.4.se.fc.0.bias
    //Outputs: 1198
    //Shape:
    //    1193: (1, 256, 1, 1)
    //    layer3.4.se.fc.0.weight: (16, 256)
    //    layer3.4.se.fc.0.bias: (16,)
    //    1198: (1, 16)

fully_connected_naive(buffer_1193, 256,
                      buffer_1198, 16,
                      buffer_layer3_4_se_fc_0_weight, buffer_layer3_4_se_fc_0_bias);

    //Layer 143 PRelu_307 PRelu
    //Attributes
    //Parameters
    //Inputs: 1198,layer3.4.se.fc.1.weight
    //Outputs: 1199
    //Shape:
    //    1198: (1, 16)
    //    layer3.4.se.fc.1.weight: (1,)
    //    1199: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1198[i],
               1,
               1,
               buffer_1199[i],
               [i]);
}

    //Layer 144 Gemm_308 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1199,layer3.4.se.fc.2.weight,layer3.4.se.fc.2.bias
    //Outputs: 1200
    //Shape:
    //    1199: (1, 16)
    //    layer3.4.se.fc.2.weight: (256, 16)
    //    layer3.4.se.fc.2.bias: (256,)
    //    1200: (1, 256)

fully_connected_naive(buffer_1199, 16,
                      buffer_1200, 256,
                      buffer_layer3_4_se_fc_2_weight, buffer_layer3_4_se_fc_2_bias);

    //Layer 145 Sigmoid_309 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1200
    //Outputs: 1201
    //Shape:
    //    1200: (1, 256)
    //    1201: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1200, 1, 256, buffer_1201);

    //Layer 146 Mul_314 Mul
    //Attributes
    //Parameters
    //Inputs: 2019,1201
    //Outputs: 1210
    //Shape:
    //    2019: (1, 256, 14, 14)
    //    1201: (1, 256)
    //    1210: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1210[i][j] = buffer_2019[i][j] * <memory_manager.Buffer object at 0x7fae8f3c3470>;

}
    //Layer 147 Add_315 Add
    //Attributes
    //Parameters
    //Inputs: 1210,1179
    //Outputs: 1211
    //Shape:
    //    1210: (1, 256, 14, 14)
    //    1179: (1, 256, 14, 14)
    //    1211: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1211[i],
               buffer_1210[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1211[i], buffer_1179[i], 14, 14);
    }


    //Layer 148 PRelu_316 PRelu
    //Attributes
    //Parameters
    //Inputs: 1211,2199
    //Outputs: 1213
    //Shape:
    //    1211: (1, 256, 14, 14)
    //    2199: (1, 1, 1)
    //    1213: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1211[i],
               14,
               14,
               buffer_1213[i],
               [i]);
}

    //Layer 149 BatchNormalization_317 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1213,layer3.5.bn0.weight,layer3.5.bn0.bias,layer3.5.bn0.running_mean,layer3.5.bn0.running_var
    //Outputs: 1214
    //Shape:
    //    1213: (1, 256, 14, 14)
    //    layer3.5.bn0.weight: (256,)
    //    layer3.5.bn0.bias: (256,)
    //    layer3.5.bn0.running_mean: (256,)
    //    layer3.5.bn0.running_var: (256,)
    //    1214: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1213[i],
                              14,
                              14,
                              buffer_1214[i],
                              buffer_layer3_5_bn0_weight[i],
                              buffer_layer3_5_bn0_bias[i],
                              buffer_layer3_5_bn0_running_mean[i],
                              buffer_layer3_5_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 150 Conv_318 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1214,2023,2024
    //Outputs: 2022
    //Shape:
    //    1214: (1, 256, 14, 14)
    //    2023: (256, 256, 3, 3)
    //    2024: (256,)
    //    2022: (1, 256, 14, 14)

const uint16_t Conv_318_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1214[g*256/1],
                                    14,
                                    14,
                                    buffer_2022[i],
                                    buffer_2023[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_318_padding,
                                    
                                    buffer_2024[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1214[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2023[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_318_padding,
                                        0.0);

            add_channel2d_naive(buffer_2022[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 151 PRelu_319 PRelu
    //Attributes
    //Parameters
    //Inputs: 2022,2200
    //Outputs: 1218
    //Shape:
    //    2022: (1, 256, 14, 14)
    //    2200: (1, 1, 1)
    //    1218: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2022[i],
               14,
               14,
               buffer_1218[i],
               [i]);
}

    //Layer 152 Conv_320 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1218,2026,2027
    //Outputs: 2025
    //Shape:
    //    1218: (1, 256, 14, 14)
    //    2026: (256, 256, 3, 3)
    //    2027: (256,)
    //    2025: (1, 256, 14, 14)

const uint16_t Conv_320_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1218[g*256/1],
                                    14,
                                    14,
                                    buffer_2025[i],
                                    buffer_2026[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_320_padding,
                                    
                                    buffer_2027[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1218[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2026[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_320_padding,
                                        0.0);

            add_channel2d_naive(buffer_2025[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 153 GlobalAveragePool_327 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2025
    //Outputs: 1227
    //Shape:
    //    2025: (1, 256, 14, 14)
    //    1227: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2025[i],
                                   14,
                                   14,
                                   buffer_1227[i]);
}
    //Layer 154 Gemm_332 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1227,layer3.5.se.fc.0.weight,layer3.5.se.fc.0.bias
    //Outputs: 1232
    //Shape:
    //    1227: (1, 256, 1, 1)
    //    layer3.5.se.fc.0.weight: (16, 256)
    //    layer3.5.se.fc.0.bias: (16,)
    //    1232: (1, 16)

fully_connected_naive(buffer_1227, 256,
                      buffer_1232, 16,
                      buffer_layer3_5_se_fc_0_weight, buffer_layer3_5_se_fc_0_bias);

    //Layer 155 PRelu_333 PRelu
    //Attributes
    //Parameters
    //Inputs: 1232,layer3.5.se.fc.1.weight
    //Outputs: 1233
    //Shape:
    //    1232: (1, 16)
    //    layer3.5.se.fc.1.weight: (1,)
    //    1233: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1232[i],
               1,
               1,
               buffer_1233[i],
               [i]);
}

    //Layer 156 Gemm_334 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1233,layer3.5.se.fc.2.weight,layer3.5.se.fc.2.bias
    //Outputs: 1234
    //Shape:
    //    1233: (1, 16)
    //    layer3.5.se.fc.2.weight: (256, 16)
    //    layer3.5.se.fc.2.bias: (256,)
    //    1234: (1, 256)

fully_connected_naive(buffer_1233, 16,
                      buffer_1234, 256,
                      buffer_layer3_5_se_fc_2_weight, buffer_layer3_5_se_fc_2_bias);

    //Layer 157 Sigmoid_335 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1234
    //Outputs: 1235
    //Shape:
    //    1234: (1, 256)
    //    1235: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1234, 1, 256, buffer_1235);

    //Layer 158 Mul_340 Mul
    //Attributes
    //Parameters
    //Inputs: 2025,1235
    //Outputs: 1244
    //Shape:
    //    2025: (1, 256, 14, 14)
    //    1235: (1, 256)
    //    1244: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1244[i][j] = buffer_2025[i][j] * <memory_manager.Buffer object at 0x7fae8f4065c0>;

}
    //Layer 159 Add_341 Add
    //Attributes
    //Parameters
    //Inputs: 1244,1213
    //Outputs: 1245
    //Shape:
    //    1244: (1, 256, 14, 14)
    //    1213: (1, 256, 14, 14)
    //    1245: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1245[i],
               buffer_1244[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1245[i], buffer_1213[i], 14, 14);
    }


    //Layer 160 PRelu_342 PRelu
    //Attributes
    //Parameters
    //Inputs: 1245,2203
    //Outputs: 1247
    //Shape:
    //    1245: (1, 256, 14, 14)
    //    2203: (1, 1, 1)
    //    1247: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1245[i],
               14,
               14,
               buffer_1247[i],
               [i]);
}

    //Layer 161 BatchNormalization_343 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1247,layer3.6.bn0.weight,layer3.6.bn0.bias,layer3.6.bn0.running_mean,layer3.6.bn0.running_var
    //Outputs: 1248
    //Shape:
    //    1247: (1, 256, 14, 14)
    //    layer3.6.bn0.weight: (256,)
    //    layer3.6.bn0.bias: (256,)
    //    layer3.6.bn0.running_mean: (256,)
    //    layer3.6.bn0.running_var: (256,)
    //    1248: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1247[i],
                              14,
                              14,
                              buffer_1248[i],
                              buffer_layer3_6_bn0_weight[i],
                              buffer_layer3_6_bn0_bias[i],
                              buffer_layer3_6_bn0_running_mean[i],
                              buffer_layer3_6_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 162 Conv_344 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1248,2029,2030
    //Outputs: 2028
    //Shape:
    //    1248: (1, 256, 14, 14)
    //    2029: (256, 256, 3, 3)
    //    2030: (256,)
    //    2028: (1, 256, 14, 14)

const uint16_t Conv_344_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1248[g*256/1],
                                    14,
                                    14,
                                    buffer_2028[i],
                                    buffer_2029[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_344_padding,
                                    
                                    buffer_2030[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1248[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2029[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_344_padding,
                                        0.0);

            add_channel2d_naive(buffer_2028[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 163 PRelu_345 PRelu
    //Attributes
    //Parameters
    //Inputs: 2028,2204
    //Outputs: 1252
    //Shape:
    //    2028: (1, 256, 14, 14)
    //    2204: (1, 1, 1)
    //    1252: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2028[i],
               14,
               14,
               buffer_1252[i],
               [i]);
}

    //Layer 164 Conv_346 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1252,2032,2033
    //Outputs: 2031
    //Shape:
    //    1252: (1, 256, 14, 14)
    //    2032: (256, 256, 3, 3)
    //    2033: (256,)
    //    2031: (1, 256, 14, 14)

const uint16_t Conv_346_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1252[g*256/1],
                                    14,
                                    14,
                                    buffer_2031[i],
                                    buffer_2032[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_346_padding,
                                    
                                    buffer_2033[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1252[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2032[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_346_padding,
                                        0.0);

            add_channel2d_naive(buffer_2031[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 165 GlobalAveragePool_353 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2031
    //Outputs: 1261
    //Shape:
    //    2031: (1, 256, 14, 14)
    //    1261: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2031[i],
                                   14,
                                   14,
                                   buffer_1261[i]);
}
    //Layer 166 Gemm_358 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1261,layer3.6.se.fc.0.weight,layer3.6.se.fc.0.bias
    //Outputs: 1266
    //Shape:
    //    1261: (1, 256, 1, 1)
    //    layer3.6.se.fc.0.weight: (16, 256)
    //    layer3.6.se.fc.0.bias: (16,)
    //    1266: (1, 16)

fully_connected_naive(buffer_1261, 256,
                      buffer_1266, 16,
                      buffer_layer3_6_se_fc_0_weight, buffer_layer3_6_se_fc_0_bias);

    //Layer 167 PRelu_359 PRelu
    //Attributes
    //Parameters
    //Inputs: 1266,layer3.6.se.fc.1.weight
    //Outputs: 1267
    //Shape:
    //    1266: (1, 16)
    //    layer3.6.se.fc.1.weight: (1,)
    //    1267: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1266[i],
               1,
               1,
               buffer_1267[i],
               [i]);
}

    //Layer 168 Gemm_360 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1267,layer3.6.se.fc.2.weight,layer3.6.se.fc.2.bias
    //Outputs: 1268
    //Shape:
    //    1267: (1, 16)
    //    layer3.6.se.fc.2.weight: (256, 16)
    //    layer3.6.se.fc.2.bias: (256,)
    //    1268: (1, 256)

fully_connected_naive(buffer_1267, 16,
                      buffer_1268, 256,
                      buffer_layer3_6_se_fc_2_weight, buffer_layer3_6_se_fc_2_bias);

    //Layer 169 Sigmoid_361 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1268
    //Outputs: 1269
    //Shape:
    //    1268: (1, 256)
    //    1269: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1268, 1, 256, buffer_1269);

    //Layer 170 Mul_366 Mul
    //Attributes
    //Parameters
    //Inputs: 2031,1269
    //Outputs: 1278
    //Shape:
    //    2031: (1, 256, 14, 14)
    //    1269: (1, 256)
    //    1278: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1278[i][j] = buffer_2031[i][j] * <memory_manager.Buffer object at 0x7fae95c17908>;

}
    //Layer 171 Add_367 Add
    //Attributes
    //Parameters
    //Inputs: 1278,1247
    //Outputs: 1279
    //Shape:
    //    1278: (1, 256, 14, 14)
    //    1247: (1, 256, 14, 14)
    //    1279: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1279[i],
               buffer_1278[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1279[i], buffer_1247[i], 14, 14);
    }


    //Layer 172 PRelu_368 PRelu
    //Attributes
    //Parameters
    //Inputs: 1279,2207
    //Outputs: 1281
    //Shape:
    //    1279: (1, 256, 14, 14)
    //    2207: (1, 1, 1)
    //    1281: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1279[i],
               14,
               14,
               buffer_1281[i],
               [i]);
}

    //Layer 173 BatchNormalization_369 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1281,layer3.7.bn0.weight,layer3.7.bn0.bias,layer3.7.bn0.running_mean,layer3.7.bn0.running_var
    //Outputs: 1282
    //Shape:
    //    1281: (1, 256, 14, 14)
    //    layer3.7.bn0.weight: (256,)
    //    layer3.7.bn0.bias: (256,)
    //    layer3.7.bn0.running_mean: (256,)
    //    layer3.7.bn0.running_var: (256,)
    //    1282: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1281[i],
                              14,
                              14,
                              buffer_1282[i],
                              buffer_layer3_7_bn0_weight[i],
                              buffer_layer3_7_bn0_bias[i],
                              buffer_layer3_7_bn0_running_mean[i],
                              buffer_layer3_7_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 174 Conv_370 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1282,2035,2036
    //Outputs: 2034
    //Shape:
    //    1282: (1, 256, 14, 14)
    //    2035: (256, 256, 3, 3)
    //    2036: (256,)
    //    2034: (1, 256, 14, 14)

const uint16_t Conv_370_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1282[g*256/1],
                                    14,
                                    14,
                                    buffer_2034[i],
                                    buffer_2035[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_370_padding,
                                    
                                    buffer_2036[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1282[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2035[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_370_padding,
                                        0.0);

            add_channel2d_naive(buffer_2034[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 175 PRelu_371 PRelu
    //Attributes
    //Parameters
    //Inputs: 2034,2208
    //Outputs: 1286
    //Shape:
    //    2034: (1, 256, 14, 14)
    //    2208: (1, 1, 1)
    //    1286: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2034[i],
               14,
               14,
               buffer_1286[i],
               [i]);
}

    //Layer 176 Conv_372 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1286,2038,2039
    //Outputs: 2037
    //Shape:
    //    1286: (1, 256, 14, 14)
    //    2038: (256, 256, 3, 3)
    //    2039: (256,)
    //    2037: (1, 256, 14, 14)

const uint16_t Conv_372_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1286[g*256/1],
                                    14,
                                    14,
                                    buffer_2037[i],
                                    buffer_2038[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_372_padding,
                                    
                                    buffer_2039[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1286[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2038[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_372_padding,
                                        0.0);

            add_channel2d_naive(buffer_2037[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 177 GlobalAveragePool_379 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2037
    //Outputs: 1295
    //Shape:
    //    2037: (1, 256, 14, 14)
    //    1295: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2037[i],
                                   14,
                                   14,
                                   buffer_1295[i]);
}
    //Layer 178 Gemm_384 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1295,layer3.7.se.fc.0.weight,layer3.7.se.fc.0.bias
    //Outputs: 1300
    //Shape:
    //    1295: (1, 256, 1, 1)
    //    layer3.7.se.fc.0.weight: (16, 256)
    //    layer3.7.se.fc.0.bias: (16,)
    //    1300: (1, 16)

fully_connected_naive(buffer_1295, 256,
                      buffer_1300, 16,
                      buffer_layer3_7_se_fc_0_weight, buffer_layer3_7_se_fc_0_bias);

    //Layer 179 PRelu_385 PRelu
    //Attributes
    //Parameters
    //Inputs: 1300,layer3.7.se.fc.1.weight
    //Outputs: 1301
    //Shape:
    //    1300: (1, 16)
    //    layer3.7.se.fc.1.weight: (1,)
    //    1301: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1300[i],
               1,
               1,
               buffer_1301[i],
               [i]);
}

    //Layer 180 Gemm_386 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1301,layer3.7.se.fc.2.weight,layer3.7.se.fc.2.bias
    //Outputs: 1302
    //Shape:
    //    1301: (1, 16)
    //    layer3.7.se.fc.2.weight: (256, 16)
    //    layer3.7.se.fc.2.bias: (256,)
    //    1302: (1, 256)

fully_connected_naive(buffer_1301, 16,
                      buffer_1302, 256,
                      buffer_layer3_7_se_fc_2_weight, buffer_layer3_7_se_fc_2_bias);

    //Layer 181 Sigmoid_387 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1302
    //Outputs: 1303
    //Shape:
    //    1302: (1, 256)
    //    1303: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1302, 1, 256, buffer_1303);

    //Layer 182 Mul_392 Mul
    //Attributes
    //Parameters
    //Inputs: 2037,1303
    //Outputs: 1312
    //Shape:
    //    2037: (1, 256, 14, 14)
    //    1303: (1, 256)
    //    1312: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1312[i][j] = buffer_2037[i][j] * <memory_manager.Buffer object at 0x7fae8f4a7d30>;

}
    //Layer 183 Add_393 Add
    //Attributes
    //Parameters
    //Inputs: 1312,1281
    //Outputs: 1313
    //Shape:
    //    1312: (1, 256, 14, 14)
    //    1281: (1, 256, 14, 14)
    //    1313: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1313[i],
               buffer_1312[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1313[i], buffer_1281[i], 14, 14);
    }


    //Layer 184 PRelu_394 PRelu
    //Attributes
    //Parameters
    //Inputs: 1313,2211
    //Outputs: 1315
    //Shape:
    //    1313: (1, 256, 14, 14)
    //    2211: (1, 1, 1)
    //    1315: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1313[i],
               14,
               14,
               buffer_1315[i],
               [i]);
}

    //Layer 185 BatchNormalization_395 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1315,layer3.8.bn0.weight,layer3.8.bn0.bias,layer3.8.bn0.running_mean,layer3.8.bn0.running_var
    //Outputs: 1316
    //Shape:
    //    1315: (1, 256, 14, 14)
    //    layer3.8.bn0.weight: (256,)
    //    layer3.8.bn0.bias: (256,)
    //    layer3.8.bn0.running_mean: (256,)
    //    layer3.8.bn0.running_var: (256,)
    //    1316: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1315[i],
                              14,
                              14,
                              buffer_1316[i],
                              buffer_layer3_8_bn0_weight[i],
                              buffer_layer3_8_bn0_bias[i],
                              buffer_layer3_8_bn0_running_mean[i],
                              buffer_layer3_8_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 186 Conv_396 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1316,2041,2042
    //Outputs: 2040
    //Shape:
    //    1316: (1, 256, 14, 14)
    //    2041: (256, 256, 3, 3)
    //    2042: (256,)
    //    2040: (1, 256, 14, 14)

const uint16_t Conv_396_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1316[g*256/1],
                                    14,
                                    14,
                                    buffer_2040[i],
                                    buffer_2041[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_396_padding,
                                    
                                    buffer_2042[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1316[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2041[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_396_padding,
                                        0.0);

            add_channel2d_naive(buffer_2040[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 187 PRelu_397 PRelu
    //Attributes
    //Parameters
    //Inputs: 2040,2212
    //Outputs: 1320
    //Shape:
    //    2040: (1, 256, 14, 14)
    //    2212: (1, 1, 1)
    //    1320: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2040[i],
               14,
               14,
               buffer_1320[i],
               [i]);
}

    //Layer 188 Conv_398 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1320,2044,2045
    //Outputs: 2043
    //Shape:
    //    1320: (1, 256, 14, 14)
    //    2044: (256, 256, 3, 3)
    //    2045: (256,)
    //    2043: (1, 256, 14, 14)

const uint16_t Conv_398_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1320[g*256/1],
                                    14,
                                    14,
                                    buffer_2043[i],
                                    buffer_2044[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_398_padding,
                                    
                                    buffer_2045[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1320[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2044[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_398_padding,
                                        0.0);

            add_channel2d_naive(buffer_2043[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 189 GlobalAveragePool_405 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2043
    //Outputs: 1329
    //Shape:
    //    2043: (1, 256, 14, 14)
    //    1329: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2043[i],
                                   14,
                                   14,
                                   buffer_1329[i]);
}
    //Layer 190 Gemm_410 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1329,layer3.8.se.fc.0.weight,layer3.8.se.fc.0.bias
    //Outputs: 1334
    //Shape:
    //    1329: (1, 256, 1, 1)
    //    layer3.8.se.fc.0.weight: (16, 256)
    //    layer3.8.se.fc.0.bias: (16,)
    //    1334: (1, 16)

fully_connected_naive(buffer_1329, 256,
                      buffer_1334, 16,
                      buffer_layer3_8_se_fc_0_weight, buffer_layer3_8_se_fc_0_bias);

    //Layer 191 PRelu_411 PRelu
    //Attributes
    //Parameters
    //Inputs: 1334,layer3.8.se.fc.1.weight
    //Outputs: 1335
    //Shape:
    //    1334: (1, 16)
    //    layer3.8.se.fc.1.weight: (1,)
    //    1335: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1334[i],
               1,
               1,
               buffer_1335[i],
               [i]);
}

    //Layer 192 Gemm_412 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1335,layer3.8.se.fc.2.weight,layer3.8.se.fc.2.bias
    //Outputs: 1336
    //Shape:
    //    1335: (1, 16)
    //    layer3.8.se.fc.2.weight: (256, 16)
    //    layer3.8.se.fc.2.bias: (256,)
    //    1336: (1, 256)

fully_connected_naive(buffer_1335, 16,
                      buffer_1336, 256,
                      buffer_layer3_8_se_fc_2_weight, buffer_layer3_8_se_fc_2_bias);

    //Layer 193 Sigmoid_413 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1336
    //Outputs: 1337
    //Shape:
    //    1336: (1, 256)
    //    1337: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1336, 1, 256, buffer_1337);

    //Layer 194 Mul_418 Mul
    //Attributes
    //Parameters
    //Inputs: 2043,1337
    //Outputs: 1346
    //Shape:
    //    2043: (1, 256, 14, 14)
    //    1337: (1, 256)
    //    1346: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1346[i][j] = buffer_2043[i][j] * <memory_manager.Buffer object at 0x7fae8f4438d0>;

}
    //Layer 195 Add_419 Add
    //Attributes
    //Parameters
    //Inputs: 1346,1315
    //Outputs: 1347
    //Shape:
    //    1346: (1, 256, 14, 14)
    //    1315: (1, 256, 14, 14)
    //    1347: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1347[i],
               buffer_1346[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1347[i], buffer_1315[i], 14, 14);
    }


    //Layer 196 PRelu_420 PRelu
    //Attributes
    //Parameters
    //Inputs: 1347,2215
    //Outputs: 1349
    //Shape:
    //    1347: (1, 256, 14, 14)
    //    2215: (1, 1, 1)
    //    1349: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1347[i],
               14,
               14,
               buffer_1349[i],
               [i]);
}

    //Layer 197 BatchNormalization_421 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1349,layer3.9.bn0.weight,layer3.9.bn0.bias,layer3.9.bn0.running_mean,layer3.9.bn0.running_var
    //Outputs: 1350
    //Shape:
    //    1349: (1, 256, 14, 14)
    //    layer3.9.bn0.weight: (256,)
    //    layer3.9.bn0.bias: (256,)
    //    layer3.9.bn0.running_mean: (256,)
    //    layer3.9.bn0.running_var: (256,)
    //    1350: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1349[i],
                              14,
                              14,
                              buffer_1350[i],
                              buffer_layer3_9_bn0_weight[i],
                              buffer_layer3_9_bn0_bias[i],
                              buffer_layer3_9_bn0_running_mean[i],
                              buffer_layer3_9_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 198 Conv_422 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1350,2047,2048
    //Outputs: 2046
    //Shape:
    //    1350: (1, 256, 14, 14)
    //    2047: (256, 256, 3, 3)
    //    2048: (256,)
    //    2046: (1, 256, 14, 14)

const uint16_t Conv_422_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1350[g*256/1],
                                    14,
                                    14,
                                    buffer_2046[i],
                                    buffer_2047[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_422_padding,
                                    
                                    buffer_2048[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1350[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2047[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_422_padding,
                                        0.0);

            add_channel2d_naive(buffer_2046[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 199 PRelu_423 PRelu
    //Attributes
    //Parameters
    //Inputs: 2046,2216
    //Outputs: 1354
    //Shape:
    //    2046: (1, 256, 14, 14)
    //    2216: (1, 1, 1)
    //    1354: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2046[i],
               14,
               14,
               buffer_1354[i],
               [i]);
}

    //Layer 200 Conv_424 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1354,2050,2051
    //Outputs: 2049
    //Shape:
    //    1354: (1, 256, 14, 14)
    //    2050: (256, 256, 3, 3)
    //    2051: (256,)
    //    2049: (1, 256, 14, 14)

const uint16_t Conv_424_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1354[g*256/1],
                                    14,
                                    14,
                                    buffer_2049[i],
                                    buffer_2050[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_424_padding,
                                    
                                    buffer_2051[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1354[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2050[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_424_padding,
                                        0.0);

            add_channel2d_naive(buffer_2049[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 201 GlobalAveragePool_431 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2049
    //Outputs: 1363
    //Shape:
    //    2049: (1, 256, 14, 14)
    //    1363: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2049[i],
                                   14,
                                   14,
                                   buffer_1363[i]);
}
    //Layer 202 Gemm_436 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1363,layer3.9.se.fc.0.weight,layer3.9.se.fc.0.bias
    //Outputs: 1368
    //Shape:
    //    1363: (1, 256, 1, 1)
    //    layer3.9.se.fc.0.weight: (16, 256)
    //    layer3.9.se.fc.0.bias: (16,)
    //    1368: (1, 16)

fully_connected_naive(buffer_1363, 256,
                      buffer_1368, 16,
                      buffer_layer3_9_se_fc_0_weight, buffer_layer3_9_se_fc_0_bias);

    //Layer 203 PRelu_437 PRelu
    //Attributes
    //Parameters
    //Inputs: 1368,layer3.9.se.fc.1.weight
    //Outputs: 1369
    //Shape:
    //    1368: (1, 16)
    //    layer3.9.se.fc.1.weight: (1,)
    //    1369: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1368[i],
               1,
               1,
               buffer_1369[i],
               [i]);
}

    //Layer 204 Gemm_438 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1369,layer3.9.se.fc.2.weight,layer3.9.se.fc.2.bias
    //Outputs: 1370
    //Shape:
    //    1369: (1, 16)
    //    layer3.9.se.fc.2.weight: (256, 16)
    //    layer3.9.se.fc.2.bias: (256,)
    //    1370: (1, 256)

fully_connected_naive(buffer_1369, 16,
                      buffer_1370, 256,
                      buffer_layer3_9_se_fc_2_weight, buffer_layer3_9_se_fc_2_bias);

    //Layer 205 Sigmoid_439 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1370
    //Outputs: 1371
    //Shape:
    //    1370: (1, 256)
    //    1371: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1370, 1, 256, buffer_1371);

    //Layer 206 Mul_444 Mul
    //Attributes
    //Parameters
    //Inputs: 2049,1371
    //Outputs: 1380
    //Shape:
    //    2049: (1, 256, 14, 14)
    //    1371: (1, 256)
    //    1380: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1380[i][j] = buffer_2049[i][j] * <memory_manager.Buffer object at 0x7fae97c16ef0>;

}
    //Layer 207 Add_445 Add
    //Attributes
    //Parameters
    //Inputs: 1380,1349
    //Outputs: 1381
    //Shape:
    //    1380: (1, 256, 14, 14)
    //    1349: (1, 256, 14, 14)
    //    1381: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1381[i],
               buffer_1380[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1381[i], buffer_1349[i], 14, 14);
    }


    //Layer 208 PRelu_446 PRelu
    //Attributes
    //Parameters
    //Inputs: 1381,2219
    //Outputs: 1383
    //Shape:
    //    1381: (1, 256, 14, 14)
    //    2219: (1, 1, 1)
    //    1383: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1381[i],
               14,
               14,
               buffer_1383[i],
               [i]);
}

    //Layer 209 BatchNormalization_447 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1383,layer3.10.bn0.weight,layer3.10.bn0.bias,layer3.10.bn0.running_mean,layer3.10.bn0.running_var
    //Outputs: 1384
    //Shape:
    //    1383: (1, 256, 14, 14)
    //    layer3.10.bn0.weight: (256,)
    //    layer3.10.bn0.bias: (256,)
    //    layer3.10.bn0.running_mean: (256,)
    //    layer3.10.bn0.running_var: (256,)
    //    1384: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1383[i],
                              14,
                              14,
                              buffer_1384[i],
                              buffer_layer3_10_bn0_weight[i],
                              buffer_layer3_10_bn0_bias[i],
                              buffer_layer3_10_bn0_running_mean[i],
                              buffer_layer3_10_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 210 Conv_448 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1384,2053,2054
    //Outputs: 2052
    //Shape:
    //    1384: (1, 256, 14, 14)
    //    2053: (256, 256, 3, 3)
    //    2054: (256,)
    //    2052: (1, 256, 14, 14)

const uint16_t Conv_448_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1384[g*256/1],
                                    14,
                                    14,
                                    buffer_2052[i],
                                    buffer_2053[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_448_padding,
                                    
                                    buffer_2054[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1384[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2053[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_448_padding,
                                        0.0);

            add_channel2d_naive(buffer_2052[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 211 PRelu_449 PRelu
    //Attributes
    //Parameters
    //Inputs: 2052,2220
    //Outputs: 1388
    //Shape:
    //    2052: (1, 256, 14, 14)
    //    2220: (1, 1, 1)
    //    1388: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2052[i],
               14,
               14,
               buffer_1388[i],
               [i]);
}

    //Layer 212 Conv_450 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1388,2056,2057
    //Outputs: 2055
    //Shape:
    //    1388: (1, 256, 14, 14)
    //    2056: (256, 256, 3, 3)
    //    2057: (256,)
    //    2055: (1, 256, 14, 14)

const uint16_t Conv_450_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1388[g*256/1],
                                    14,
                                    14,
                                    buffer_2055[i],
                                    buffer_2056[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_450_padding,
                                    
                                    buffer_2057[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1388[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2056[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_450_padding,
                                        0.0);

            add_channel2d_naive(buffer_2055[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 213 GlobalAveragePool_457 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2055
    //Outputs: 1397
    //Shape:
    //    2055: (1, 256, 14, 14)
    //    1397: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2055[i],
                                   14,
                                   14,
                                   buffer_1397[i]);
}
    //Layer 214 Gemm_462 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1397,layer3.10.se.fc.0.weight,layer3.10.se.fc.0.bias
    //Outputs: 1402
    //Shape:
    //    1397: (1, 256, 1, 1)
    //    layer3.10.se.fc.0.weight: (16, 256)
    //    layer3.10.se.fc.0.bias: (16,)
    //    1402: (1, 16)

fully_connected_naive(buffer_1397, 256,
                      buffer_1402, 16,
                      buffer_layer3_10_se_fc_0_weight, buffer_layer3_10_se_fc_0_bias);

    //Layer 215 PRelu_463 PRelu
    //Attributes
    //Parameters
    //Inputs: 1402,layer3.10.se.fc.1.weight
    //Outputs: 1403
    //Shape:
    //    1402: (1, 16)
    //    layer3.10.se.fc.1.weight: (1,)
    //    1403: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1402[i],
               1,
               1,
               buffer_1403[i],
               [i]);
}

    //Layer 216 Gemm_464 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1403,layer3.10.se.fc.2.weight,layer3.10.se.fc.2.bias
    //Outputs: 1404
    //Shape:
    //    1403: (1, 16)
    //    layer3.10.se.fc.2.weight: (256, 16)
    //    layer3.10.se.fc.2.bias: (256,)
    //    1404: (1, 256)

fully_connected_naive(buffer_1403, 16,
                      buffer_1404, 256,
                      buffer_layer3_10_se_fc_2_weight, buffer_layer3_10_se_fc_2_bias);

    //Layer 217 Sigmoid_465 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1404
    //Outputs: 1405
    //Shape:
    //    1404: (1, 256)
    //    1405: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1404, 1, 256, buffer_1405);

    //Layer 218 Mul_470 Mul
    //Attributes
    //Parameters
    //Inputs: 2055,1405
    //Outputs: 1414
    //Shape:
    //    2055: (1, 256, 14, 14)
    //    1405: (1, 256)
    //    1414: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1414[i][j] = buffer_2055[i][j] * <memory_manager.Buffer object at 0x7fae97c1a390>;

}
    //Layer 219 Add_471 Add
    //Attributes
    //Parameters
    //Inputs: 1414,1383
    //Outputs: 1415
    //Shape:
    //    1414: (1, 256, 14, 14)
    //    1383: (1, 256, 14, 14)
    //    1415: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1415[i],
               buffer_1414[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1415[i], buffer_1383[i], 14, 14);
    }


    //Layer 220 PRelu_472 PRelu
    //Attributes
    //Parameters
    //Inputs: 1415,2223
    //Outputs: 1417
    //Shape:
    //    1415: (1, 256, 14, 14)
    //    2223: (1, 1, 1)
    //    1417: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1415[i],
               14,
               14,
               buffer_1417[i],
               [i]);
}

    //Layer 221 BatchNormalization_473 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1417,layer3.11.bn0.weight,layer3.11.bn0.bias,layer3.11.bn0.running_mean,layer3.11.bn0.running_var
    //Outputs: 1418
    //Shape:
    //    1417: (1, 256, 14, 14)
    //    layer3.11.bn0.weight: (256,)
    //    layer3.11.bn0.bias: (256,)
    //    layer3.11.bn0.running_mean: (256,)
    //    layer3.11.bn0.running_var: (256,)
    //    1418: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1417[i],
                              14,
                              14,
                              buffer_1418[i],
                              buffer_layer3_11_bn0_weight[i],
                              buffer_layer3_11_bn0_bias[i],
                              buffer_layer3_11_bn0_running_mean[i],
                              buffer_layer3_11_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 222 Conv_474 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1418,2059,2060
    //Outputs: 2058
    //Shape:
    //    1418: (1, 256, 14, 14)
    //    2059: (256, 256, 3, 3)
    //    2060: (256,)
    //    2058: (1, 256, 14, 14)

const uint16_t Conv_474_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1418[g*256/1],
                                    14,
                                    14,
                                    buffer_2058[i],
                                    buffer_2059[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_474_padding,
                                    
                                    buffer_2060[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1418[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2059[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_474_padding,
                                        0.0);

            add_channel2d_naive(buffer_2058[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 223 PRelu_475 PRelu
    //Attributes
    //Parameters
    //Inputs: 2058,2224
    //Outputs: 1422
    //Shape:
    //    2058: (1, 256, 14, 14)
    //    2224: (1, 1, 1)
    //    1422: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2058[i],
               14,
               14,
               buffer_1422[i],
               [i]);
}

    //Layer 224 Conv_476 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1422,2062,2063
    //Outputs: 2061
    //Shape:
    //    1422: (1, 256, 14, 14)
    //    2062: (256, 256, 3, 3)
    //    2063: (256,)
    //    2061: (1, 256, 14, 14)

const uint16_t Conv_476_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1422[g*256/1],
                                    14,
                                    14,
                                    buffer_2061[i],
                                    buffer_2062[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_476_padding,
                                    
                                    buffer_2063[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1422[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2062[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_476_padding,
                                        0.0);

            add_channel2d_naive(buffer_2061[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 225 GlobalAveragePool_483 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2061
    //Outputs: 1431
    //Shape:
    //    2061: (1, 256, 14, 14)
    //    1431: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2061[i],
                                   14,
                                   14,
                                   buffer_1431[i]);
}
    //Layer 226 Gemm_488 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1431,layer3.11.se.fc.0.weight,layer3.11.se.fc.0.bias
    //Outputs: 1436
    //Shape:
    //    1431: (1, 256, 1, 1)
    //    layer3.11.se.fc.0.weight: (16, 256)
    //    layer3.11.se.fc.0.bias: (16,)
    //    1436: (1, 16)

fully_connected_naive(buffer_1431, 256,
                      buffer_1436, 16,
                      buffer_layer3_11_se_fc_0_weight, buffer_layer3_11_se_fc_0_bias);

    //Layer 227 PRelu_489 PRelu
    //Attributes
    //Parameters
    //Inputs: 1436,layer3.11.se.fc.1.weight
    //Outputs: 1437
    //Shape:
    //    1436: (1, 16)
    //    layer3.11.se.fc.1.weight: (1,)
    //    1437: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1436[i],
               1,
               1,
               buffer_1437[i],
               [i]);
}

    //Layer 228 Gemm_490 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1437,layer3.11.se.fc.2.weight,layer3.11.se.fc.2.bias
    //Outputs: 1438
    //Shape:
    //    1437: (1, 16)
    //    layer3.11.se.fc.2.weight: (256, 16)
    //    layer3.11.se.fc.2.bias: (256,)
    //    1438: (1, 256)

fully_connected_naive(buffer_1437, 16,
                      buffer_1438, 256,
                      buffer_layer3_11_se_fc_2_weight, buffer_layer3_11_se_fc_2_bias);

    //Layer 229 Sigmoid_491 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1438
    //Outputs: 1439
    //Shape:
    //    1438: (1, 256)
    //    1439: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1438, 1, 256, buffer_1439);

    //Layer 230 Mul_496 Mul
    //Attributes
    //Parameters
    //Inputs: 2061,1439
    //Outputs: 1448
    //Shape:
    //    2061: (1, 256, 14, 14)
    //    1439: (1, 256)
    //    1448: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1448[i][j] = buffer_2061[i][j] * <memory_manager.Buffer object at 0x7fae95bb6940>;

}
    //Layer 231 Add_497 Add
    //Attributes
    //Parameters
    //Inputs: 1448,1417
    //Outputs: 1449
    //Shape:
    //    1448: (1, 256, 14, 14)
    //    1417: (1, 256, 14, 14)
    //    1449: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1449[i],
               buffer_1448[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1449[i], buffer_1417[i], 14, 14);
    }


    //Layer 232 PRelu_498 PRelu
    //Attributes
    //Parameters
    //Inputs: 1449,2227
    //Outputs: 1451
    //Shape:
    //    1449: (1, 256, 14, 14)
    //    2227: (1, 1, 1)
    //    1451: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1449[i],
               14,
               14,
               buffer_1451[i],
               [i]);
}

    //Layer 233 BatchNormalization_499 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1451,layer3.12.bn0.weight,layer3.12.bn0.bias,layer3.12.bn0.running_mean,layer3.12.bn0.running_var
    //Outputs: 1452
    //Shape:
    //    1451: (1, 256, 14, 14)
    //    layer3.12.bn0.weight: (256,)
    //    layer3.12.bn0.bias: (256,)
    //    layer3.12.bn0.running_mean: (256,)
    //    layer3.12.bn0.running_var: (256,)
    //    1452: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1451[i],
                              14,
                              14,
                              buffer_1452[i],
                              buffer_layer3_12_bn0_weight[i],
                              buffer_layer3_12_bn0_bias[i],
                              buffer_layer3_12_bn0_running_mean[i],
                              buffer_layer3_12_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 234 Conv_500 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1452,2065,2066
    //Outputs: 2064
    //Shape:
    //    1452: (1, 256, 14, 14)
    //    2065: (256, 256, 3, 3)
    //    2066: (256,)
    //    2064: (1, 256, 14, 14)

const uint16_t Conv_500_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1452[g*256/1],
                                    14,
                                    14,
                                    buffer_2064[i],
                                    buffer_2065[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_500_padding,
                                    
                                    buffer_2066[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1452[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2065[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_500_padding,
                                        0.0);

            add_channel2d_naive(buffer_2064[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 235 PRelu_501 PRelu
    //Attributes
    //Parameters
    //Inputs: 2064,2228
    //Outputs: 1456
    //Shape:
    //    2064: (1, 256, 14, 14)
    //    2228: (1, 1, 1)
    //    1456: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2064[i],
               14,
               14,
               buffer_1456[i],
               [i]);
}

    //Layer 236 Conv_502 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1456,2068,2069
    //Outputs: 2067
    //Shape:
    //    1456: (1, 256, 14, 14)
    //    2068: (256, 256, 3, 3)
    //    2069: (256,)
    //    2067: (1, 256, 14, 14)

const uint16_t Conv_502_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1456[g*256/1],
                                    14,
                                    14,
                                    buffer_2067[i],
                                    buffer_2068[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_502_padding,
                                    
                                    buffer_2069[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1456[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2068[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_502_padding,
                                        0.0);

            add_channel2d_naive(buffer_2067[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 237 GlobalAveragePool_509 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2067
    //Outputs: 1465
    //Shape:
    //    2067: (1, 256, 14, 14)
    //    1465: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2067[i],
                                   14,
                                   14,
                                   buffer_1465[i]);
}
    //Layer 238 Gemm_514 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1465,layer3.12.se.fc.0.weight,layer3.12.se.fc.0.bias
    //Outputs: 1470
    //Shape:
    //    1465: (1, 256, 1, 1)
    //    layer3.12.se.fc.0.weight: (16, 256)
    //    layer3.12.se.fc.0.bias: (16,)
    //    1470: (1, 16)

fully_connected_naive(buffer_1465, 256,
                      buffer_1470, 16,
                      buffer_layer3_12_se_fc_0_weight, buffer_layer3_12_se_fc_0_bias);

    //Layer 239 PRelu_515 PRelu
    //Attributes
    //Parameters
    //Inputs: 1470,layer3.12.se.fc.1.weight
    //Outputs: 1471
    //Shape:
    //    1470: (1, 16)
    //    layer3.12.se.fc.1.weight: (1,)
    //    1471: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1470[i],
               1,
               1,
               buffer_1471[i],
               [i]);
}

    //Layer 240 Gemm_516 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1471,layer3.12.se.fc.2.weight,layer3.12.se.fc.2.bias
    //Outputs: 1472
    //Shape:
    //    1471: (1, 16)
    //    layer3.12.se.fc.2.weight: (256, 16)
    //    layer3.12.se.fc.2.bias: (256,)
    //    1472: (1, 256)

fully_connected_naive(buffer_1471, 16,
                      buffer_1472, 256,
                      buffer_layer3_12_se_fc_2_weight, buffer_layer3_12_se_fc_2_bias);

    //Layer 241 Sigmoid_517 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1472
    //Outputs: 1473
    //Shape:
    //    1472: (1, 256)
    //    1473: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1472, 1, 256, buffer_1473);

    //Layer 242 Mul_522 Mul
    //Attributes
    //Parameters
    //Inputs: 2067,1473
    //Outputs: 1482
    //Shape:
    //    2067: (1, 256, 14, 14)
    //    1473: (1, 256)
    //    1482: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1482[i][j] = buffer_2067[i][j] * <memory_manager.Buffer object at 0x7fae8f4001d0>;

}
    //Layer 243 Add_523 Add
    //Attributes
    //Parameters
    //Inputs: 1482,1451
    //Outputs: 1483
    //Shape:
    //    1482: (1, 256, 14, 14)
    //    1451: (1, 256, 14, 14)
    //    1483: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1483[i],
               buffer_1482[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1483[i], buffer_1451[i], 14, 14);
    }


    //Layer 244 PRelu_524 PRelu
    //Attributes
    //Parameters
    //Inputs: 1483,2231
    //Outputs: 1485
    //Shape:
    //    1483: (1, 256, 14, 14)
    //    2231: (1, 1, 1)
    //    1485: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1483[i],
               14,
               14,
               buffer_1485[i],
               [i]);
}

    //Layer 245 BatchNormalization_525 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1485,layer3.13.bn0.weight,layer3.13.bn0.bias,layer3.13.bn0.running_mean,layer3.13.bn0.running_var
    //Outputs: 1486
    //Shape:
    //    1485: (1, 256, 14, 14)
    //    layer3.13.bn0.weight: (256,)
    //    layer3.13.bn0.bias: (256,)
    //    layer3.13.bn0.running_mean: (256,)
    //    layer3.13.bn0.running_var: (256,)
    //    1486: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1485[i],
                              14,
                              14,
                              buffer_1486[i],
                              buffer_layer3_13_bn0_weight[i],
                              buffer_layer3_13_bn0_bias[i],
                              buffer_layer3_13_bn0_running_mean[i],
                              buffer_layer3_13_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 246 Conv_526 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1486,2071,2072
    //Outputs: 2070
    //Shape:
    //    1486: (1, 256, 14, 14)
    //    2071: (256, 256, 3, 3)
    //    2072: (256,)
    //    2070: (1, 256, 14, 14)

const uint16_t Conv_526_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1486[g*256/1],
                                    14,
                                    14,
                                    buffer_2070[i],
                                    buffer_2071[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_526_padding,
                                    
                                    buffer_2072[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1486[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2071[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_526_padding,
                                        0.0);

            add_channel2d_naive(buffer_2070[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 247 PRelu_527 PRelu
    //Attributes
    //Parameters
    //Inputs: 2070,2232
    //Outputs: 1490
    //Shape:
    //    2070: (1, 256, 14, 14)
    //    2232: (1, 1, 1)
    //    1490: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2070[i],
               14,
               14,
               buffer_1490[i],
               [i]);
}

    //Layer 248 Conv_528 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1490,2074,2075
    //Outputs: 2073
    //Shape:
    //    1490: (1, 256, 14, 14)
    //    2074: (256, 256, 3, 3)
    //    2075: (256,)
    //    2073: (1, 256, 14, 14)

const uint16_t Conv_528_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1490[g*256/1],
                                    14,
                                    14,
                                    buffer_2073[i],
                                    buffer_2074[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_528_padding,
                                    
                                    buffer_2075[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1490[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2074[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_528_padding,
                                        0.0);

            add_channel2d_naive(buffer_2073[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 249 GlobalAveragePool_535 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2073
    //Outputs: 1499
    //Shape:
    //    2073: (1, 256, 14, 14)
    //    1499: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2073[i],
                                   14,
                                   14,
                                   buffer_1499[i]);
}
    //Layer 250 Gemm_540 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1499,layer3.13.se.fc.0.weight,layer3.13.se.fc.0.bias
    //Outputs: 1504
    //Shape:
    //    1499: (1, 256, 1, 1)
    //    layer3.13.se.fc.0.weight: (16, 256)
    //    layer3.13.se.fc.0.bias: (16,)
    //    1504: (1, 16)

fully_connected_naive(buffer_1499, 256,
                      buffer_1504, 16,
                      buffer_layer3_13_se_fc_0_weight, buffer_layer3_13_se_fc_0_bias);

    //Layer 251 PRelu_541 PRelu
    //Attributes
    //Parameters
    //Inputs: 1504,layer3.13.se.fc.1.weight
    //Outputs: 1505
    //Shape:
    //    1504: (1, 16)
    //    layer3.13.se.fc.1.weight: (1,)
    //    1505: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1504[i],
               1,
               1,
               buffer_1505[i],
               [i]);
}

    //Layer 252 Gemm_542 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1505,layer3.13.se.fc.2.weight,layer3.13.se.fc.2.bias
    //Outputs: 1506
    //Shape:
    //    1505: (1, 16)
    //    layer3.13.se.fc.2.weight: (256, 16)
    //    layer3.13.se.fc.2.bias: (256,)
    //    1506: (1, 256)

fully_connected_naive(buffer_1505, 16,
                      buffer_1506, 256,
                      buffer_layer3_13_se_fc_2_weight, buffer_layer3_13_se_fc_2_bias);

    //Layer 253 Sigmoid_543 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1506
    //Outputs: 1507
    //Shape:
    //    1506: (1, 256)
    //    1507: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1506, 1, 256, buffer_1507);

    //Layer 254 Mul_548 Mul
    //Attributes
    //Parameters
    //Inputs: 2073,1507
    //Outputs: 1516
    //Shape:
    //    2073: (1, 256, 14, 14)
    //    1507: (1, 256)
    //    1516: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1516[i][j] = buffer_2073[i][j] * <memory_manager.Buffer object at 0x7fae8f4815c0>;

}
    //Layer 255 Add_549 Add
    //Attributes
    //Parameters
    //Inputs: 1516,1485
    //Outputs: 1517
    //Shape:
    //    1516: (1, 256, 14, 14)
    //    1485: (1, 256, 14, 14)
    //    1517: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1517[i],
               buffer_1516[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1517[i], buffer_1485[i], 14, 14);
    }


    //Layer 256 PRelu_550 PRelu
    //Attributes
    //Parameters
    //Inputs: 1517,2235
    //Outputs: 1519
    //Shape:
    //    1517: (1, 256, 14, 14)
    //    2235: (1, 1, 1)
    //    1519: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1517[i],
               14,
               14,
               buffer_1519[i],
               [i]);
}

    //Layer 257 BatchNormalization_551 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1519,layer3.14.bn0.weight,layer3.14.bn0.bias,layer3.14.bn0.running_mean,layer3.14.bn0.running_var
    //Outputs: 1520
    //Shape:
    //    1519: (1, 256, 14, 14)
    //    layer3.14.bn0.weight: (256,)
    //    layer3.14.bn0.bias: (256,)
    //    layer3.14.bn0.running_mean: (256,)
    //    layer3.14.bn0.running_var: (256,)
    //    1520: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1519[i],
                              14,
                              14,
                              buffer_1520[i],
                              buffer_layer3_14_bn0_weight[i],
                              buffer_layer3_14_bn0_bias[i],
                              buffer_layer3_14_bn0_running_mean[i],
                              buffer_layer3_14_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 258 Conv_552 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1520,2077,2078
    //Outputs: 2076
    //Shape:
    //    1520: (1, 256, 14, 14)
    //    2077: (256, 256, 3, 3)
    //    2078: (256,)
    //    2076: (1, 256, 14, 14)

const uint16_t Conv_552_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1520[g*256/1],
                                    14,
                                    14,
                                    buffer_2076[i],
                                    buffer_2077[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_552_padding,
                                    
                                    buffer_2078[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1520[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2077[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_552_padding,
                                        0.0);

            add_channel2d_naive(buffer_2076[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 259 PRelu_553 PRelu
    //Attributes
    //Parameters
    //Inputs: 2076,2236
    //Outputs: 1524
    //Shape:
    //    2076: (1, 256, 14, 14)
    //    2236: (1, 1, 1)
    //    1524: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2076[i],
               14,
               14,
               buffer_1524[i],
               [i]);
}

    //Layer 260 Conv_554 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1524,2080,2081
    //Outputs: 2079
    //Shape:
    //    1524: (1, 256, 14, 14)
    //    2080: (256, 256, 3, 3)
    //    2081: (256,)
    //    2079: (1, 256, 14, 14)

const uint16_t Conv_554_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1524[g*256/1],
                                    14,
                                    14,
                                    buffer_2079[i],
                                    buffer_2080[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_554_padding,
                                    
                                    buffer_2081[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1524[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2080[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_554_padding,
                                        0.0);

            add_channel2d_naive(buffer_2079[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 261 GlobalAveragePool_561 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2079
    //Outputs: 1533
    //Shape:
    //    2079: (1, 256, 14, 14)
    //    1533: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2079[i],
                                   14,
                                   14,
                                   buffer_1533[i]);
}
    //Layer 262 Gemm_566 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1533,layer3.14.se.fc.0.weight,layer3.14.se.fc.0.bias
    //Outputs: 1538
    //Shape:
    //    1533: (1, 256, 1, 1)
    //    layer3.14.se.fc.0.weight: (16, 256)
    //    layer3.14.se.fc.0.bias: (16,)
    //    1538: (1, 16)

fully_connected_naive(buffer_1533, 256,
                      buffer_1538, 16,
                      buffer_layer3_14_se_fc_0_weight, buffer_layer3_14_se_fc_0_bias);

    //Layer 263 PRelu_567 PRelu
    //Attributes
    //Parameters
    //Inputs: 1538,layer3.14.se.fc.1.weight
    //Outputs: 1539
    //Shape:
    //    1538: (1, 16)
    //    layer3.14.se.fc.1.weight: (1,)
    //    1539: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1538[i],
               1,
               1,
               buffer_1539[i],
               [i]);
}

    //Layer 264 Gemm_568 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1539,layer3.14.se.fc.2.weight,layer3.14.se.fc.2.bias
    //Outputs: 1540
    //Shape:
    //    1539: (1, 16)
    //    layer3.14.se.fc.2.weight: (256, 16)
    //    layer3.14.se.fc.2.bias: (256,)
    //    1540: (1, 256)

fully_connected_naive(buffer_1539, 16,
                      buffer_1540, 256,
                      buffer_layer3_14_se_fc_2_weight, buffer_layer3_14_se_fc_2_bias);

    //Layer 265 Sigmoid_569 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1540
    //Outputs: 1541
    //Shape:
    //    1540: (1, 256)
    //    1541: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1540, 1, 256, buffer_1541);

    //Layer 266 Mul_574 Mul
    //Attributes
    //Parameters
    //Inputs: 2079,1541
    //Outputs: 1550
    //Shape:
    //    2079: (1, 256, 14, 14)
    //    1541: (1, 256)
    //    1550: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1550[i][j] = buffer_2079[i][j] * <memory_manager.Buffer object at 0x7fae8f4867b8>;

}
    //Layer 267 Add_575 Add
    //Attributes
    //Parameters
    //Inputs: 1550,1519
    //Outputs: 1551
    //Shape:
    //    1550: (1, 256, 14, 14)
    //    1519: (1, 256, 14, 14)
    //    1551: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1551[i],
               buffer_1550[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1551[i], buffer_1519[i], 14, 14);
    }


    //Layer 268 PRelu_576 PRelu
    //Attributes
    //Parameters
    //Inputs: 1551,2239
    //Outputs: 1553
    //Shape:
    //    1551: (1, 256, 14, 14)
    //    2239: (1, 1, 1)
    //    1553: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1551[i],
               14,
               14,
               buffer_1553[i],
               [i]);
}

    //Layer 269 BatchNormalization_577 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1553,layer3.15.bn0.weight,layer3.15.bn0.bias,layer3.15.bn0.running_mean,layer3.15.bn0.running_var
    //Outputs: 1554
    //Shape:
    //    1553: (1, 256, 14, 14)
    //    layer3.15.bn0.weight: (256,)
    //    layer3.15.bn0.bias: (256,)
    //    layer3.15.bn0.running_mean: (256,)
    //    layer3.15.bn0.running_var: (256,)
    //    1554: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1553[i],
                              14,
                              14,
                              buffer_1554[i],
                              buffer_layer3_15_bn0_weight[i],
                              buffer_layer3_15_bn0_bias[i],
                              buffer_layer3_15_bn0_running_mean[i],
                              buffer_layer3_15_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 270 Conv_578 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1554,2083,2084
    //Outputs: 2082
    //Shape:
    //    1554: (1, 256, 14, 14)
    //    2083: (256, 256, 3, 3)
    //    2084: (256,)
    //    2082: (1, 256, 14, 14)

const uint16_t Conv_578_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1554[g*256/1],
                                    14,
                                    14,
                                    buffer_2082[i],
                                    buffer_2083[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_578_padding,
                                    
                                    buffer_2084[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1554[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2083[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_578_padding,
                                        0.0);

            add_channel2d_naive(buffer_2082[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 271 PRelu_579 PRelu
    //Attributes
    //Parameters
    //Inputs: 2082,2240
    //Outputs: 1558
    //Shape:
    //    2082: (1, 256, 14, 14)
    //    2240: (1, 1, 1)
    //    1558: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2082[i],
               14,
               14,
               buffer_1558[i],
               [i]);
}

    //Layer 272 Conv_580 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1558,2086,2087
    //Outputs: 2085
    //Shape:
    //    1558: (1, 256, 14, 14)
    //    2086: (256, 256, 3, 3)
    //    2087: (256,)
    //    2085: (1, 256, 14, 14)

const uint16_t Conv_580_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1558[g*256/1],
                                    14,
                                    14,
                                    buffer_2085[i],
                                    buffer_2086[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_580_padding,
                                    
                                    buffer_2087[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1558[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2086[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_580_padding,
                                        0.0);

            add_channel2d_naive(buffer_2085[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 273 GlobalAveragePool_587 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2085
    //Outputs: 1567
    //Shape:
    //    2085: (1, 256, 14, 14)
    //    1567: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2085[i],
                                   14,
                                   14,
                                   buffer_1567[i]);
}
    //Layer 274 Gemm_592 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1567,layer3.15.se.fc.0.weight,layer3.15.se.fc.0.bias
    //Outputs: 1572
    //Shape:
    //    1567: (1, 256, 1, 1)
    //    layer3.15.se.fc.0.weight: (16, 256)
    //    layer3.15.se.fc.0.bias: (16,)
    //    1572: (1, 16)

fully_connected_naive(buffer_1567, 256,
                      buffer_1572, 16,
                      buffer_layer3_15_se_fc_0_weight, buffer_layer3_15_se_fc_0_bias);

    //Layer 275 PRelu_593 PRelu
    //Attributes
    //Parameters
    //Inputs: 1572,layer3.15.se.fc.1.weight
    //Outputs: 1573
    //Shape:
    //    1572: (1, 16)
    //    layer3.15.se.fc.1.weight: (1,)
    //    1573: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1572[i],
               1,
               1,
               buffer_1573[i],
               [i]);
}

    //Layer 276 Gemm_594 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1573,layer3.15.se.fc.2.weight,layer3.15.se.fc.2.bias
    //Outputs: 1574
    //Shape:
    //    1573: (1, 16)
    //    layer3.15.se.fc.2.weight: (256, 16)
    //    layer3.15.se.fc.2.bias: (256,)
    //    1574: (1, 256)

fully_connected_naive(buffer_1573, 16,
                      buffer_1574, 256,
                      buffer_layer3_15_se_fc_2_weight, buffer_layer3_15_se_fc_2_bias);

    //Layer 277 Sigmoid_595 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1574
    //Outputs: 1575
    //Shape:
    //    1574: (1, 256)
    //    1575: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1574, 1, 256, buffer_1575);

    //Layer 278 Mul_600 Mul
    //Attributes
    //Parameters
    //Inputs: 2085,1575
    //Outputs: 1584
    //Shape:
    //    2085: (1, 256, 14, 14)
    //    1575: (1, 256)
    //    1584: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1584[i][j] = buffer_2085[i][j] * <memory_manager.Buffer object at 0x7fae8f4b29b0>;

}
    //Layer 279 Add_601 Add
    //Attributes
    //Parameters
    //Inputs: 1584,1553
    //Outputs: 1585
    //Shape:
    //    1584: (1, 256, 14, 14)
    //    1553: (1, 256, 14, 14)
    //    1585: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1585[i],
               buffer_1584[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1585[i], buffer_1553[i], 14, 14);
    }


    //Layer 280 PRelu_602 PRelu
    //Attributes
    //Parameters
    //Inputs: 1585,2243
    //Outputs: 1587
    //Shape:
    //    1585: (1, 256, 14, 14)
    //    2243: (1, 1, 1)
    //    1587: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1585[i],
               14,
               14,
               buffer_1587[i],
               [i]);
}

    //Layer 281 BatchNormalization_603 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1587,layer3.16.bn0.weight,layer3.16.bn0.bias,layer3.16.bn0.running_mean,layer3.16.bn0.running_var
    //Outputs: 1588
    //Shape:
    //    1587: (1, 256, 14, 14)
    //    layer3.16.bn0.weight: (256,)
    //    layer3.16.bn0.bias: (256,)
    //    layer3.16.bn0.running_mean: (256,)
    //    layer3.16.bn0.running_var: (256,)
    //    1588: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1587[i],
                              14,
                              14,
                              buffer_1588[i],
                              buffer_layer3_16_bn0_weight[i],
                              buffer_layer3_16_bn0_bias[i],
                              buffer_layer3_16_bn0_running_mean[i],
                              buffer_layer3_16_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 282 Conv_604 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1588,2089,2090
    //Outputs: 2088
    //Shape:
    //    1588: (1, 256, 14, 14)
    //    2089: (256, 256, 3, 3)
    //    2090: (256,)
    //    2088: (1, 256, 14, 14)

const uint16_t Conv_604_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1588[g*256/1],
                                    14,
                                    14,
                                    buffer_2088[i],
                                    buffer_2089[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_604_padding,
                                    
                                    buffer_2090[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1588[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2089[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_604_padding,
                                        0.0);

            add_channel2d_naive(buffer_2088[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 283 PRelu_605 PRelu
    //Attributes
    //Parameters
    //Inputs: 2088,2244
    //Outputs: 1592
    //Shape:
    //    2088: (1, 256, 14, 14)
    //    2244: (1, 1, 1)
    //    1592: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2088[i],
               14,
               14,
               buffer_1592[i],
               [i]);
}

    //Layer 284 Conv_606 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1592,2092,2093
    //Outputs: 2091
    //Shape:
    //    1592: (1, 256, 14, 14)
    //    2092: (256, 256, 3, 3)
    //    2093: (256,)
    //    2091: (1, 256, 14, 14)

const uint16_t Conv_606_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1592[g*256/1],
                                    14,
                                    14,
                                    buffer_2091[i],
                                    buffer_2092[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_606_padding,
                                    
                                    buffer_2093[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1592[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2092[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_606_padding,
                                        0.0);

            add_channel2d_naive(buffer_2091[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 285 GlobalAveragePool_613 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2091
    //Outputs: 1601
    //Shape:
    //    2091: (1, 256, 14, 14)
    //    1601: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2091[i],
                                   14,
                                   14,
                                   buffer_1601[i]);
}
    //Layer 286 Gemm_618 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1601,layer3.16.se.fc.0.weight,layer3.16.se.fc.0.bias
    //Outputs: 1606
    //Shape:
    //    1601: (1, 256, 1, 1)
    //    layer3.16.se.fc.0.weight: (16, 256)
    //    layer3.16.se.fc.0.bias: (16,)
    //    1606: (1, 16)

fully_connected_naive(buffer_1601, 256,
                      buffer_1606, 16,
                      buffer_layer3_16_se_fc_0_weight, buffer_layer3_16_se_fc_0_bias);

    //Layer 287 PRelu_619 PRelu
    //Attributes
    //Parameters
    //Inputs: 1606,layer3.16.se.fc.1.weight
    //Outputs: 1607
    //Shape:
    //    1606: (1, 16)
    //    layer3.16.se.fc.1.weight: (1,)
    //    1607: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1606[i],
               1,
               1,
               buffer_1607[i],
               [i]);
}

    //Layer 288 Gemm_620 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1607,layer3.16.se.fc.2.weight,layer3.16.se.fc.2.bias
    //Outputs: 1608
    //Shape:
    //    1607: (1, 16)
    //    layer3.16.se.fc.2.weight: (256, 16)
    //    layer3.16.se.fc.2.bias: (256,)
    //    1608: (1, 256)

fully_connected_naive(buffer_1607, 16,
                      buffer_1608, 256,
                      buffer_layer3_16_se_fc_2_weight, buffer_layer3_16_se_fc_2_bias);

    //Layer 289 Sigmoid_621 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1608
    //Outputs: 1609
    //Shape:
    //    1608: (1, 256)
    //    1609: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1608, 1, 256, buffer_1609);

    //Layer 290 Mul_626 Mul
    //Attributes
    //Parameters
    //Inputs: 2091,1609
    //Outputs: 1618
    //Shape:
    //    2091: (1, 256, 14, 14)
    //    1609: (1, 256)
    //    1618: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1618[i][j] = buffer_2091[i][j] * <memory_manager.Buffer object at 0x7fae8f4ad6d8>;

}
    //Layer 291 Add_627 Add
    //Attributes
    //Parameters
    //Inputs: 1618,1587
    //Outputs: 1619
    //Shape:
    //    1618: (1, 256, 14, 14)
    //    1587: (1, 256, 14, 14)
    //    1619: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1619[i],
               buffer_1618[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1619[i], buffer_1587[i], 14, 14);
    }


    //Layer 292 PRelu_628 PRelu
    //Attributes
    //Parameters
    //Inputs: 1619,2247
    //Outputs: 1621
    //Shape:
    //    1619: (1, 256, 14, 14)
    //    2247: (1, 1, 1)
    //    1621: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1619[i],
               14,
               14,
               buffer_1621[i],
               [i]);
}

    //Layer 293 BatchNormalization_629 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1621,layer3.17.bn0.weight,layer3.17.bn0.bias,layer3.17.bn0.running_mean,layer3.17.bn0.running_var
    //Outputs: 1622
    //Shape:
    //    1621: (1, 256, 14, 14)
    //    layer3.17.bn0.weight: (256,)
    //    layer3.17.bn0.bias: (256,)
    //    layer3.17.bn0.running_mean: (256,)
    //    layer3.17.bn0.running_var: (256,)
    //    1622: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1621[i],
                              14,
                              14,
                              buffer_1622[i],
                              buffer_layer3_17_bn0_weight[i],
                              buffer_layer3_17_bn0_bias[i],
                              buffer_layer3_17_bn0_running_mean[i],
                              buffer_layer3_17_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 294 Conv_630 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1622,2095,2096
    //Outputs: 2094
    //Shape:
    //    1622: (1, 256, 14, 14)
    //    2095: (256, 256, 3, 3)
    //    2096: (256,)
    //    2094: (1, 256, 14, 14)

const uint16_t Conv_630_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1622[g*256/1],
                                    14,
                                    14,
                                    buffer_2094[i],
                                    buffer_2095[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_630_padding,
                                    
                                    buffer_2096[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1622[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2095[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_630_padding,
                                        0.0);

            add_channel2d_naive(buffer_2094[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 295 PRelu_631 PRelu
    //Attributes
    //Parameters
    //Inputs: 2094,2248
    //Outputs: 1626
    //Shape:
    //    2094: (1, 256, 14, 14)
    //    2248: (1, 1, 1)
    //    1626: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2094[i],
               14,
               14,
               buffer_1626[i],
               [i]);
}

    //Layer 296 Conv_632 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1626,2098,2099
    //Outputs: 2097
    //Shape:
    //    1626: (1, 256, 14, 14)
    //    2098: (256, 256, 3, 3)
    //    2099: (256,)
    //    2097: (1, 256, 14, 14)

const uint16_t Conv_632_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1626[g*256/1],
                                    14,
                                    14,
                                    buffer_2097[i],
                                    buffer_2098[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_632_padding,
                                    
                                    buffer_2099[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1626[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2098[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_632_padding,
                                        0.0);

            add_channel2d_naive(buffer_2097[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 297 GlobalAveragePool_639 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2097
    //Outputs: 1635
    //Shape:
    //    2097: (1, 256, 14, 14)
    //    1635: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2097[i],
                                   14,
                                   14,
                                   buffer_1635[i]);
}
    //Layer 298 Gemm_644 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1635,layer3.17.se.fc.0.weight,layer3.17.se.fc.0.bias
    //Outputs: 1640
    //Shape:
    //    1635: (1, 256, 1, 1)
    //    layer3.17.se.fc.0.weight: (16, 256)
    //    layer3.17.se.fc.0.bias: (16,)
    //    1640: (1, 16)

fully_connected_naive(buffer_1635, 256,
                      buffer_1640, 16,
                      buffer_layer3_17_se_fc_0_weight, buffer_layer3_17_se_fc_0_bias);

    //Layer 299 PRelu_645 PRelu
    //Attributes
    //Parameters
    //Inputs: 1640,layer3.17.se.fc.1.weight
    //Outputs: 1641
    //Shape:
    //    1640: (1, 16)
    //    layer3.17.se.fc.1.weight: (1,)
    //    1641: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1640[i],
               1,
               1,
               buffer_1641[i],
               [i]);
}

    //Layer 300 Gemm_646 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1641,layer3.17.se.fc.2.weight,layer3.17.se.fc.2.bias
    //Outputs: 1642
    //Shape:
    //    1641: (1, 16)
    //    layer3.17.se.fc.2.weight: (256, 16)
    //    layer3.17.se.fc.2.bias: (256,)
    //    1642: (1, 256)

fully_connected_naive(buffer_1641, 16,
                      buffer_1642, 256,
                      buffer_layer3_17_se_fc_2_weight, buffer_layer3_17_se_fc_2_bias);

    //Layer 301 Sigmoid_647 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1642
    //Outputs: 1643
    //Shape:
    //    1642: (1, 256)
    //    1643: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1642, 1, 256, buffer_1643);

    //Layer 302 Mul_652 Mul
    //Attributes
    //Parameters
    //Inputs: 2097,1643
    //Outputs: 1652
    //Shape:
    //    2097: (1, 256, 14, 14)
    //    1643: (1, 256)
    //    1652: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1652[i][j] = buffer_2097[i][j] * <memory_manager.Buffer object at 0x7fae8acb3278>;

}
    //Layer 303 Add_653 Add
    //Attributes
    //Parameters
    //Inputs: 1652,1621
    //Outputs: 1653
    //Shape:
    //    1652: (1, 256, 14, 14)
    //    1621: (1, 256, 14, 14)
    //    1653: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1653[i],
               buffer_1652[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1653[i], buffer_1621[i], 14, 14);
    }


    //Layer 304 PRelu_654 PRelu
    //Attributes
    //Parameters
    //Inputs: 1653,2251
    //Outputs: 1655
    //Shape:
    //    1653: (1, 256, 14, 14)
    //    2251: (1, 1, 1)
    //    1655: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1653[i],
               14,
               14,
               buffer_1655[i],
               [i]);
}

    //Layer 305 BatchNormalization_655 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1655,layer3.18.bn0.weight,layer3.18.bn0.bias,layer3.18.bn0.running_mean,layer3.18.bn0.running_var
    //Outputs: 1656
    //Shape:
    //    1655: (1, 256, 14, 14)
    //    layer3.18.bn0.weight: (256,)
    //    layer3.18.bn0.bias: (256,)
    //    layer3.18.bn0.running_mean: (256,)
    //    layer3.18.bn0.running_var: (256,)
    //    1656: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1655[i],
                              14,
                              14,
                              buffer_1656[i],
                              buffer_layer3_18_bn0_weight[i],
                              buffer_layer3_18_bn0_bias[i],
                              buffer_layer3_18_bn0_running_mean[i],
                              buffer_layer3_18_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 306 Conv_656 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1656,2101,2102
    //Outputs: 2100
    //Shape:
    //    1656: (1, 256, 14, 14)
    //    2101: (256, 256, 3, 3)
    //    2102: (256,)
    //    2100: (1, 256, 14, 14)

const uint16_t Conv_656_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1656[g*256/1],
                                    14,
                                    14,
                                    buffer_2100[i],
                                    buffer_2101[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_656_padding,
                                    
                                    buffer_2102[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1656[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2101[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_656_padding,
                                        0.0);

            add_channel2d_naive(buffer_2100[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 307 PRelu_657 PRelu
    //Attributes
    //Parameters
    //Inputs: 2100,2252
    //Outputs: 1660
    //Shape:
    //    2100: (1, 256, 14, 14)
    //    2252: (1, 1, 1)
    //    1660: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2100[i],
               14,
               14,
               buffer_1660[i],
               [i]);
}

    //Layer 308 Conv_658 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1660,2104,2105
    //Outputs: 2103
    //Shape:
    //    1660: (1, 256, 14, 14)
    //    2104: (256, 256, 3, 3)
    //    2105: (256,)
    //    2103: (1, 256, 14, 14)

const uint16_t Conv_658_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1660[g*256/1],
                                    14,
                                    14,
                                    buffer_2103[i],
                                    buffer_2104[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_658_padding,
                                    
                                    buffer_2105[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1660[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2104[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_658_padding,
                                        0.0);

            add_channel2d_naive(buffer_2103[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 309 GlobalAveragePool_665 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2103
    //Outputs: 1669
    //Shape:
    //    2103: (1, 256, 14, 14)
    //    1669: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2103[i],
                                   14,
                                   14,
                                   buffer_1669[i]);
}
    //Layer 310 Gemm_670 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1669,layer3.18.se.fc.0.weight,layer3.18.se.fc.0.bias
    //Outputs: 1674
    //Shape:
    //    1669: (1, 256, 1, 1)
    //    layer3.18.se.fc.0.weight: (16, 256)
    //    layer3.18.se.fc.0.bias: (16,)
    //    1674: (1, 16)

fully_connected_naive(buffer_1669, 256,
                      buffer_1674, 16,
                      buffer_layer3_18_se_fc_0_weight, buffer_layer3_18_se_fc_0_bias);

    //Layer 311 PRelu_671 PRelu
    //Attributes
    //Parameters
    //Inputs: 1674,layer3.18.se.fc.1.weight
    //Outputs: 1675
    //Shape:
    //    1674: (1, 16)
    //    layer3.18.se.fc.1.weight: (1,)
    //    1675: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1674[i],
               1,
               1,
               buffer_1675[i],
               [i]);
}

    //Layer 312 Gemm_672 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1675,layer3.18.se.fc.2.weight,layer3.18.se.fc.2.bias
    //Outputs: 1676
    //Shape:
    //    1675: (1, 16)
    //    layer3.18.se.fc.2.weight: (256, 16)
    //    layer3.18.se.fc.2.bias: (256,)
    //    1676: (1, 256)

fully_connected_naive(buffer_1675, 16,
                      buffer_1676, 256,
                      buffer_layer3_18_se_fc_2_weight, buffer_layer3_18_se_fc_2_bias);

    //Layer 313 Sigmoid_673 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1676
    //Outputs: 1677
    //Shape:
    //    1676: (1, 256)
    //    1677: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1676, 1, 256, buffer_1677);

    //Layer 314 Mul_678 Mul
    //Attributes
    //Parameters
    //Inputs: 2103,1677
    //Outputs: 1686
    //Shape:
    //    2103: (1, 256, 14, 14)
    //    1677: (1, 256)
    //    1686: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1686[i][j] = buffer_2103[i][j] * <memory_manager.Buffer object at 0x7fae8acb3240>;

}
    //Layer 315 Add_679 Add
    //Attributes
    //Parameters
    //Inputs: 1686,1655
    //Outputs: 1687
    //Shape:
    //    1686: (1, 256, 14, 14)
    //    1655: (1, 256, 14, 14)
    //    1687: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1687[i],
               buffer_1686[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1687[i], buffer_1655[i], 14, 14);
    }


    //Layer 316 PRelu_680 PRelu
    //Attributes
    //Parameters
    //Inputs: 1687,2255
    //Outputs: 1689
    //Shape:
    //    1687: (1, 256, 14, 14)
    //    2255: (1, 1, 1)
    //    1689: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1687[i],
               14,
               14,
               buffer_1689[i],
               [i]);
}

    //Layer 317 BatchNormalization_681 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1689,layer3.19.bn0.weight,layer3.19.bn0.bias,layer3.19.bn0.running_mean,layer3.19.bn0.running_var
    //Outputs: 1690
    //Shape:
    //    1689: (1, 256, 14, 14)
    //    layer3.19.bn0.weight: (256,)
    //    layer3.19.bn0.bias: (256,)
    //    layer3.19.bn0.running_mean: (256,)
    //    layer3.19.bn0.running_var: (256,)
    //    1690: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1689[i],
                              14,
                              14,
                              buffer_1690[i],
                              buffer_layer3_19_bn0_weight[i],
                              buffer_layer3_19_bn0_bias[i],
                              buffer_layer3_19_bn0_running_mean[i],
                              buffer_layer3_19_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 318 Conv_682 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1690,2107,2108
    //Outputs: 2106
    //Shape:
    //    1690: (1, 256, 14, 14)
    //    2107: (256, 256, 3, 3)
    //    2108: (256,)
    //    2106: (1, 256, 14, 14)

const uint16_t Conv_682_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1690[g*256/1],
                                    14,
                                    14,
                                    buffer_2106[i],
                                    buffer_2107[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_682_padding,
                                    
                                    buffer_2108[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1690[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2107[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_682_padding,
                                        0.0);

            add_channel2d_naive(buffer_2106[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 319 PRelu_683 PRelu
    //Attributes
    //Parameters
    //Inputs: 2106,2256
    //Outputs: 1694
    //Shape:
    //    2106: (1, 256, 14, 14)
    //    2256: (1, 1, 1)
    //    1694: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2106[i],
               14,
               14,
               buffer_1694[i],
               [i]);
}

    //Layer 320 Conv_684 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1694,2110,2111
    //Outputs: 2109
    //Shape:
    //    1694: (1, 256, 14, 14)
    //    2110: (256, 256, 3, 3)
    //    2111: (256,)
    //    2109: (1, 256, 14, 14)

const uint16_t Conv_684_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1694[g*256/1],
                                    14,
                                    14,
                                    buffer_2109[i],
                                    buffer_2110[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_684_padding,
                                    
                                    buffer_2111[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1694[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2110[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_684_padding,
                                        0.0);

            add_channel2d_naive(buffer_2109[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 321 GlobalAveragePool_691 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2109
    //Outputs: 1703
    //Shape:
    //    2109: (1, 256, 14, 14)
    //    1703: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2109[i],
                                   14,
                                   14,
                                   buffer_1703[i]);
}
    //Layer 322 Gemm_696 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1703,layer3.19.se.fc.0.weight,layer3.19.se.fc.0.bias
    //Outputs: 1708
    //Shape:
    //    1703: (1, 256, 1, 1)
    //    layer3.19.se.fc.0.weight: (16, 256)
    //    layer3.19.se.fc.0.bias: (16,)
    //    1708: (1, 16)

fully_connected_naive(buffer_1703, 256,
                      buffer_1708, 16,
                      buffer_layer3_19_se_fc_0_weight, buffer_layer3_19_se_fc_0_bias);

    //Layer 323 PRelu_697 PRelu
    //Attributes
    //Parameters
    //Inputs: 1708,layer3.19.se.fc.1.weight
    //Outputs: 1709
    //Shape:
    //    1708: (1, 16)
    //    layer3.19.se.fc.1.weight: (1,)
    //    1709: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1708[i],
               1,
               1,
               buffer_1709[i],
               [i]);
}

    //Layer 324 Gemm_698 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1709,layer3.19.se.fc.2.weight,layer3.19.se.fc.2.bias
    //Outputs: 1710
    //Shape:
    //    1709: (1, 16)
    //    layer3.19.se.fc.2.weight: (256, 16)
    //    layer3.19.se.fc.2.bias: (256,)
    //    1710: (1, 256)

fully_connected_naive(buffer_1709, 16,
                      buffer_1710, 256,
                      buffer_layer3_19_se_fc_2_weight, buffer_layer3_19_se_fc_2_bias);

    //Layer 325 Sigmoid_699 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1710
    //Outputs: 1711
    //Shape:
    //    1710: (1, 256)
    //    1711: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1710, 1, 256, buffer_1711);

    //Layer 326 Mul_704 Mul
    //Attributes
    //Parameters
    //Inputs: 2109,1711
    //Outputs: 1720
    //Shape:
    //    2109: (1, 256, 14, 14)
    //    1711: (1, 256)
    //    1720: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1720[i][j] = buffer_2109[i][j] * <memory_manager.Buffer object at 0x7fae95c11860>;

}
    //Layer 327 Add_705 Add
    //Attributes
    //Parameters
    //Inputs: 1720,1689
    //Outputs: 1721
    //Shape:
    //    1720: (1, 256, 14, 14)
    //    1689: (1, 256, 14, 14)
    //    1721: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1721[i],
               buffer_1720[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1721[i], buffer_1689[i], 14, 14);
    }


    //Layer 328 PRelu_706 PRelu
    //Attributes
    //Parameters
    //Inputs: 1721,2259
    //Outputs: 1723
    //Shape:
    //    1721: (1, 256, 14, 14)
    //    2259: (1, 1, 1)
    //    1723: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1721[i],
               14,
               14,
               buffer_1723[i],
               [i]);
}

    //Layer 329 BatchNormalization_707 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1723,layer3.20.bn0.weight,layer3.20.bn0.bias,layer3.20.bn0.running_mean,layer3.20.bn0.running_var
    //Outputs: 1724
    //Shape:
    //    1723: (1, 256, 14, 14)
    //    layer3.20.bn0.weight: (256,)
    //    layer3.20.bn0.bias: (256,)
    //    layer3.20.bn0.running_mean: (256,)
    //    layer3.20.bn0.running_var: (256,)
    //    1724: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1723[i],
                              14,
                              14,
                              buffer_1724[i],
                              buffer_layer3_20_bn0_weight[i],
                              buffer_layer3_20_bn0_bias[i],
                              buffer_layer3_20_bn0_running_mean[i],
                              buffer_layer3_20_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 330 Conv_708 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1724,2113,2114
    //Outputs: 2112
    //Shape:
    //    1724: (1, 256, 14, 14)
    //    2113: (256, 256, 3, 3)
    //    2114: (256,)
    //    2112: (1, 256, 14, 14)

const uint16_t Conv_708_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1724[g*256/1],
                                    14,
                                    14,
                                    buffer_2112[i],
                                    buffer_2113[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_708_padding,
                                    
                                    buffer_2114[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1724[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2113[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_708_padding,
                                        0.0);

            add_channel2d_naive(buffer_2112[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 331 PRelu_709 PRelu
    //Attributes
    //Parameters
    //Inputs: 2112,2260
    //Outputs: 1728
    //Shape:
    //    2112: (1, 256, 14, 14)
    //    2260: (1, 1, 1)
    //    1728: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2112[i],
               14,
               14,
               buffer_1728[i],
               [i]);
}

    //Layer 332 Conv_710 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1728,2116,2117
    //Outputs: 2115
    //Shape:
    //    1728: (1, 256, 14, 14)
    //    2116: (256, 256, 3, 3)
    //    2117: (256,)
    //    2115: (1, 256, 14, 14)

const uint16_t Conv_710_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1728[g*256/1],
                                    14,
                                    14,
                                    buffer_2115[i],
                                    buffer_2116[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_710_padding,
                                    
                                    buffer_2117[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1728[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2116[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_710_padding,
                                        0.0);

            add_channel2d_naive(buffer_2115[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 333 GlobalAveragePool_717 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2115
    //Outputs: 1737
    //Shape:
    //    2115: (1, 256, 14, 14)
    //    1737: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2115[i],
                                   14,
                                   14,
                                   buffer_1737[i]);
}
    //Layer 334 Gemm_722 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1737,layer3.20.se.fc.0.weight,layer3.20.se.fc.0.bias
    //Outputs: 1742
    //Shape:
    //    1737: (1, 256, 1, 1)
    //    layer3.20.se.fc.0.weight: (16, 256)
    //    layer3.20.se.fc.0.bias: (16,)
    //    1742: (1, 16)

fully_connected_naive(buffer_1737, 256,
                      buffer_1742, 16,
                      buffer_layer3_20_se_fc_0_weight, buffer_layer3_20_se_fc_0_bias);

    //Layer 335 PRelu_723 PRelu
    //Attributes
    //Parameters
    //Inputs: 1742,layer3.20.se.fc.1.weight
    //Outputs: 1743
    //Shape:
    //    1742: (1, 16)
    //    layer3.20.se.fc.1.weight: (1,)
    //    1743: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1742[i],
               1,
               1,
               buffer_1743[i],
               [i]);
}

    //Layer 336 Gemm_724 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1743,layer3.20.se.fc.2.weight,layer3.20.se.fc.2.bias
    //Outputs: 1744
    //Shape:
    //    1743: (1, 16)
    //    layer3.20.se.fc.2.weight: (256, 16)
    //    layer3.20.se.fc.2.bias: (256,)
    //    1744: (1, 256)

fully_connected_naive(buffer_1743, 16,
                      buffer_1744, 256,
                      buffer_layer3_20_se_fc_2_weight, buffer_layer3_20_se_fc_2_bias);

    //Layer 337 Sigmoid_725 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1744
    //Outputs: 1745
    //Shape:
    //    1744: (1, 256)
    //    1745: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1744, 1, 256, buffer_1745);

    //Layer 338 Mul_730 Mul
    //Attributes
    //Parameters
    //Inputs: 2115,1745
    //Outputs: 1754
    //Shape:
    //    2115: (1, 256, 14, 14)
    //    1745: (1, 256)
    //    1754: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1754[i][j] = buffer_2115[i][j] * <memory_manager.Buffer object at 0x7fae8f41ed68>;

}
    //Layer 339 Add_731 Add
    //Attributes
    //Parameters
    //Inputs: 1754,1723
    //Outputs: 1755
    //Shape:
    //    1754: (1, 256, 14, 14)
    //    1723: (1, 256, 14, 14)
    //    1755: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1755[i],
               buffer_1754[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1755[i], buffer_1723[i], 14, 14);
    }


    //Layer 340 PRelu_732 PRelu
    //Attributes
    //Parameters
    //Inputs: 1755,2263
    //Outputs: 1757
    //Shape:
    //    1755: (1, 256, 14, 14)
    //    2263: (1, 1, 1)
    //    1757: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1755[i],
               14,
               14,
               buffer_1757[i],
               [i]);
}

    //Layer 341 BatchNormalization_733 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1757,layer3.21.bn0.weight,layer3.21.bn0.bias,layer3.21.bn0.running_mean,layer3.21.bn0.running_var
    //Outputs: 1758
    //Shape:
    //    1757: (1, 256, 14, 14)
    //    layer3.21.bn0.weight: (256,)
    //    layer3.21.bn0.bias: (256,)
    //    layer3.21.bn0.running_mean: (256,)
    //    layer3.21.bn0.running_var: (256,)
    //    1758: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1757[i],
                              14,
                              14,
                              buffer_1758[i],
                              buffer_layer3_21_bn0_weight[i],
                              buffer_layer3_21_bn0_bias[i],
                              buffer_layer3_21_bn0_running_mean[i],
                              buffer_layer3_21_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 342 Conv_734 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1758,2119,2120
    //Outputs: 2118
    //Shape:
    //    1758: (1, 256, 14, 14)
    //    2119: (256, 256, 3, 3)
    //    2120: (256,)
    //    2118: (1, 256, 14, 14)

const uint16_t Conv_734_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1758[g*256/1],
                                    14,
                                    14,
                                    buffer_2118[i],
                                    buffer_2119[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_734_padding,
                                    
                                    buffer_2120[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1758[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2119[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_734_padding,
                                        0.0);

            add_channel2d_naive(buffer_2118[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 343 PRelu_735 PRelu
    //Attributes
    //Parameters
    //Inputs: 2118,2264
    //Outputs: 1762
    //Shape:
    //    2118: (1, 256, 14, 14)
    //    2264: (1, 1, 1)
    //    1762: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2118[i],
               14,
               14,
               buffer_1762[i],
               [i]);
}

    //Layer 344 Conv_736 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1762,2122,2123
    //Outputs: 2121
    //Shape:
    //    1762: (1, 256, 14, 14)
    //    2122: (256, 256, 3, 3)
    //    2123: (256,)
    //    2121: (1, 256, 14, 14)

const uint16_t Conv_736_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1762[g*256/1],
                                    14,
                                    14,
                                    buffer_2121[i],
                                    buffer_2122[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_736_padding,
                                    
                                    buffer_2123[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1762[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2122[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_736_padding,
                                        0.0);

            add_channel2d_naive(buffer_2121[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 345 GlobalAveragePool_743 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2121
    //Outputs: 1771
    //Shape:
    //    2121: (1, 256, 14, 14)
    //    1771: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2121[i],
                                   14,
                                   14,
                                   buffer_1771[i]);
}
    //Layer 346 Gemm_748 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1771,layer3.21.se.fc.0.weight,layer3.21.se.fc.0.bias
    //Outputs: 1776
    //Shape:
    //    1771: (1, 256, 1, 1)
    //    layer3.21.se.fc.0.weight: (16, 256)
    //    layer3.21.se.fc.0.bias: (16,)
    //    1776: (1, 16)

fully_connected_naive(buffer_1771, 256,
                      buffer_1776, 16,
                      buffer_layer3_21_se_fc_0_weight, buffer_layer3_21_se_fc_0_bias);

    //Layer 347 PRelu_749 PRelu
    //Attributes
    //Parameters
    //Inputs: 1776,layer3.21.se.fc.1.weight
    //Outputs: 1777
    //Shape:
    //    1776: (1, 16)
    //    layer3.21.se.fc.1.weight: (1,)
    //    1777: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1776[i],
               1,
               1,
               buffer_1777[i],
               [i]);
}

    //Layer 348 Gemm_750 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1777,layer3.21.se.fc.2.weight,layer3.21.se.fc.2.bias
    //Outputs: 1778
    //Shape:
    //    1777: (1, 16)
    //    layer3.21.se.fc.2.weight: (256, 16)
    //    layer3.21.se.fc.2.bias: (256,)
    //    1778: (1, 256)

fully_connected_naive(buffer_1777, 16,
                      buffer_1778, 256,
                      buffer_layer3_21_se_fc_2_weight, buffer_layer3_21_se_fc_2_bias);

    //Layer 349 Sigmoid_751 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1778
    //Outputs: 1779
    //Shape:
    //    1778: (1, 256)
    //    1779: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1778, 1, 256, buffer_1779);

    //Layer 350 Mul_756 Mul
    //Attributes
    //Parameters
    //Inputs: 2121,1779
    //Outputs: 1788
    //Shape:
    //    2121: (1, 256, 14, 14)
    //    1779: (1, 256)
    //    1788: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1788[i][j] = buffer_2121[i][j] * <memory_manager.Buffer object at 0x7fae8f47c550>;

}
    //Layer 351 Add_757 Add
    //Attributes
    //Parameters
    //Inputs: 1788,1757
    //Outputs: 1789
    //Shape:
    //    1788: (1, 256, 14, 14)
    //    1757: (1, 256, 14, 14)
    //    1789: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1789[i],
               buffer_1788[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1789[i], buffer_1757[i], 14, 14);
    }


    //Layer 352 PRelu_758 PRelu
    //Attributes
    //Parameters
    //Inputs: 1789,2267
    //Outputs: 1791
    //Shape:
    //    1789: (1, 256, 14, 14)
    //    2267: (1, 1, 1)
    //    1791: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1789[i],
               14,
               14,
               buffer_1791[i],
               [i]);
}

    //Layer 353 BatchNormalization_759 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1791,layer3.22.bn0.weight,layer3.22.bn0.bias,layer3.22.bn0.running_mean,layer3.22.bn0.running_var
    //Outputs: 1792
    //Shape:
    //    1791: (1, 256, 14, 14)
    //    layer3.22.bn0.weight: (256,)
    //    layer3.22.bn0.bias: (256,)
    //    layer3.22.bn0.running_mean: (256,)
    //    layer3.22.bn0.running_var: (256,)
    //    1792: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1791[i],
                              14,
                              14,
                              buffer_1792[i],
                              buffer_layer3_22_bn0_weight[i],
                              buffer_layer3_22_bn0_bias[i],
                              buffer_layer3_22_bn0_running_mean[i],
                              buffer_layer3_22_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 354 Conv_760 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1792,2125,2126
    //Outputs: 2124
    //Shape:
    //    1792: (1, 256, 14, 14)
    //    2125: (256, 256, 3, 3)
    //    2126: (256,)
    //    2124: (1, 256, 14, 14)

const uint16_t Conv_760_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1792[g*256/1],
                                    14,
                                    14,
                                    buffer_2124[i],
                                    buffer_2125[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_760_padding,
                                    
                                    buffer_2126[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1792[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2125[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_760_padding,
                                        0.0);

            add_channel2d_naive(buffer_2124[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 355 PRelu_761 PRelu
    //Attributes
    //Parameters
    //Inputs: 2124,2268
    //Outputs: 1796
    //Shape:
    //    2124: (1, 256, 14, 14)
    //    2268: (1, 1, 1)
    //    1796: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2124[i],
               14,
               14,
               buffer_1796[i],
               [i]);
}

    //Layer 356 Conv_762 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1796,2128,2129
    //Outputs: 2127
    //Shape:
    //    1796: (1, 256, 14, 14)
    //    2128: (256, 256, 3, 3)
    //    2129: (256,)
    //    2127: (1, 256, 14, 14)

const uint16_t Conv_762_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1796[g*256/1],
                                    14,
                                    14,
                                    buffer_2127[i],
                                    buffer_2128[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_762_padding,
                                    
                                    buffer_2129[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1796[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2128[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_762_padding,
                                        0.0);

            add_channel2d_naive(buffer_2127[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 357 GlobalAveragePool_769 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2127
    //Outputs: 1805
    //Shape:
    //    2127: (1, 256, 14, 14)
    //    1805: (1, 256, 1, 1)
for (uint32_t i = 0; i < 256; i++) {
    global_average_pooling2d_naive(buffer_2127[i],
                                   14,
                                   14,
                                   buffer_1805[i]);
}
    //Layer 358 Gemm_774 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1805,layer3.22.se.fc.0.weight,layer3.22.se.fc.0.bias
    //Outputs: 1810
    //Shape:
    //    1805: (1, 256, 1, 1)
    //    layer3.22.se.fc.0.weight: (16, 256)
    //    layer3.22.se.fc.0.bias: (16,)
    //    1810: (1, 16)

fully_connected_naive(buffer_1805, 256,
                      buffer_1810, 16,
                      buffer_layer3_22_se_fc_0_weight, buffer_layer3_22_se_fc_0_bias);

    //Layer 359 PRelu_775 PRelu
    //Attributes
    //Parameters
    //Inputs: 1810,layer3.22.se.fc.1.weight
    //Outputs: 1811
    //Shape:
    //    1810: (1, 16)
    //    layer3.22.se.fc.1.weight: (1,)
    //    1811: (1, 16)

for (uint32_t i = 0; i < 16; i++) {
    prelu(buffer_1810[i],
               1,
               1,
               buffer_1811[i],
               [i]);
}

    //Layer 360 Gemm_776 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1811,layer3.22.se.fc.2.weight,layer3.22.se.fc.2.bias
    //Outputs: 1812
    //Shape:
    //    1811: (1, 16)
    //    layer3.22.se.fc.2.weight: (256, 16)
    //    layer3.22.se.fc.2.bias: (256,)
    //    1812: (1, 256)

fully_connected_naive(buffer_1811, 16,
                      buffer_1812, 256,
                      buffer_layer3_22_se_fc_2_weight, buffer_layer3_22_se_fc_2_bias);

    //Layer 361 Sigmoid_777 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1812
    //Outputs: 1813
    //Shape:
    //    1812: (1, 256)
    //    1813: (1, 256)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1812, 1, 256, buffer_1813);

    //Layer 362 Mul_782 Mul
    //Attributes
    //Parameters
    //Inputs: 2127,1813
    //Outputs: 1822
    //Shape:
    //    2127: (1, 256, 14, 14)
    //    1813: (1, 256)
    //    1822: (1, 256, 14, 14)
{
for(uint32_t i = 0; i < 256; i++)
    for(uint32_t j = 0; j < 14*14; j++)
        buffer_1822[i][j] = buffer_2127[i][j] * <memory_manager.Buffer object at 0x7fae97c371d0>;

}
    //Layer 363 Add_783 Add
    //Attributes
    //Parameters
    //Inputs: 1822,1791
    //Outputs: 1823
    //Shape:
    //    1822: (1, 256, 14, 14)
    //    1791: (1, 256, 14, 14)
    //    1823: (1, 256, 14, 14)

    for(uint32_t i = 0; i < 256; i++){
        memcpy(buffer_1823[i],
               buffer_1822[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 256; i++){
        add_channel2d_naive(buffer_1823[i], buffer_1791[i], 14, 14);
    }


    //Layer 364 PRelu_784 PRelu
    //Attributes
    //Parameters
    //Inputs: 1823,2271
    //Outputs: 1825
    //Shape:
    //    1823: (1, 256, 14, 14)
    //    2271: (1, 1, 1)
    //    1825: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_1823[i],
               14,
               14,
               buffer_1825[i],
               [i]);
}

    //Layer 365 BatchNormalization_785 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1825,layer4.0.bn0.weight,layer4.0.bn0.bias,layer4.0.bn0.running_mean,layer4.0.bn0.running_var
    //Outputs: 1826
    //Shape:
    //    1825: (1, 256, 14, 14)
    //    layer4.0.bn0.weight: (256,)
    //    layer4.0.bn0.bias: (256,)
    //    layer4.0.bn0.running_mean: (256,)
    //    layer4.0.bn0.running_var: (256,)
    //    1826: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_1825[i],
                              14,
                              14,
                              buffer_1826[i],
                              buffer_layer4_0_bn0_weight[i],
                              buffer_layer4_0_bn0_bias[i],
                              buffer_layer4_0_bn0_running_mean[i],
                              buffer_layer4_0_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 366 Conv_786 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1826,2131,2132
    //Outputs: 2130
    //Shape:
    //    1826: (1, 256, 14, 14)
    //    2131: (256, 256, 3, 3)
    //    2132: (256,)
    //    2130: (1, 256, 14, 14)

const uint16_t Conv_786_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_padding_naive(buffer_1826[g*256/1],
                                    14,
                                    14,
                                    buffer_2130[i],
                                    buffer_2131[i*256/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_786_padding,
                                    
                                    buffer_2132[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_padding_naive(buffer_1826[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2131[i*256/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_786_padding,
                                        0.0);

            add_channel2d_naive(buffer_2130[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 367 PRelu_787 PRelu
    //Attributes
    //Parameters
    //Inputs: 2130,2272
    //Outputs: 1830
    //Shape:
    //    2130: (1, 256, 14, 14)
    //    2272: (1, 1, 1)
    //    1830: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_2130[i],
               14,
               14,
               buffer_1830[i],
               [i]);
}

    //Layer 368 Conv_788 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 1830,2134,2135
    //Outputs: 2133
    //Shape:
    //    1830: (1, 256, 14, 14)
    //    2134: (512, 256, 3, 3)
    //    2135: (512,)
    //    2133: (1, 512, 7, 7)

const uint16_t Conv_788_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_padding_naive(buffer_1830[g*256/1],
                                    14,
                                    14,
                                    buffer_2133[i],
                                    buffer_2134[i*256/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_788_padding,
                                    
                                    buffer_2135[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_padding_naive(buffer_1830[j],
                                        14,
                                        14,
                                        temp_buffer,
                                        buffer_2134[i*256/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_788_padding,
                                        0.0);

            add_channel2d_naive(buffer_2133[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 369 GlobalAveragePool_795 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2133
    //Outputs: 1839
    //Shape:
    //    2133: (1, 512, 7, 7)
    //    1839: (1, 512, 1, 1)
for (uint32_t i = 0; i < 512; i++) {
    global_average_pooling2d_naive(buffer_2133[i],
                                   7,
                                   7,
                                   buffer_1839[i]);
}
    //Layer 370 Gemm_800 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1839,layer4.0.se.fc.0.weight,layer4.0.se.fc.0.bias
    //Outputs: 1844
    //Shape:
    //    1839: (1, 512, 1, 1)
    //    layer4.0.se.fc.0.weight: (32, 512)
    //    layer4.0.se.fc.0.bias: (32,)
    //    1844: (1, 32)

fully_connected_naive(buffer_1839, 512,
                      buffer_1844, 32,
                      buffer_layer4_0_se_fc_0_weight, buffer_layer4_0_se_fc_0_bias);

    //Layer 371 PRelu_801 PRelu
    //Attributes
    //Parameters
    //Inputs: 1844,layer4.0.se.fc.1.weight
    //Outputs: 1845
    //Shape:
    //    1844: (1, 32)
    //    layer4.0.se.fc.1.weight: (1,)
    //    1845: (1, 32)

for (uint32_t i = 0; i < 32; i++) {
    prelu(buffer_1844[i],
               1,
               1,
               buffer_1845[i],
               [i]);
}

    //Layer 372 Gemm_802 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1845,layer4.0.se.fc.2.weight,layer4.0.se.fc.2.bias
    //Outputs: 1846
    //Shape:
    //    1845: (1, 32)
    //    layer4.0.se.fc.2.weight: (512, 32)
    //    layer4.0.se.fc.2.bias: (512,)
    //    1846: (1, 512)

fully_connected_naive(buffer_1845, 32,
                      buffer_1846, 512,
                      buffer_layer4_0_se_fc_2_weight, buffer_layer4_0_se_fc_2_bias);

    //Layer 373 Sigmoid_803 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1846
    //Outputs: 1847
    //Shape:
    //    1846: (1, 512)
    //    1847: (1, 512)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1846, 1, 512, buffer_1847);

    //Layer 374 Mul_808 Mul
    //Attributes
    //Parameters
    //Inputs: 2133,1847
    //Outputs: 1856
    //Shape:
    //    2133: (1, 512, 7, 7)
    //    1847: (1, 512)
    //    1856: (1, 512, 7, 7)
{
for(uint32_t i = 0; i < 512; i++)
    for(uint32_t j = 0; j < 7*7; j++)
        buffer_1856[i][j] = buffer_2133[i][j] * <memory_manager.Buffer object at 0x7fae8f3c9518>;

}
    //Layer 375 Conv_809 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 1825,2137,2138
    //Outputs: 2136
    //Shape:
    //    1825: (1, 256, 14, 14)
    //    2137: (512, 256, 1, 1)
    //    2138: (512,)
    //    2136: (1, 512, 7, 7)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_naive(buffer_1825[g*256/1],
                            14,
                            14,
                            buffer_2136[i],
                            buffer_2137[i*256/1],
                            1,
                            1,
                            2,
                            2,
                            
                            buffer_2138[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_naive(buffer_1825[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_2137[i*256/1+cnt],
                                1,
                                1,
                                2,
                                2,
                                0.0);

            add_channel2d_naive(buffer_2136[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 376 Add_810 Add
    //Attributes
    //Parameters
    //Inputs: 1856,2136
    //Outputs: 1859
    //Shape:
    //    1856: (1, 512, 7, 7)
    //    2136: (1, 512, 7, 7)
    //    1859: (1, 512, 7, 7)

    for(uint32_t i = 0; i < 512; i++){
        memcpy(buffer_1859[i],
               buffer_1856[i],
               7*7*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 512; i++){
        add_channel2d_naive(buffer_1859[i], buffer_2136[i], 7, 7);
    }


    //Layer 377 PRelu_811 PRelu
    //Attributes
    //Parameters
    //Inputs: 1859,2275
    //Outputs: 1861
    //Shape:
    //    1859: (1, 512, 7, 7)
    //    2275: (1, 1, 1)
    //    1861: (1, 512, 7, 7)

for (uint32_t i = 0; i < 512; i++) {
    prelu(buffer_1859[i],
               7,
               7,
               buffer_1861[i],
               [i]);
}

    //Layer 378 BatchNormalization_812 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1861,layer4.1.bn0.weight,layer4.1.bn0.bias,layer4.1.bn0.running_mean,layer4.1.bn0.running_var
    //Outputs: 1862
    //Shape:
    //    1861: (1, 512, 7, 7)
    //    layer4.1.bn0.weight: (512,)
    //    layer4.1.bn0.bias: (512,)
    //    layer4.1.bn0.running_mean: (512,)
    //    layer4.1.bn0.running_var: (512,)
    //    1862: (1, 512, 7, 7)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive(buffer_1861[i],
                              7,
                              7,
                              buffer_1862[i],
                              buffer_layer4_1_bn0_weight[i],
                              buffer_layer4_1_bn0_bias[i],
                              buffer_layer4_1_bn0_running_mean[i],
                              buffer_layer4_1_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 379 Conv_813 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1862,2140,2141
    //Outputs: 2139
    //Shape:
    //    1862: (1, 512, 7, 7)
    //    2140: (512, 512, 3, 3)
    //    2141: (512,)
    //    2139: (1, 512, 7, 7)

const uint16_t Conv_813_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_padding_naive(buffer_1862[g*512/1],
                                    7,
                                    7,
                                    buffer_2139[i],
                                    buffer_2140[i*512/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_813_padding,
                                    
                                    buffer_2141[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*512/1+1; j < (g+1)*512/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_padding_naive(buffer_1862[j],
                                        7,
                                        7,
                                        temp_buffer,
                                        buffer_2140[i*512/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_813_padding,
                                        0.0);

            add_channel2d_naive(buffer_2139[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 380 PRelu_814 PRelu
    //Attributes
    //Parameters
    //Inputs: 2139,2276
    //Outputs: 1866
    //Shape:
    //    2139: (1, 512, 7, 7)
    //    2276: (1, 1, 1)
    //    1866: (1, 512, 7, 7)

for (uint32_t i = 0; i < 512; i++) {
    prelu(buffer_2139[i],
               7,
               7,
               buffer_1866[i],
               [i]);
}

    //Layer 381 Conv_815 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1866,2143,2144
    //Outputs: 2142
    //Shape:
    //    1866: (1, 512, 7, 7)
    //    2143: (512, 512, 3, 3)
    //    2144: (512,)
    //    2142: (1, 512, 7, 7)

const uint16_t Conv_815_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_padding_naive(buffer_1866[g*512/1],
                                    7,
                                    7,
                                    buffer_2142[i],
                                    buffer_2143[i*512/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_815_padding,
                                    
                                    buffer_2144[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*512/1+1; j < (g+1)*512/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_padding_naive(buffer_1866[j],
                                        7,
                                        7,
                                        temp_buffer,
                                        buffer_2143[i*512/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_815_padding,
                                        0.0);

            add_channel2d_naive(buffer_2142[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 382 GlobalAveragePool_822 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2142
    //Outputs: 1875
    //Shape:
    //    2142: (1, 512, 7, 7)
    //    1875: (1, 512, 1, 1)
for (uint32_t i = 0; i < 512; i++) {
    global_average_pooling2d_naive(buffer_2142[i],
                                   7,
                                   7,
                                   buffer_1875[i]);
}
    //Layer 383 Gemm_827 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1875,layer4.1.se.fc.0.weight,layer4.1.se.fc.0.bias
    //Outputs: 1880
    //Shape:
    //    1875: (1, 512, 1, 1)
    //    layer4.1.se.fc.0.weight: (32, 512)
    //    layer4.1.se.fc.0.bias: (32,)
    //    1880: (1, 32)

fully_connected_naive(buffer_1875, 512,
                      buffer_1880, 32,
                      buffer_layer4_1_se_fc_0_weight, buffer_layer4_1_se_fc_0_bias);

    //Layer 384 PRelu_828 PRelu
    //Attributes
    //Parameters
    //Inputs: 1880,layer4.1.se.fc.1.weight
    //Outputs: 1881
    //Shape:
    //    1880: (1, 32)
    //    layer4.1.se.fc.1.weight: (1,)
    //    1881: (1, 32)

for (uint32_t i = 0; i < 32; i++) {
    prelu(buffer_1880[i],
               1,
               1,
               buffer_1881[i],
               [i]);
}

    //Layer 385 Gemm_829 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1881,layer4.1.se.fc.2.weight,layer4.1.se.fc.2.bias
    //Outputs: 1882
    //Shape:
    //    1881: (1, 32)
    //    layer4.1.se.fc.2.weight: (512, 32)
    //    layer4.1.se.fc.2.bias: (512,)
    //    1882: (1, 512)

fully_connected_naive(buffer_1881, 32,
                      buffer_1882, 512,
                      buffer_layer4_1_se_fc_2_weight, buffer_layer4_1_se_fc_2_bias);

    //Layer 386 Sigmoid_830 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1882
    //Outputs: 1883
    //Shape:
    //    1882: (1, 512)
    //    1883: (1, 512)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1882, 1, 512, buffer_1883);

    //Layer 387 Mul_835 Mul
    //Attributes
    //Parameters
    //Inputs: 2142,1883
    //Outputs: 1892
    //Shape:
    //    2142: (1, 512, 7, 7)
    //    1883: (1, 512)
    //    1892: (1, 512, 7, 7)
{
for(uint32_t i = 0; i < 512; i++)
    for(uint32_t j = 0; j < 7*7; j++)
        buffer_1892[i][j] = buffer_2142[i][j] * <memory_manager.Buffer object at 0x7fae8f494f28>;

}
    //Layer 388 Add_836 Add
    //Attributes
    //Parameters
    //Inputs: 1892,1861
    //Outputs: 1893
    //Shape:
    //    1892: (1, 512, 7, 7)
    //    1861: (1, 512, 7, 7)
    //    1893: (1, 512, 7, 7)

    for(uint32_t i = 0; i < 512; i++){
        memcpy(buffer_1893[i],
               buffer_1892[i],
               7*7*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 512; i++){
        add_channel2d_naive(buffer_1893[i], buffer_1861[i], 7, 7);
    }


    //Layer 389 PRelu_837 PRelu
    //Attributes
    //Parameters
    //Inputs: 1893,2279
    //Outputs: 1895
    //Shape:
    //    1893: (1, 512, 7, 7)
    //    2279: (1, 1, 1)
    //    1895: (1, 512, 7, 7)

for (uint32_t i = 0; i < 512; i++) {
    prelu(buffer_1893[i],
               7,
               7,
               buffer_1895[i],
               [i]);
}

    //Layer 390 BatchNormalization_838 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1895,layer4.2.bn0.weight,layer4.2.bn0.bias,layer4.2.bn0.running_mean,layer4.2.bn0.running_var
    //Outputs: 1896
    //Shape:
    //    1895: (1, 512, 7, 7)
    //    layer4.2.bn0.weight: (512,)
    //    layer4.2.bn0.bias: (512,)
    //    layer4.2.bn0.running_mean: (512,)
    //    layer4.2.bn0.running_var: (512,)
    //    1896: (1, 512, 7, 7)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive(buffer_1895[i],
                              7,
                              7,
                              buffer_1896[i],
                              buffer_layer4_2_bn0_weight[i],
                              buffer_layer4_2_bn0_bias[i],
                              buffer_layer4_2_bn0_running_mean[i],
                              buffer_layer4_2_bn0_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 391 Conv_839 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1896,2146,2147
    //Outputs: 2145
    //Shape:
    //    1896: (1, 512, 7, 7)
    //    2146: (512, 512, 3, 3)
    //    2147: (512,)
    //    2145: (1, 512, 7, 7)

const uint16_t Conv_839_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_padding_naive(buffer_1896[g*512/1],
                                    7,
                                    7,
                                    buffer_2145[i],
                                    buffer_2146[i*512/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_839_padding,
                                    
                                    buffer_2147[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*512/1+1; j < (g+1)*512/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_padding_naive(buffer_1896[j],
                                        7,
                                        7,
                                        temp_buffer,
                                        buffer_2146[i*512/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_839_padding,
                                        0.0);

            add_channel2d_naive(buffer_2145[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 392 PRelu_840 PRelu
    //Attributes
    //Parameters
    //Inputs: 2145,2280
    //Outputs: 1900
    //Shape:
    //    2145: (1, 512, 7, 7)
    //    2280: (1, 1, 1)
    //    1900: (1, 512, 7, 7)

for (uint32_t i = 0; i < 512; i++) {
    prelu(buffer_2145[i],
               7,
               7,
               buffer_1900[i],
               [i]);
}

    //Layer 393 Conv_841 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 1900,2149,2150
    //Outputs: 2148
    //Shape:
    //    1900: (1, 512, 7, 7)
    //    2149: (512, 512, 3, 3)
    //    2150: (512,)
    //    2148: (1, 512, 7, 7)

const uint16_t Conv_841_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_padding_naive(buffer_1900[g*512/1],
                                    7,
                                    7,
                                    buffer_2148[i],
                                    buffer_2149[i*512/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_841_padding,
                                    
                                    buffer_2150[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*512/1+1; j < (g+1)*512/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_padding_naive(buffer_1900[j],
                                        7,
                                        7,
                                        temp_buffer,
                                        buffer_2149[i*512/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_841_padding,
                                        0.0);

            add_channel2d_naive(buffer_2148[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 394 GlobalAveragePool_848 GlobalAveragePool
    //Attributes
    //Parameters
    //Inputs: 2148
    //Outputs: 1909
    //Shape:
    //    2148: (1, 512, 7, 7)
    //    1909: (1, 512, 1, 1)
for (uint32_t i = 0; i < 512; i++) {
    global_average_pooling2d_naive(buffer_2148[i],
                                   7,
                                   7,
                                   buffer_1909[i]);
}
    //Layer 395 Gemm_853 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1909,layer4.2.se.fc.0.weight,layer4.2.se.fc.0.bias
    //Outputs: 1914
    //Shape:
    //    1909: (1, 512, 1, 1)
    //    layer4.2.se.fc.0.weight: (32, 512)
    //    layer4.2.se.fc.0.bias: (32,)
    //    1914: (1, 32)

fully_connected_naive(buffer_1909, 512,
                      buffer_1914, 32,
                      buffer_layer4_2_se_fc_0_weight, buffer_layer4_2_se_fc_0_bias);

    //Layer 396 PRelu_854 PRelu
    //Attributes
    //Parameters
    //Inputs: 1914,layer4.2.se.fc.1.weight
    //Outputs: 1915
    //Shape:
    //    1914: (1, 32)
    //    layer4.2.se.fc.1.weight: (1,)
    //    1915: (1, 32)

for (uint32_t i = 0; i < 32; i++) {
    prelu(buffer_1914[i],
               1,
               1,
               buffer_1915[i],
               [i]);
}

    //Layer 397 Gemm_855 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1915,layer4.2.se.fc.2.weight,layer4.2.se.fc.2.bias
    //Outputs: 1916
    //Shape:
    //    1915: (1, 32)
    //    layer4.2.se.fc.2.weight: (512, 32)
    //    layer4.2.se.fc.2.bias: (512,)
    //    1916: (1, 512)

fully_connected_naive(buffer_1915, 32,
                      buffer_1916, 512,
                      buffer_layer4_2_se_fc_2_weight, buffer_layer4_2_se_fc_2_bias);

    //Layer 398 Sigmoid_856 Sigmoid
    //Attributes
    //Parameters
    //Inputs: 1916
    //Outputs: 1917
    //Shape:
    //    1916: (1, 512)
    //    1917: (1, 512)
//
// Created by ali on 20.01.2021.
//

sigmoid_naive(buffer_1916, 1, 512, buffer_1917);

    //Layer 399 Mul_861 Mul
    //Attributes
    //Parameters
    //Inputs: 2148,1917
    //Outputs: 1926
    //Shape:
    //    2148: (1, 512, 7, 7)
    //    1917: (1, 512)
    //    1926: (1, 512, 7, 7)
{
for(uint32_t i = 0; i < 512; i++)
    for(uint32_t j = 0; j < 7*7; j++)
        buffer_1926[i][j] = buffer_2148[i][j] * <memory_manager.Buffer object at 0x7fae95baf630>;

}
    //Layer 400 Add_862 Add
    //Attributes
    //Parameters
    //Inputs: 1926,1895
    //Outputs: 1927
    //Shape:
    //    1926: (1, 512, 7, 7)
    //    1895: (1, 512, 7, 7)
    //    1927: (1, 512, 7, 7)

    for(uint32_t i = 0; i < 512; i++){
        memcpy(buffer_1927[i],
               buffer_1926[i],
               7*7*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 512; i++){
        add_channel2d_naive(buffer_1927[i], buffer_1895[i], 7, 7);
    }


    //Layer 401 PRelu_863 PRelu
    //Attributes
    //Parameters
    //Inputs: 1927,2283
    //Outputs: 1929
    //Shape:
    //    1927: (1, 512, 7, 7)
    //    2283: (1, 1, 1)
    //    1929: (1, 512, 7, 7)

for (uint32_t i = 0; i < 512; i++) {
    prelu(buffer_1927[i],
               7,
               7,
               buffer_1929[i],
               [i]);
}

    //Layer 402 BatchNormalization_864 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1929,bn2.weight,bn2.bias,bn2.running_mean,bn2.running_var
    //Outputs: 1930
    //Shape:
    //    1929: (1, 512, 7, 7)
    //    bn2.weight: (512,)
    //    bn2.bias: (512,)
    //    bn2.running_mean: (512,)
    //    bn2.running_var: (512,)
    //    1930: (1, 512, 7, 7)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive(buffer_1929[i],
                              7,
                              7,
                              buffer_1930[i],
                              buffer_bn2_weight[i],
                              buffer_bn2_bias[i],
                              buffer_bn2_running_mean[i],
                              buffer_bn2_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 403 Gemm_871 Gemm
    //Attributes
    //  alpha: 1.0
    //  beta: 1.0
    //  transB: 1
    //Parameters
    //Inputs: 1930,fc.weight,fc.bias
    //Outputs: 1939
    //Shape:
    //    1930: (1, 512, 7, 7)
    //    fc.weight: (512, 25088)
    //    fc.bias: (512,)
    //    1939: (1, 512)

fully_connected_naive(buffer_1930, 25088,
                      buffer_1939, 512,
                      buffer_fc_weight, buffer_fc_bias);

    //Layer 404 BatchNormalization_872 BatchNormalization1d
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 1939,bn3.weight,bn3.bias,bn3.running_mean,bn3.running_var
    //Outputs: output
    //Shape:
    //    1939: (1, 512)
    //    bn3.weight: (512,)
    //    bn3.bias: (512,)
    //    bn3.running_mean: (512,)
    //    bn3.running_var: (512,)
    //    output: (1, 512)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive_1d(buffer_1939+i,
                              output_output+i,
                              buffer_bn3_weight[i],
                              buffer_bn3_bias[i],
                              buffer_bn3_running_mean[i],
                              buffer_bn3_running_var[i],
                              9.999999747378752e-06);
}
}

