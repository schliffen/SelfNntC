#include "feature_network.h"

void feature_network(fp_t **input_data, fp_t *output_output){
    //Layer 0 Conv_0 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: data,conv1.conv.weight
    //Outputs: 334
    //Shape:
    //    data: (1, 3, 112, 112)
    //    conv1.conv.weight: (64, 3, 3, 3)
    //    334: (1, 64, 56, 56)

const uint16_t Conv_0_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(input_data[g*3/1],
                                    112,
                                    112,
                                    buffer_334[i],
                                    buffer_conv1_conv_weight[i*3/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_0_padding,
                                    
                                    0
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*3/1+1; j < (g+1)*3/1; j+=1){
            static fp_t temp_buffer[56*56];
            convolution2d_padding_naive(input_data[j],
                                        112,
                                        112,
                                        temp_buffer,
                                        buffer_conv1_conv_weight[i*3/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_0_padding,
                                        0.0);

            add_channel2d_naive(buffer_334[i],
                                temp_buffer,
                                56,
                                56);
            cnt+=1;
        }
        
    }
}

    //Layer 1 BatchNormalization_1 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 334,conv1.bn.weight,conv1.bn.bias,conv1.bn.running_mean,conv1.bn.running_var
    //Outputs: 335
    //Shape:
    //    334: (1, 64, 56, 56)
    //    conv1.bn.weight: (64,)
    //    conv1.bn.bias: (64,)
    //    conv1.bn.running_mean: (64,)
    //    conv1.bn.running_var: (64,)
    //    335: (1, 64, 56, 56)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_334[i],
                              56,
                              56,
                              buffer_335[i],
                              buffer_conv1_bn_weight[i],
                              buffer_conv1_bn_bias[i],
                              buffer_conv1_bn_running_mean[i],
                              buffer_conv1_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 2 PRelu_2 PRelu
    //Attributes
    //Parameters
    //Inputs: 335,523
    //Outputs: 337
    //Shape:
    //    335: (1, 64, 56, 56)
    //    523: (64, 1, 1)
    //    337: (1, 64, 56, 56)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_335[i],
               56,
               56,
               buffer_337[i],
               feature_buffer_523[i]);
}

    //Layer 3 Conv_3 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 64
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 337,conv2_dw.conv.weight
    //Outputs: 338
    //Shape:
    //    337: (1, 64, 56, 56)
    //    conv2_dw.conv.weight: (64, 1, 3, 3)
    //    338: (1, 64, 56, 56)

const uint16_t Conv_3_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 64; g++) {
    for(uint32_t i = g*64/64; i < (g+1)*64/64; i+=1){
        convolution2d_padding_naive(buffer_337[g*64/64],
                                    56,
                                    56,
                                    buffer_338[i],
                                    buffer_conv2_dw_conv_weight[i*64/64],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_3_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 4 BatchNormalization_4 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 338,conv2_dw.bn.weight,conv2_dw.bn.bias,conv2_dw.bn.running_mean,conv2_dw.bn.running_var
    //Outputs: 339
    //Shape:
    //    338: (1, 64, 56, 56)
    //    conv2_dw.bn.weight: (64,)
    //    conv2_dw.bn.bias: (64,)
    //    conv2_dw.bn.running_mean: (64,)
    //    conv2_dw.bn.running_var: (64,)
    //    339: (1, 64, 56, 56)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_338[i],
                              56,
                              56,
                              feature_buffer_339[i],
                              buffer_conv2_dw_bn_weight[i],
                              buffer_conv2_dw_bn_bias[i],
                              buffer_conv2_dw_bn_running_mean[i],
                              buffer_conv2_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 5 PRelu_5 PRelu
    //Attributes
    //Parameters
    //Inputs: 339,524
    //Outputs: 341
    //Shape:
    //    339: (1, 64, 56, 56)
    //    524: (64, 1, 1)
    //    341: (1, 64, 56, 56)

for (uint32_t i = 0; i < 64; i++) {
    prelu(feature_buffer_339[i],
               56,
               56,
               buffer_341[i],
               feature_buffer_524[i]);
}

    //Layer 6 Conv_6 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 341,conv_23.conv.conv.weight
    //Outputs: 342
    //Shape:
    //    341: (1, 64, 56, 56)
    //    conv_23.conv.conv.weight: (128, 64, 1, 1)
    //    342: (1, 128, 56, 56)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_341[g*64/1],
                            56,
                            56,
                            feature_buffer_342[i],
                            buffer_conv_23_conv_conv_weight[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[56*56];
            convolution2d_naive(buffer_341[j],
                                56,
                                56,
                                temp_buffer,
                                buffer_conv_23_conv_conv_weight[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(feature_buffer_342[i],
                                temp_buffer,
                                56,
                                56);
            cnt+=1;
        }
        
    }
}

    //Layer 7 BatchNormalization_7 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 342,conv_23.conv.bn.weight,conv_23.conv.bn.bias,conv_23.conv.bn.running_mean,conv_23.conv.bn.running_var
    //Outputs: 343
    //Shape:
    //    342: (1, 128, 56, 56)
    //    conv_23.conv.bn.weight: (128,)
    //    conv_23.conv.bn.bias: (128,)
    //    conv_23.conv.bn.running_mean: (128,)
    //    conv_23.conv.bn.running_var: (128,)
    //    343: (1, 128, 56, 56)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(feature_buffer_342[i],
                              56,
                              56,
                              buffer_343[i],
                              buffer_conv_23_conv_bn_weight[i],
                              buffer_conv_23_conv_bn_bias[i],
                              buffer_conv_23_conv_bn_running_mean[i],
                              buffer_conv_23_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 8 PRelu_8 PRelu
    //Attributes
    //Parameters
    //Inputs: 343,525
    //Outputs: 345
    //Shape:
    //    343: (1, 128, 56, 56)
    //    525: (128, 1, 1)
    //    345: (1, 128, 56, 56)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_343[i],
               56,
               56,
          feature_buffer_345[i],
          feature_buffer_525[i]);
}

    //Layer 9 Conv_9 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 345,conv_23.conv_dw.conv.weight
    //Outputs: 346
    //Shape:
    //    345: (1, 128, 56, 56)
    //    conv_23.conv_dw.conv.weight: (128, 1, 3, 3)
    //    346: (1, 128, 28, 28)

const uint16_t Conv_9_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(feature_buffer_345[g*128/128],
                                    56,
                                    56,
                                    buffer_346[i],
                                    buffer_conv_23_conv_dw_conv_weight[i*128/128],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_9_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 10 BatchNormalization_10 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 346,conv_23.conv_dw.bn.weight,conv_23.conv_dw.bn.bias,conv_23.conv_dw.bn.running_mean,conv_23.conv_dw.bn.running_var
    //Outputs: 347
    //Shape:
    //    346: (1, 128, 28, 28)
    //    conv_23.conv_dw.bn.weight: (128,)
    //    conv_23.conv_dw.bn.bias: (128,)
    //    conv_23.conv_dw.bn.running_mean: (128,)
    //    conv_23.conv_dw.bn.running_var: (128,)
    //    347: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_346[i],
                              28,
                              28,
                              buffer_347[i],
                              buffer_conv_23_conv_dw_bn_weight[i],
                              buffer_conv_23_conv_dw_bn_bias[i],
                              buffer_conv_23_conv_dw_bn_running_mean[i],
                              buffer_conv_23_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 11 PRelu_11 PRelu
    //Attributes
    //Parameters
    //Inputs: 347,526
    //Outputs: 349
    //Shape:
    //    347: (1, 128, 28, 28)
    //    526: (128, 1, 1)
    //    349: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_347[i],
               28,
               28,
               buffer_349[i],
               buffer_526[i]);
}

    //Layer 12 Conv_12 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 349,conv_23.project.conv.weight
    //Outputs: 350
    //Shape:
    //    349: (1, 128, 28, 28)
    //    conv_23.project.conv.weight: (64, 128, 1, 1)
    //    350: (1, 64, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_349[g*128/1],
                            28,
                            28,
                            buffer_350[i],
                            buffer_conv_23_project_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_349[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_23_project_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_350[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 13 BatchNormalization_13 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 350,conv_23.project.bn.weight,conv_23.project.bn.bias,conv_23.project.bn.running_mean,conv_23.project.bn.running_var
    //Outputs: 351
    //Shape:
    //    350: (1, 64, 28, 28)
    //    conv_23.project.bn.weight: (64,)
    //    conv_23.project.bn.bias: (64,)
    //    conv_23.project.bn.running_mean: (64,)
    //    conv_23.project.bn.running_var: (64,)
    //    351: (1, 64, 28, 28)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_350[i],
                              28,
                              28,
                              feature_buffer_351[i],
                              buffer_conv_23_project_bn_weight[i],
                              buffer_conv_23_project_bn_bias[i],
                              buffer_conv_23_project_bn_running_mean[i],
                              buffer_conv_23_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 14 Conv_14 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 351,conv_3.model.0.conv.conv.weight
    //Outputs: 352
    //Shape:
    //    351: (1, 64, 28, 28)
    //    conv_3.model.0.conv.conv.weight: (128, 64, 1, 1)
    //    352: (1, 128, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(feature_buffer_351[g*64/1],
                            28,
                            28,
                            buffer_352[i],
                            buffer_conv_3_model_0_conv_conv_weight[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(feature_buffer_351[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_0_conv_conv_weight[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_352[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 15 BatchNormalization_15 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 352,conv_3.model.0.conv.bn.weight,conv_3.model.0.conv.bn.bias,conv_3.model.0.conv.bn.running_mean,conv_3.model.0.conv.bn.running_var
    //Outputs: 353
    //Shape:
    //    352: (1, 128, 28, 28)
    //    conv_3.model.0.conv.bn.weight: (128,)
    //    conv_3.model.0.conv.bn.bias: (128,)
    //    conv_3.model.0.conv.bn.running_mean: (128,)
    //    conv_3.model.0.conv.bn.running_var: (128,)
    //    353: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_352[i],
                              28,
                              28,
                              buffer_353[i],
                              buffer_conv_3_model_0_conv_bn_weight[i],
                              buffer_conv_3_model_0_conv_bn_bias[i],
                              buffer_conv_3_model_0_conv_bn_running_mean[i],
                              buffer_conv_3_model_0_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 16 PRelu_16 PRelu
    //Attributes
    //Parameters
    //Inputs: 353,527
    //Outputs: 355
    //Shape:
    //    353: (1, 128, 28, 28)
    //    527: (128, 1, 1)
    //    355: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_353[i],
               28,
               28,
               buffer_355[i],
               buffer_527[i]);
}

    //Layer 17 Conv_17 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 355,conv_3.model.0.conv_dw.conv.weight
    //Outputs: 356
    //Shape:
    //    355: (1, 128, 28, 28)
    //    conv_3.model.0.conv_dw.conv.weight: (128, 1, 3, 3)
    //    356: (1, 128, 28, 28)

const uint16_t Conv_17_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_355[g*128/128],
                                    28,
                                    28,
                                    buffer_356[i],
                                    buffer_conv_3_model_0_conv_dw_conv_weight[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_17_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 18 BatchNormalization_18 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 356,conv_3.model.0.conv_dw.bn.weight,conv_3.model.0.conv_dw.bn.bias,conv_3.model.0.conv_dw.bn.running_mean,conv_3.model.0.conv_dw.bn.running_var
    //Outputs: 357
    //Shape:
    //    356: (1, 128, 28, 28)
    //    conv_3.model.0.conv_dw.bn.weight: (128,)
    //    conv_3.model.0.conv_dw.bn.bias: (128,)
    //    conv_3.model.0.conv_dw.bn.running_mean: (128,)
    //    conv_3.model.0.conv_dw.bn.running_var: (128,)
    //    357: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_356[i],
                              28,
                              28,
                              feature_buffer_357[i],
                              buffer_conv_3_model_0_conv_dw_bn_weight[i],
                              buffer_conv_3_model_0_conv_dw_bn_bias[i],
                              buffer_conv_3_model_0_conv_dw_bn_running_mean[i],
                              buffer_conv_3_model_0_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 19 PRelu_19 PRelu
    //Attributes
    //Parameters
    //Inputs: 357,528
    //Outputs: 359
    //Shape:
    //    357: (1, 128, 28, 28)
    //    528: (128, 1, 1)
    //    359: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(feature_buffer_357[i],
               28,
               28,
               buffer_359[i],
               buffer_528[i]);
}

    //Layer 20 Conv_20 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 359,conv_3.model.0.project.conv.weight
    //Outputs: 360
    //Shape:
    //    359: (1, 128, 28, 28)
    //    conv_3.model.0.project.conv.weight: (64, 128, 1, 1)
    //    360: (1, 64, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_359[g*128/1],
                            28,
                            28,
                            feature_buffer_360[i],
                            buffer_conv_3_model_0_project_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_359[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_0_project_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(feature_buffer_360[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 21 BatchNormalization_21 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 360,conv_3.model.0.project.bn.weight,conv_3.model.0.project.bn.bias,conv_3.model.0.project.bn.running_mean,conv_3.model.0.project.bn.running_var
    //Outputs: 361
    //Shape:
    //    360: (1, 64, 28, 28)
    //    conv_3.model.0.project.bn.weight: (64,)
    //    conv_3.model.0.project.bn.bias: (64,)
    //    conv_3.model.0.project.bn.running_mean: (64,)
    //    conv_3.model.0.project.bn.running_var: (64,)
    //    361: (1, 64, 28, 28)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(feature_buffer_360[i],
                              28,
                              28,
                              buffer_361[i],
                              buffer_conv_3_model_0_project_bn_weight[i],
                              buffer_conv_3_model_0_project_bn_bias[i],
                              buffer_conv_3_model_0_project_bn_running_mean[i],
                              buffer_conv_3_model_0_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 22 Add_22 Add
    //Attributes
    //Parameters
    //Inputs: 351,361
    //Outputs: 362
    //Shape:
    //    351: (1, 64, 28, 28)
    //    361: (1, 64, 28, 28)
    //    362: (1, 64, 28, 28)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_362[i],
               feature_buffer_351[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_362[i], buffer_361[i], 28, 28);
    }


    //Layer 23 Conv_23 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 362,conv_3.model.1.conv.conv.weight
    //Outputs: 363
    //Shape:
    //    362: (1, 64, 28, 28)
    //    conv_3.model.1.conv.conv.weight: (128, 64, 1, 1)
    //    363: (1, 128, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_362[g*64/1],
                            28,
                            28,
                            feature_buffer_363[i],
                            buffer_conv_3_model_1_conv_conv_weight[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_362[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_1_conv_conv_weight[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(feature_buffer_363[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 24 BatchNormalization_24 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 363,conv_3.model.1.conv.bn.weight,conv_3.model.1.conv.bn.bias,conv_3.model.1.conv.bn.running_mean,conv_3.model.1.conv.bn.running_var
    //Outputs: 364
    //Shape:
    //    363: (1, 128, 28, 28)
    //    conv_3.model.1.conv.bn.weight: (128,)
    //    conv_3.model.1.conv.bn.bias: (128,)
    //    conv_3.model.1.conv.bn.running_mean: (128,)
    //    conv_3.model.1.conv.bn.running_var: (128,)
    //    364: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(feature_buffer_363[i],
                              28,
                              28,
                              buffer_364[i],
                              buffer_conv_3_model_1_conv_bn_weight[i],
                              buffer_conv_3_model_1_conv_bn_bias[i],
                              buffer_conv_3_model_1_conv_bn_running_mean[i],
                              buffer_conv_3_model_1_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 25 PRelu_25 PRelu
    //Attributes
    //Parameters
    //Inputs: 364,529
    //Outputs: 366
    //Shape:
    //    364: (1, 128, 28, 28)
    //    529: (128, 1, 1)
    //    366: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_364[i],
               28,
               28,
          feature_buffer_366[i],
               buffer_529[i]);
}

    //Layer 26 Conv_26 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 366,conv_3.model.1.conv_dw.conv.weight
    //Outputs: 367
    //Shape:
    //    366: (1, 128, 28, 28)
    //    conv_3.model.1.conv_dw.conv.weight: (128, 1, 3, 3)
    //    367: (1, 128, 28, 28)

const uint16_t Conv_26_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(feature_buffer_366[g*128/128],
                                    28,
                                    28,
                                    buffer_367[i],
                                    buffer_conv_3_model_1_conv_dw_conv_weight[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_26_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 27 BatchNormalization_27 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 367,conv_3.model.1.conv_dw.bn.weight,conv_3.model.1.conv_dw.bn.bias,conv_3.model.1.conv_dw.bn.running_mean,conv_3.model.1.conv_dw.bn.running_var
    //Outputs: 368
    //Shape:
    //    367: (1, 128, 28, 28)
    //    conv_3.model.1.conv_dw.bn.weight: (128,)
    //    conv_3.model.1.conv_dw.bn.bias: (128,)
    //    conv_3.model.1.conv_dw.bn.running_mean: (128,)
    //    conv_3.model.1.conv_dw.bn.running_var: (128,)
    //    368: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_367[i],
                              28,
                              28,
                              buffer_368[i],
                              buffer_conv_3_model_1_conv_dw_bn_weight[i],
                              buffer_conv_3_model_1_conv_dw_bn_bias[i],
                              buffer_conv_3_model_1_conv_dw_bn_running_mean[i],
                              buffer_conv_3_model_1_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 28 PRelu_28 PRelu
    //Attributes
    //Parameters
    //Inputs: 368,530
    //Outputs: 370
    //Shape:
    //    368: (1, 128, 28, 28)
    //    530: (128, 1, 1)
    //    370: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_368[i],
               28,
               28,
               buffer_370[i],
               buffer_530[i]);
}

    //Layer 29 Conv_29 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 370,conv_3.model.1.project.conv.weight
    //Outputs: 371
    //Shape:
    //    370: (1, 128, 28, 28)
    //    conv_3.model.1.project.conv.weight: (64, 128, 1, 1)
    //    371: (1, 64, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_370[g*128/1],
                            28,
                            28,
                            buffer_371[i],
                            buffer_conv_3_model_1_project_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_370[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_1_project_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_371[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 30 BatchNormalization_30 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 371,conv_3.model.1.project.bn.weight,conv_3.model.1.project.bn.bias,conv_3.model.1.project.bn.running_mean,conv_3.model.1.project.bn.running_var
    //Outputs: 372
    //Shape:
    //    371: (1, 64, 28, 28)
    //    conv_3.model.1.project.bn.weight: (64,)
    //    conv_3.model.1.project.bn.bias: (64,)
    //    conv_3.model.1.project.bn.running_mean: (64,)
    //    conv_3.model.1.project.bn.running_var: (64,)
    //    372: (1, 64, 28, 28)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_371[i],
                              28,
                              28,
                              feature_buffer_372[i],
                              buffer_conv_3_model_1_project_bn_weight[i],
                              buffer_conv_3_model_1_project_bn_bias[i],
                              buffer_conv_3_model_1_project_bn_running_mean[i],
                              buffer_conv_3_model_1_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 31 Add_31 Add
    //Attributes
    //Parameters
    //Inputs: 362,372
    //Outputs: 373
    //Shape:
    //    362: (1, 64, 28, 28)
    //    372: (1, 64, 28, 28)
    //    373: (1, 64, 28, 28)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_373[i],
               buffer_362[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_373[i], feature_buffer_372[i], 28, 28);
    }


    //Layer 32 Conv_32 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 373,conv_3.model.2.conv.conv.weight
    //Outputs: 374
    //Shape:
    //    373: (1, 64, 28, 28)
    //    conv_3.model.2.conv.conv.weight: (128, 64, 1, 1)
    //    374: (1, 128, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_373[g*64/1],
                            28,
                            28,
                            buffer_374[i],
                            buffer_conv_3_model_2_conv_conv_weight[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_373[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_2_conv_conv_weight[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_374[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 33 BatchNormalization_33 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 374,conv_3.model.2.conv.bn.weight,conv_3.model.2.conv.bn.bias,conv_3.model.2.conv.bn.running_mean,conv_3.model.2.conv.bn.running_var
    //Outputs: 375
    //Shape:
    //    374: (1, 128, 28, 28)
    //    conv_3.model.2.conv.bn.weight: (128,)
    //    conv_3.model.2.conv.bn.bias: (128,)
    //    conv_3.model.2.conv.bn.running_mean: (128,)
    //    conv_3.model.2.conv.bn.running_var: (128,)
    //    375: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_374[i],
                              28,
                              28,
                              feature_buffer_375[i],
                              buffer_conv_3_model_2_conv_bn_weight[i],
                              buffer_conv_3_model_2_conv_bn_bias[i],
                              buffer_conv_3_model_2_conv_bn_running_mean[i],
                              buffer_conv_3_model_2_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 34 PRelu_34 PRelu
    //Attributes
    //Parameters
    //Inputs: 375,531
    //Outputs: 377
    //Shape:
    //    375: (1, 128, 28, 28)
    //    531: (128, 1, 1)
    //    377: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(feature_buffer_375[i],
               28,
               28,
               buffer_377[i],
               buffer_531[i]);
}

    //Layer 35 Conv_35 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 377,conv_3.model.2.conv_dw.conv.weight
    //Outputs: 378
    //Shape:
    //    377: (1, 128, 28, 28)
    //    conv_3.model.2.conv_dw.conv.weight: (128, 1, 3, 3)
    //    378: (1, 128, 28, 28)

const uint16_t Conv_35_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_377[g*128/128],
                                    28,
                                    28,
                                    feature_buffer_378[i],
                                    buffer_conv_3_model_2_conv_dw_conv_weight[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_35_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 36 BatchNormalization_36 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 378,conv_3.model.2.conv_dw.bn.weight,conv_3.model.2.conv_dw.bn.bias,conv_3.model.2.conv_dw.bn.running_mean,conv_3.model.2.conv_dw.bn.running_var
    //Outputs: 379
    //Shape:
    //    378: (1, 128, 28, 28)
    //    conv_3.model.2.conv_dw.bn.weight: (128,)
    //    conv_3.model.2.conv_dw.bn.bias: (128,)
    //    conv_3.model.2.conv_dw.bn.running_mean: (128,)
    //    conv_3.model.2.conv_dw.bn.running_var: (128,)
    //    379: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(feature_buffer_378[i],
                              28,
                              28,
                              buffer_379[i],
                              buffer_conv_3_model_2_conv_dw_bn_weight[i],
                              buffer_conv_3_model_2_conv_dw_bn_bias[i],
                              buffer_conv_3_model_2_conv_dw_bn_running_mean[i],
                              buffer_conv_3_model_2_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 37 PRelu_37 PRelu
    //Attributes
    //Parameters
    //Inputs: 379,532
    //Outputs: 381
    //Shape:
    //    379: (1, 128, 28, 28)
    //    532: (128, 1, 1)
    //    381: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_379[i],
               28,
               28,
          feature_buffer_381[i],
               buffer_532[i]);
}

    //Layer 38 Conv_38 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 381,conv_3.model.2.project.conv.weight
    //Outputs: 382
    //Shape:
    //    381: (1, 128, 28, 28)
    //    conv_3.model.2.project.conv.weight: (64, 128, 1, 1)
    //    382: (1, 64, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(feature_buffer_381[g*128/1],
                            28,
                            28,
                            buffer_382[i],
                            buffer_conv_3_model_2_project_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(feature_buffer_381[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_2_project_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_382[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 39 BatchNormalization_39 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 382,conv_3.model.2.project.bn.weight,conv_3.model.2.project.bn.bias,conv_3.model.2.project.bn.running_mean,conv_3.model.2.project.bn.running_var
    //Outputs: 383
    //Shape:
    //    382: (1, 64, 28, 28)
    //    conv_3.model.2.project.bn.weight: (64,)
    //    conv_3.model.2.project.bn.bias: (64,)
    //    conv_3.model.2.project.bn.running_mean: (64,)
    //    conv_3.model.2.project.bn.running_var: (64,)
    //    383: (1, 64, 28, 28)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_382[i],
                              28,
                              28,
                              buffer_383[i],
                              buffer_conv_3_model_2_project_bn_weight[i],
                              buffer_conv_3_model_2_project_bn_bias[i],
                              buffer_conv_3_model_2_project_bn_running_mean[i],
                              buffer_conv_3_model_2_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 40 Add_40 Add
    //Attributes
    //Parameters
    //Inputs: 373,383
    //Outputs: 384
    //Shape:
    //    373: (1, 64, 28, 28)
    //    383: (1, 64, 28, 28)
    //    384: (1, 64, 28, 28)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(feature_buffer_384[i],
               buffer_373[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(feature_buffer_384[i], buffer_383[i], 28, 28);
    }


    //Layer 41 Conv_41 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 384,conv_3.model.3.conv.conv.weight
    //Outputs: 385
    //Shape:
    //    384: (1, 64, 28, 28)
    //    conv_3.model.3.conv.conv.weight: (128, 64, 1, 1)
    //    385: (1, 128, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(feature_buffer_384[g*64/1],
                            28,
                            28,
                            buffer_385[i],
                            buffer_conv_3_model_3_conv_conv_weight[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(feature_buffer_384[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_3_conv_conv_weight[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_385[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 42 BatchNormalization_42 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 385,conv_3.model.3.conv.bn.weight,conv_3.model.3.conv.bn.bias,conv_3.model.3.conv.bn.running_mean,conv_3.model.3.conv.bn.running_var
    //Outputs: 386
    //Shape:
    //    385: (1, 128, 28, 28)
    //    conv_3.model.3.conv.bn.weight: (128,)
    //    conv_3.model.3.conv.bn.bias: (128,)
    //    conv_3.model.3.conv.bn.running_mean: (128,)
    //    conv_3.model.3.conv.bn.running_var: (128,)
    //    386: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_385[i],
                              28,
                              28,
                              buffer_386[i],
                              buffer_conv_3_model_3_conv_bn_weight[i],
                              buffer_conv_3_model_3_conv_bn_bias[i],
                              buffer_conv_3_model_3_conv_bn_running_mean[i],
                              buffer_conv_3_model_3_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 43 PRelu_43 PRelu
    //Attributes
    //Parameters
    //Inputs: 386,533
    //Outputs: 388
    //Shape:
    //    386: (1, 128, 28, 28)
    //    533: (128, 1, 1)
    //    388: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(buffer_386[i],
               28,
               28,
               buffer_388[i],
               buffer_533[i]);
}

    //Layer 44 Conv_44 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 388,conv_3.model.3.conv_dw.conv.weight
    //Outputs: 389
    //Shape:
    //    388: (1, 128, 28, 28)
    //    conv_3.model.3.conv_dw.conv.weight: (128, 1, 3, 3)
    //    389: (1, 128, 28, 28)

const uint16_t Conv_44_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_388[g*128/128],
                                    28,
                                    28,
                                    buffer_389[i],
                                    buffer_conv_3_model_3_conv_dw_conv_weight[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_44_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 45 BatchNormalization_45 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 389,conv_3.model.3.conv_dw.bn.weight,conv_3.model.3.conv_dw.bn.bias,conv_3.model.3.conv_dw.bn.running_mean,conv_3.model.3.conv_dw.bn.running_var
    //Outputs: 390
    //Shape:
    //    389: (1, 128, 28, 28)
    //    conv_3.model.3.conv_dw.bn.weight: (128,)
    //    conv_3.model.3.conv_dw.bn.bias: (128,)
    //    conv_3.model.3.conv_dw.bn.running_mean: (128,)
    //    conv_3.model.3.conv_dw.bn.running_var: (128,)
    //    390: (1, 128, 28, 28)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_389[i],
                              28,
                              28,
                              feature_buffer_390[i],
                              buffer_conv_3_model_3_conv_dw_bn_weight[i],
                              buffer_conv_3_model_3_conv_dw_bn_bias[i],
                              buffer_conv_3_model_3_conv_dw_bn_running_mean[i],
                              buffer_conv_3_model_3_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 46 PRelu_46 PRelu
    //Attributes
    //Parameters
    //Inputs: 390,534
    //Outputs: 392
    //Shape:
    //    390: (1, 128, 28, 28)
    //    534: (128, 1, 1)
    //    392: (1, 128, 28, 28)

for (uint32_t i = 0; i < 128; i++) {
    prelu(feature_buffer_390[i],
               28,
               28,
               buffer_392[i],
               buffer_534[i]);
}

    //Layer 47 Conv_47 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 392,conv_3.model.3.project.conv.weight
    //Outputs: 393
    //Shape:
    //    392: (1, 128, 28, 28)
    //    conv_3.model.3.project.conv.weight: (64, 128, 1, 1)
    //    393: (1, 64, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_392[g*128/1],
                            28,
                            28,
                            buffer_393[i],
                            buffer_conv_3_model_3_project_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_392[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_3_model_3_project_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_393[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 48 BatchNormalization_48 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 393,conv_3.model.3.project.bn.weight,conv_3.model.3.project.bn.bias,conv_3.model.3.project.bn.running_mean,conv_3.model.3.project.bn.running_var
    //Outputs: 394
    //Shape:
    //    393: (1, 64, 28, 28)
    //    conv_3.model.3.project.bn.weight: (64,)
    //    conv_3.model.3.project.bn.bias: (64,)
    //    conv_3.model.3.project.bn.running_mean: (64,)
    //    conv_3.model.3.project.bn.running_var: (64,)
    //    394: (1, 64, 28, 28)
for (uint32_t i = 0; i < 64; i++) {
    batch_normalization_naive(buffer_393[i],
                              28,
                              28,
                              buffer_394[i],
                              buffer_conv_3_model_3_project_bn_weight[i],
                              buffer_conv_3_model_3_project_bn_bias[i],
                              buffer_conv_3_model_3_project_bn_running_mean[i],
                              buffer_conv_3_model_3_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 49 Add_49 Add
    //Attributes
    //Parameters
    //Inputs: 384,394
    //Outputs: 395
    //Shape:
    //    384: (1, 64, 28, 28)
    //    394: (1, 64, 28, 28)
    //    395: (1, 64, 28, 28)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_395[i],
               feature_buffer_384[i],
               28*28*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_395[i], buffer_394[i], 28, 28);
    }


    //Layer 50 Conv_50 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 395,conv_34.conv.conv.weight
    //Outputs: 396
    //Shape:
    //    395: (1, 64, 28, 28)
    //    conv_34.conv.conv.weight: (256, 64, 1, 1)
    //    396: (1, 256, 28, 28)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_395[g*64/1],
                            28,
                            28,
                            buffer_396[i],
                            buffer_conv_34_conv_conv_weight[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[28*28];
            convolution2d_naive(buffer_395[j],
                                28,
                                28,
                                temp_buffer,
                                buffer_conv_34_conv_conv_weight[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_396[i],
                                temp_buffer,
                                28,
                                28);
            cnt+=1;
        }
        
    }
}

    //Layer 51 BatchNormalization_51 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 396,conv_34.conv.bn.weight,conv_34.conv.bn.bias,conv_34.conv.bn.running_mean,conv_34.conv.bn.running_var
    //Outputs: 397
    //Shape:
    //    396: (1, 256, 28, 28)
    //    conv_34.conv.bn.weight: (256,)
    //    conv_34.conv.bn.bias: (256,)
    //    conv_34.conv.bn.running_mean: (256,)
    //    conv_34.conv.bn.running_var: (256,)
    //    397: (1, 256, 28, 28)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_396[i],
                              28,
                              28,
                              buffer_397[i],
                              buffer_conv_34_conv_bn_weight[i],
                              buffer_conv_34_conv_bn_bias[i],
                              buffer_conv_34_conv_bn_running_mean[i],
                              buffer_conv_34_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 52 PRelu_52 PRelu
    //Attributes
    //Parameters
    //Inputs: 397,535
    //Outputs: 399
    //Shape:
    //    397: (1, 256, 28, 28)
    //    535: (256, 1, 1)
    //    399: (1, 256, 28, 28)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_397[i],
               28,
               28,
               buffer_399[i],
          feature_buffer_535[i]);
}

    //Layer 53 Conv_53 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 399,conv_34.conv_dw.conv.weight
    //Outputs: 400
    //Shape:
    //    399: (1, 256, 28, 28)
    //    conv_34.conv_dw.conv.weight: (256, 1, 3, 3)
    //    400: (1, 256, 14, 14)

const uint16_t Conv_53_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_399[g*256/256],
                                    28,
                                    28,
                                    buffer_400[i],
                                    buffer_conv_34_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_53_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 54 BatchNormalization_54 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 400,conv_34.conv_dw.bn.weight,conv_34.conv_dw.bn.bias,conv_34.conv_dw.bn.running_mean,conv_34.conv_dw.bn.running_var
    //Outputs: 401
    //Shape:
    //    400: (1, 256, 14, 14)
    //    conv_34.conv_dw.bn.weight: (256,)
    //    conv_34.conv_dw.bn.bias: (256,)
    //    conv_34.conv_dw.bn.running_mean: (256,)
    //    conv_34.conv_dw.bn.running_var: (256,)
    //    401: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_400[i],
                              14,
                              14,
                              buffer_401[i],
                              buffer_conv_34_conv_dw_bn_weight[i],
                              buffer_conv_34_conv_dw_bn_bias[i],
                              buffer_conv_34_conv_dw_bn_running_mean[i],
                              buffer_conv_34_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 55 PRelu_55 PRelu
    //Attributes
    //Parameters
    //Inputs: 401,536
    //Outputs: 403
    //Shape:
    //    401: (1, 256, 14, 14)
    //    536: (256, 1, 1)
    //    403: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_401[i],
               14,
               14,
               buffer_403[i],
          feature_buffer_536[i]);
}

    //Layer 56 Conv_56 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 403,conv_34.project.conv.weight
    //Outputs: 404
    //Shape:
    //    403: (1, 256, 14, 14)
    //    conv_34.project.conv.weight: (128, 256, 1, 1)
    //    404: (1, 128, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_403[g*256/1],
                            14,
                            14,
                            buffer_404[i],
                            buffer_conv_34_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_403[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_34_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_404[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 57 BatchNormalization_57 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 404,conv_34.project.bn.weight,conv_34.project.bn.bias,conv_34.project.bn.running_mean,conv_34.project.bn.running_var
    //Outputs: 405
    //Shape:
    //    404: (1, 128, 14, 14)
    //    conv_34.project.bn.weight: (128,)
    //    conv_34.project.bn.bias: (128,)
    //    conv_34.project.bn.running_mean: (128,)
    //    conv_34.project.bn.running_var: (128,)
    //    405: (1, 128, 14, 14)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_404[i],
                              14,
                              14,
                              buffer_405[i],
                              buffer_conv_34_project_bn_weight[i],
                              buffer_conv_34_project_bn_bias[i],
                              buffer_conv_34_project_bn_running_mean[i],
                              buffer_conv_34_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 58 Conv_58 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 405,conv_4.model.0.conv.conv.weight
    //Outputs: 406
    //Shape:
    //    405: (1, 128, 14, 14)
    //    conv_4.model.0.conv.conv.weight: (256, 128, 1, 1)
    //    406: (1, 256, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_405[g*128/1],
                            14,
                            14,
                            buffer_406[i],
                            buffer_conv_4_model_0_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_405[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_0_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_406[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 59 BatchNormalization_59 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 406,conv_4.model.0.conv.bn.weight,conv_4.model.0.conv.bn.bias,conv_4.model.0.conv.bn.running_mean,conv_4.model.0.conv.bn.running_var
    //Outputs: 407
    //Shape:
    //    406: (1, 256, 14, 14)
    //    conv_4.model.0.conv.bn.weight: (256,)
    //    conv_4.model.0.conv.bn.bias: (256,)
    //    conv_4.model.0.conv.bn.running_mean: (256,)
    //    conv_4.model.0.conv.bn.running_var: (256,)
    //    407: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_406[i],
                              14,
                              14,
                              feature_buffer_407[i],
                              buffer_conv_4_model_0_conv_bn_weight[i],
                              buffer_conv_4_model_0_conv_bn_bias[i],
                              buffer_conv_4_model_0_conv_bn_running_mean[i],
                              buffer_conv_4_model_0_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 60 PRelu_60 PRelu
    //Attributes
    //Parameters
    //Inputs: 407,537
    //Outputs: 409
    //Shape:
    //    407: (1, 256, 14, 14)
    //    537: (256, 1, 1)
    //    409: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(feature_buffer_407[i],
               14,
               14,
               buffer_409[i],
          feature_buffer_537[i]);
}

    //Layer 61 Conv_61 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 409,conv_4.model.0.conv_dw.conv.weight
    //Outputs: 410
    //Shape:
    //    409: (1, 256, 14, 14)
    //    conv_4.model.0.conv_dw.conv.weight: (256, 1, 3, 3)
    //    410: (1, 256, 14, 14)

const uint16_t Conv_61_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_409[g*256/256],
                                    14,
                                    14,
                                    buffer_410[i],
                                    buffer_conv_4_model_0_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_61_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 62 BatchNormalization_62 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 410,conv_4.model.0.conv_dw.bn.weight,conv_4.model.0.conv_dw.bn.bias,conv_4.model.0.conv_dw.bn.running_mean,conv_4.model.0.conv_dw.bn.running_var
    //Outputs: 411
    //Shape:
    //    410: (1, 256, 14, 14)
    //    conv_4.model.0.conv_dw.bn.weight: (256,)
    //    conv_4.model.0.conv_dw.bn.bias: (256,)
    //    conv_4.model.0.conv_dw.bn.running_mean: (256,)
    //    conv_4.model.0.conv_dw.bn.running_var: (256,)
    //    411: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_410[i],
                              14,
                              14,
                              feature_buffer_411[i],
                              buffer_conv_4_model_0_conv_dw_bn_weight[i],
                              buffer_conv_4_model_0_conv_dw_bn_bias[i],
                              buffer_conv_4_model_0_conv_dw_bn_running_mean[i],
                              buffer_conv_4_model_0_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 63 PRelu_63 PRelu
    //Attributes
    //Parameters
    //Inputs: 411,538
    //Outputs: 413
    //Shape:
    //    411: (1, 256, 14, 14)
    //    538: (256, 1, 1)
    //    413: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu( feature_buffer_411[i],
               14,
               14,
               buffer_413[i],
               buffer_538[i]);
}

    //Layer 64 Conv_64 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 413,conv_4.model.0.project.conv.weight
    //Outputs: 414
    //Shape:
    //    413: (1, 256, 14, 14)
    //    conv_4.model.0.project.conv.weight: (128, 256, 1, 1)
    //    414: (1, 128, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_413[g*256/1],
                            14,
                            14,
                            buffer_414[i],
                            buffer_conv_4_model_0_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_413[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_0_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_414[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 65 BatchNormalization_65 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 414,conv_4.model.0.project.bn.weight,conv_4.model.0.project.bn.bias,conv_4.model.0.project.bn.running_mean,conv_4.model.0.project.bn.running_var
    //Outputs: 415
    //Shape:
    //    414: (1, 128, 14, 14)
    //    conv_4.model.0.project.bn.weight: (128,)
    //    conv_4.model.0.project.bn.bias: (128,)
    //    conv_4.model.0.project.bn.running_mean: (128,)
    //    conv_4.model.0.project.bn.running_var: (128,)
    //    415: (1, 128, 14, 14)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_414[i],
                              14,
                              14,
                              buffer_415[i],
                              buffer_conv_4_model_0_project_bn_weight[i],
                              buffer_conv_4_model_0_project_bn_bias[i],
                              buffer_conv_4_model_0_project_bn_running_mean[i],
                              buffer_conv_4_model_0_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 66 Add_66 Add
    //Attributes
    //Parameters
    //Inputs: 405,415
    //Outputs: 416
    //Shape:
    //    405: (1, 128, 14, 14)
    //    415: (1, 128, 14, 14)
    //    416: (1, 128, 14, 14)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_416[i],
               buffer_405[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_416[i], buffer_415[i], 14, 14);
    }


    //Layer 67 Conv_67 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 416,conv_4.model.1.conv.conv.weight
    //Outputs: 417
    //Shape:
    //    416: (1, 128, 14, 14)
    //    conv_4.model.1.conv.conv.weight: (256, 128, 1, 1)
    //    417: (1, 256, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_416[g*128/1],
                            14,
                            14,
                            buffer_417[i],
                            buffer_conv_4_model_1_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_416[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_1_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_417[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 68 BatchNormalization_68 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 417,conv_4.model.1.conv.bn.weight,conv_4.model.1.conv.bn.bias,conv_4.model.1.conv.bn.running_mean,conv_4.model.1.conv.bn.running_var
    //Outputs: 418
    //Shape:
    //    417: (1, 256, 14, 14)
    //    conv_4.model.1.conv.bn.weight: (256,)
    //    conv_4.model.1.conv.bn.bias: (256,)
    //    conv_4.model.1.conv.bn.running_mean: (256,)
    //    conv_4.model.1.conv.bn.running_var: (256,)
    //    418: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_417[i],
                              14,
                              14,
                              buffer_418[i],
                              buffer_conv_4_model_1_conv_bn_weight[i],
                              buffer_conv_4_model_1_conv_bn_bias[i],
                              buffer_conv_4_model_1_conv_bn_running_mean[i],
                              buffer_conv_4_model_1_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 69 PRelu_69 PRelu
    //Attributes
    //Parameters
    //Inputs: 418,539
    //Outputs: 420
    //Shape:
    //    418: (1, 256, 14, 14)
    //    539: (256, 1, 1)
    //    420: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_418[i],
               14,
               14,
               buffer_420[i],
               buffer_539[i]);
}

    //Layer 70 Conv_70 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 420,conv_4.model.1.conv_dw.conv.weight
    //Outputs: 421
    //Shape:
    //    420: (1, 256, 14, 14)
    //    conv_4.model.1.conv_dw.conv.weight: (256, 1, 3, 3)
    //    421: (1, 256, 14, 14)

const uint16_t Conv_70_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_420[g*256/256],
                                    14,
                                    14,
                                    buffer_421[i],
                                    buffer_conv_4_model_1_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_70_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 71 BatchNormalization_71 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 421,conv_4.model.1.conv_dw.bn.weight,conv_4.model.1.conv_dw.bn.bias,conv_4.model.1.conv_dw.bn.running_mean,conv_4.model.1.conv_dw.bn.running_var
    //Outputs: 422
    //Shape:
    //    421: (1, 256, 14, 14)
    //    conv_4.model.1.conv_dw.bn.weight: (256,)
    //    conv_4.model.1.conv_dw.bn.bias: (256,)
    //    conv_4.model.1.conv_dw.bn.running_mean: (256,)
    //    conv_4.model.1.conv_dw.bn.running_var: (256,)
    //    422: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_421[i],
                              14,
                              14,
                              buffer_422[i],
                              buffer_conv_4_model_1_conv_dw_bn_weight[i],
                              buffer_conv_4_model_1_conv_dw_bn_bias[i],
                              buffer_conv_4_model_1_conv_dw_bn_running_mean[i],
                              buffer_conv_4_model_1_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 72 PRelu_72 PRelu
    //Attributes
    //Parameters
    //Inputs: 422,540
    //Outputs: 424
    //Shape:
    //    422: (1, 256, 14, 14)
    //    540: (256, 1, 1)
    //    424: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_422[i],
               14,
               14,
               buffer_424[i],
               buffer_540[i]);
}

    //Layer 73 Conv_73 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 424,conv_4.model.1.project.conv.weight
    //Outputs: 425
    //Shape:
    //    424: (1, 256, 14, 14)
    //    conv_4.model.1.project.conv.weight: (128, 256, 1, 1)
    //    425: (1, 128, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_424[g*256/1],
                            14,
                            14,
                            buffer_425[i],
                            buffer_conv_4_model_1_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_424[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_1_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_425[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 74 BatchNormalization_74 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 425,conv_4.model.1.project.bn.weight,conv_4.model.1.project.bn.bias,conv_4.model.1.project.bn.running_mean,conv_4.model.1.project.bn.running_var
    //Outputs: 426
    //Shape:
    //    425: (1, 128, 14, 14)
    //    conv_4.model.1.project.bn.weight: (128,)
    //    conv_4.model.1.project.bn.bias: (128,)
    //    conv_4.model.1.project.bn.running_mean: (128,)
    //    conv_4.model.1.project.bn.running_var: (128,)
    //    426: (1, 128, 14, 14)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_425[i],
                              14,
                              14,
                              buffer_426[i],
                              buffer_conv_4_model_1_project_bn_weight[i],
                              buffer_conv_4_model_1_project_bn_bias[i],
                              buffer_conv_4_model_1_project_bn_running_mean[i],
                              buffer_conv_4_model_1_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 75 Add_75 Add
    //Attributes
    //Parameters
    //Inputs: 416,426
    //Outputs: 427
    //Shape:
    //    416: (1, 128, 14, 14)
    //    426: (1, 128, 14, 14)
    //    427: (1, 128, 14, 14)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_427[i],
               buffer_416[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_427[i], buffer_426[i], 14, 14);
    }


    //Layer 76 Conv_76 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 427,conv_4.model.2.conv.conv.weight
    //Outputs: 428
    //Shape:
    //    427: (1, 128, 14, 14)
    //    conv_4.model.2.conv.conv.weight: (256, 128, 1, 1)
    //    428: (1, 256, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_427[g*128/1],
                            14,
                            14,
                            feature_buffer_428[i],
                            buffer_conv_4_model_2_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_427[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_2_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(feature_buffer_428[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 77 BatchNormalization_77 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 428,conv_4.model.2.conv.bn.weight,conv_4.model.2.conv.bn.bias,conv_4.model.2.conv.bn.running_mean,conv_4.model.2.conv.bn.running_var
    //Outputs: 429
    //Shape:
    //    428: (1, 256, 14, 14)
    //    conv_4.model.2.conv.bn.weight: (256,)
    //    conv_4.model.2.conv.bn.bias: (256,)
    //    conv_4.model.2.conv.bn.running_mean: (256,)
    //    conv_4.model.2.conv.bn.running_var: (256,)
    //    429: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive( feature_buffer_428[i],
                              14,
                              14,
                               feature_buffer_429[i],
                              buffer_conv_4_model_2_conv_bn_weight[i],
                              buffer_conv_4_model_2_conv_bn_bias[i],
                              buffer_conv_4_model_2_conv_bn_running_mean[i],
                              buffer_conv_4_model_2_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 78 PRelu_78 PRelu
    //Attributes
    //Parameters
    //Inputs: 429,541
    //Outputs: 431
    //Shape:
    //    429: (1, 256, 14, 14)
    //    541: (256, 1, 1)
    //    431: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(feature_buffer_429[i],
               14,
               14,
               buffer_431[i],
               buffer_541[i]);
}

    //Layer 79 Conv_79 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 431,conv_4.model.2.conv_dw.conv.weight
    //Outputs: 432
    //Shape:
    //    431: (1, 256, 14, 14)
    //    conv_4.model.2.conv_dw.conv.weight: (256, 1, 3, 3)
    //    432: (1, 256, 14, 14)

const uint16_t Conv_79_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_431[g*256/256],
                                    14,
                                    14,
                                    feature_buffer_432[i],
                                    buffer_conv_4_model_2_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_79_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 80 BatchNormalization_80 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 432,conv_4.model.2.conv_dw.bn.weight,conv_4.model.2.conv_dw.bn.bias,conv_4.model.2.conv_dw.bn.running_mean,conv_4.model.2.conv_dw.bn.running_var
    //Outputs: 433
    //Shape:
    //    432: (1, 256, 14, 14)
    //    conv_4.model.2.conv_dw.bn.weight: (256,)
    //    conv_4.model.2.conv_dw.bn.bias: (256,)
    //    conv_4.model.2.conv_dw.bn.running_mean: (256,)
    //    conv_4.model.2.conv_dw.bn.running_var: (256,)
    //    433: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive( feature_buffer_432[i],
                              14,
                              14,
                              buffer_433[i],
                              buffer_conv_4_model_2_conv_dw_bn_weight[i],
                              buffer_conv_4_model_2_conv_dw_bn_bias[i],
                              buffer_conv_4_model_2_conv_dw_bn_running_mean[i],
                              buffer_conv_4_model_2_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 81 PRelu_81 PRelu
    //Attributes
    //Parameters
    //Inputs: 433,542
    //Outputs: 435
    //Shape:
    //    433: (1, 256, 14, 14)
    //    542: (256, 1, 1)
    //    435: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_433[i],
               14,
               14,
               buffer_435[i],
               buffer_542[i]);
}

    //Layer 82 Conv_82 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 435,conv_4.model.2.project.conv.weight
    //Outputs: 436
    //Shape:
    //    435: (1, 256, 14, 14)
    //    conv_4.model.2.project.conv.weight: (128, 256, 1, 1)
    //    436: (1, 128, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_435[g*256/1],
                            14,
                            14,
                            buffer_436[i],
                            buffer_conv_4_model_2_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_435[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_2_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_436[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 83 BatchNormalization_83 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 436,conv_4.model.2.project.bn.weight,conv_4.model.2.project.bn.bias,conv_4.model.2.project.bn.running_mean,conv_4.model.2.project.bn.running_var
    //Outputs: 437
    //Shape:
    //    436: (1, 128, 14, 14)
    //    conv_4.model.2.project.bn.weight: (128,)
    //    conv_4.model.2.project.bn.bias: (128,)
    //    conv_4.model.2.project.bn.running_mean: (128,)
    //    conv_4.model.2.project.bn.running_var: (128,)
    //    437: (1, 128, 14, 14)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_436[i],
                              14,
                              14,
                              feature_buffer_437[i],
                              buffer_conv_4_model_2_project_bn_weight[i],
                              buffer_conv_4_model_2_project_bn_bias[i],
                              buffer_conv_4_model_2_project_bn_running_mean[i],
                              buffer_conv_4_model_2_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 84 Add_84 Add
    //Attributes
    //Parameters
    //Inputs: 427,437
    //Outputs: 438
    //Shape:
    //    427: (1, 128, 14, 14)
    //    437: (1, 128, 14, 14)
    //    438: (1, 128, 14, 14)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_438[i],
               buffer_427[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_438[i], feature_buffer_437[i], 14, 14);
    }


    //Layer 85 Conv_85 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 438,conv_4.model.3.conv.conv.weight
    //Outputs: 439
    //Shape:
    //    438: (1, 128, 14, 14)
    //    conv_4.model.3.conv.conv.weight: (256, 128, 1, 1)
    //    439: (1, 256, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_438[g*128/1],
                            14,
                            14,
                            buffer_439[i],
                            buffer_conv_4_model_3_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_438[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_3_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_439[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 86 BatchNormalization_86 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 439,conv_4.model.3.conv.bn.weight,conv_4.model.3.conv.bn.bias,conv_4.model.3.conv.bn.running_mean,conv_4.model.3.conv.bn.running_var
    //Outputs: 440
    //Shape:
    //    439: (1, 256, 14, 14)
    //    conv_4.model.3.conv.bn.weight: (256,)
    //    conv_4.model.3.conv.bn.bias: (256,)
    //    conv_4.model.3.conv.bn.running_mean: (256,)
    //    conv_4.model.3.conv.bn.running_var: (256,)
    //    440: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_439[i],
                              14,
                              14,
                              buffer_440[i],
                              buffer_conv_4_model_3_conv_bn_weight[i],
                              buffer_conv_4_model_3_conv_bn_bias[i],
                              buffer_conv_4_model_3_conv_bn_running_mean[i],
                              buffer_conv_4_model_3_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 87 PRelu_87 PRelu
    //Attributes
    //Parameters
    //Inputs: 440,543
    //Outputs: 442
    //Shape:
    //    440: (1, 256, 14, 14)
    //    543: (256, 1, 1)
    //    442: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_440[i],
               14,
               14,
          feature_buffer_442[i],
               buffer_543[i]);
}

    //Layer 88 Conv_88 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 442,conv_4.model.3.conv_dw.conv.weight
    //Outputs: 443
    //Shape:
    //    442: (1, 256, 14, 14)
    //    conv_4.model.3.conv_dw.conv.weight: (256, 1, 3, 3)
    //    443: (1, 256, 14, 14)

const uint16_t Conv_88_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive( feature_buffer_442[g*256/256],
                                    14,
                                    14,
                                    buffer_443[i],
                                    buffer_conv_4_model_3_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_88_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 89 BatchNormalization_89 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 443,conv_4.model.3.conv_dw.bn.weight,conv_4.model.3.conv_dw.bn.bias,conv_4.model.3.conv_dw.bn.running_mean,conv_4.model.3.conv_dw.bn.running_var
    //Outputs: 444
    //Shape:
    //    443: (1, 256, 14, 14)
    //    conv_4.model.3.conv_dw.bn.weight: (256,)
    //    conv_4.model.3.conv_dw.bn.bias: (256,)
    //    conv_4.model.3.conv_dw.bn.running_mean: (256,)
    //    conv_4.model.3.conv_dw.bn.running_var: (256,)
    //    444: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_443[i],
                              14,
                              14,
                              buffer_444[i],
                              buffer_conv_4_model_3_conv_dw_bn_weight[i],
                              buffer_conv_4_model_3_conv_dw_bn_bias[i],
                              buffer_conv_4_model_3_conv_dw_bn_running_mean[i],
                              buffer_conv_4_model_3_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 90 PRelu_90 PRelu
    //Attributes
    //Parameters
    //Inputs: 444,544
    //Outputs: 446
    //Shape:
    //    444: (1, 256, 14, 14)
    //    544: (256, 1, 1)
    //    446: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_444[i],
               14,
               14,
          feature_buffer_446[i],
               buffer_544[i]);
}

    //Layer 91 Conv_91 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 446,conv_4.model.3.project.conv.weight
    //Outputs: 447
    //Shape:
    //    446: (1, 256, 14, 14)
    //    conv_4.model.3.project.conv.weight: (128, 256, 1, 1)
    //    447: (1, 128, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive( feature_buffer_446[g*256/1],
                            14,
                            14,
                            buffer_447[i],
                            buffer_conv_4_model_3_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive( feature_buffer_446[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_3_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_447[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 92 BatchNormalization_92 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 447,conv_4.model.3.project.bn.weight,conv_4.model.3.project.bn.bias,conv_4.model.3.project.bn.running_mean,conv_4.model.3.project.bn.running_var
    //Outputs: 448
    //Shape:
    //    447: (1, 128, 14, 14)
    //    conv_4.model.3.project.bn.weight: (128,)
    //    conv_4.model.3.project.bn.bias: (128,)
    //    conv_4.model.3.project.bn.running_mean: (128,)
    //    conv_4.model.3.project.bn.running_var: (128,)
    //    448: (1, 128, 14, 14)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_447[i],
                              14,
                              14,
                              buffer_448[i],
                              buffer_conv_4_model_3_project_bn_weight[i],
                              buffer_conv_4_model_3_project_bn_bias[i],
                              buffer_conv_4_model_3_project_bn_running_mean[i],
                              buffer_conv_4_model_3_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 93 Add_93 Add
    //Attributes
    //Parameters
    //Inputs: 438,448
    //Outputs: 449
    //Shape:
    //    438: (1, 128, 14, 14)
    //    448: (1, 128, 14, 14)
    //    449: (1, 128, 14, 14)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_449[i],
               buffer_438[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_449[i], buffer_448[i], 14, 14);
    }


    //Layer 94 Conv_94 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 449,conv_4.model.4.conv.conv.weight
    //Outputs: 450
    //Shape:
    //    449: (1, 128, 14, 14)
    //    conv_4.model.4.conv.conv.weight: (256, 128, 1, 1)
    //    450: (1, 256, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_449[g*128/1],
                            14,
                            14,
                            buffer_450[i],
                            buffer_conv_4_model_4_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_449[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_4_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_450[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 95 BatchNormalization_95 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 450,conv_4.model.4.conv.bn.weight,conv_4.model.4.conv.bn.bias,conv_4.model.4.conv.bn.running_mean,conv_4.model.4.conv.bn.running_var
    //Outputs: 451
    //Shape:
    //    450: (1, 256, 14, 14)
    //    conv_4.model.4.conv.bn.weight: (256,)
    //    conv_4.model.4.conv.bn.bias: (256,)
    //    conv_4.model.4.conv.bn.running_mean: (256,)
    //    conv_4.model.4.conv.bn.running_var: (256,)
    //    451: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_450[i],
                              14,
                              14,
                              feature_buffer_451[i],
                              buffer_conv_4_model_4_conv_bn_weight[i],
                              buffer_conv_4_model_4_conv_bn_bias[i],
                              buffer_conv_4_model_4_conv_bn_running_mean[i],
                              buffer_conv_4_model_4_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 96 PRelu_96 PRelu
    //Attributes
    //Parameters
    //Inputs: 451,545
    //Outputs: 453
    //Shape:
    //    451: (1, 256, 14, 14)
    //    545: (256, 1, 1)
    //    453: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu( feature_buffer_451[i],
               14,
               14,
               buffer_453[i],
               buffer_545[i]);
}

    //Layer 97 Conv_97 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 453,conv_4.model.4.conv_dw.conv.weight
    //Outputs: 454
    //Shape:
    //    453: (1, 256, 14, 14)
    //    conv_4.model.4.conv_dw.conv.weight: (256, 1, 3, 3)
    //    454: (1, 256, 14, 14)

const uint16_t Conv_97_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_453[g*256/256],
                                    14,
                                    14,
                                    buffer_454[i],
                                    buffer_conv_4_model_4_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_97_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 98 BatchNormalization_98 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 454,conv_4.model.4.conv_dw.bn.weight,conv_4.model.4.conv_dw.bn.bias,conv_4.model.4.conv_dw.bn.running_mean,conv_4.model.4.conv_dw.bn.running_var
    //Outputs: 455
    //Shape:
    //    454: (1, 256, 14, 14)
    //    conv_4.model.4.conv_dw.bn.weight: (256,)
    //    conv_4.model.4.conv_dw.bn.bias: (256,)
    //    conv_4.model.4.conv_dw.bn.running_mean: (256,)
    //    conv_4.model.4.conv_dw.bn.running_var: (256,)
    //    455: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_454[i],
                              14,
                              14,
                              buffer_455[i],
                              buffer_conv_4_model_4_conv_dw_bn_weight[i],
                              buffer_conv_4_model_4_conv_dw_bn_bias[i],
                              buffer_conv_4_model_4_conv_dw_bn_running_mean[i],
                              buffer_conv_4_model_4_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 99 PRelu_99 PRelu
    //Attributes
    //Parameters
    //Inputs: 455,546
    //Outputs: 457
    //Shape:
    //    455: (1, 256, 14, 14)
    //    546: (256, 1, 1)
    //    457: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_455[i],
               14,
               14,
               buffer_457[i],
               buffer_546[i]);
}

    //Layer 100 Conv_100 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 457,conv_4.model.4.project.conv.weight
    //Outputs: 458
    //Shape:
    //    457: (1, 256, 14, 14)
    //    conv_4.model.4.project.conv.weight: (128, 256, 1, 1)
    //    458: (1, 128, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_457[g*256/1],
                            14,
                            14,
                            buffer_458[i],
                            buffer_conv_4_model_4_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_457[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_4_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_458[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 101 BatchNormalization_101 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 458,conv_4.model.4.project.bn.weight,conv_4.model.4.project.bn.bias,conv_4.model.4.project.bn.running_mean,conv_4.model.4.project.bn.running_var
    //Outputs: 459
    //Shape:
    //    458: (1, 128, 14, 14)
    //    conv_4.model.4.project.bn.weight: (128,)
    //    conv_4.model.4.project.bn.bias: (128,)
    //    conv_4.model.4.project.bn.running_mean: (128,)
    //    conv_4.model.4.project.bn.running_var: (128,)
    //    459: (1, 128, 14, 14)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_458[i],
                              14,
                              14,
                              feature_buffer_459[i],
                              buffer_conv_4_model_4_project_bn_weight[i],
                              buffer_conv_4_model_4_project_bn_bias[i],
                              buffer_conv_4_model_4_project_bn_running_mean[i],
                              buffer_conv_4_model_4_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 102 Add_102 Add
    //Attributes
    //Parameters
    //Inputs: 449,459
    //Outputs: 460
    //Shape:
    //    449: (1, 128, 14, 14)
    //    459: (1, 128, 14, 14)
    //    460: (1, 128, 14, 14)

    for(uint32_t i = 0; i < 128; i++){
        memcpy( feature_buffer_460[i],
               buffer_449[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive( feature_buffer_460[i], feature_buffer_459[i], 14, 14);
    }


    //Layer 103 Conv_103 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 460,conv_4.model.5.conv.conv.weight
    //Outputs: 461
    //Shape:
    //    460: (1, 128, 14, 14)
    //    conv_4.model.5.conv.conv.weight: (256, 128, 1, 1)
    //    461: (1, 256, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive( feature_buffer_460[g*128/1],
                            14,
                            14,
                            buffer_461[i],
                            buffer_conv_4_model_5_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive( feature_buffer_460[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_5_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_461[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 104 BatchNormalization_104 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 461,conv_4.model.5.conv.bn.weight,conv_4.model.5.conv.bn.bias,conv_4.model.5.conv.bn.running_mean,conv_4.model.5.conv.bn.running_var
    //Outputs: 462
    //Shape:
    //    461: (1, 256, 14, 14)
    //    conv_4.model.5.conv.bn.weight: (256,)
    //    conv_4.model.5.conv.bn.bias: (256,)
    //    conv_4.model.5.conv.bn.running_mean: (256,)
    //    conv_4.model.5.conv.bn.running_var: (256,)
    //    462: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_461[i],
                              14,
                              14,
                              buffer_462[i],
                              buffer_conv_4_model_5_conv_bn_weight[i],
                              buffer_conv_4_model_5_conv_bn_bias[i],
                              buffer_conv_4_model_5_conv_bn_running_mean[i],
                              buffer_conv_4_model_5_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 105 PRelu_105 PRelu
    //Attributes
    //Parameters
    //Inputs: 462,547
    //Outputs: 464
    //Shape:
    //    462: (1, 256, 14, 14)
    //    547: (256, 1, 1)
    //    464: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_462[i],
               14,
               14,
               buffer_464[i],
          feature_buffer_547[i]);
}

    //Layer 106 Conv_106 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 464,conv_4.model.5.conv_dw.conv.weight
    //Outputs: 465
    //Shape:
    //    464: (1, 256, 14, 14)
    //    conv_4.model.5.conv_dw.conv.weight: (256, 1, 3, 3)
    //    465: (1, 256, 14, 14)

const uint16_t Conv_106_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_464[g*256/256],
                                    14,
                                    14,
                                    feature_buffer_465[i],
                                    buffer_conv_4_model_5_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_106_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 107 BatchNormalization_107 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 465,conv_4.model.5.conv_dw.bn.weight,conv_4.model.5.conv_dw.bn.bias,conv_4.model.5.conv_dw.bn.running_mean,conv_4.model.5.conv_dw.bn.running_var
    //Outputs: 466
    //Shape:
    //    465: (1, 256, 14, 14)
    //    conv_4.model.5.conv_dw.bn.weight: (256,)
    //    conv_4.model.5.conv_dw.bn.bias: (256,)
    //    conv_4.model.5.conv_dw.bn.running_mean: (256,)
    //    conv_4.model.5.conv_dw.bn.running_var: (256,)
    //    466: (1, 256, 14, 14)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive( feature_buffer_465[i],
                              14,
                              14,
                              buffer_466[i],
                              buffer_conv_4_model_5_conv_dw_bn_weight[i],
                              buffer_conv_4_model_5_conv_dw_bn_bias[i],
                              buffer_conv_4_model_5_conv_dw_bn_running_mean[i],
                              buffer_conv_4_model_5_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 108 PRelu_108 PRelu
    //Attributes
    //Parameters
    //Inputs: 466,548
    //Outputs: 468
    //Shape:
    //    466: (1, 256, 14, 14)
    //    548: (256, 1, 1)
    //    468: (1, 256, 14, 14)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_466[i],
               14,
               14,
               buffer_468[i],
          feature_buffer_548[i]);
}

    //Layer 109 Conv_109 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 468,conv_4.model.5.project.conv.weight
    //Outputs: 469
    //Shape:
    //    468: (1, 256, 14, 14)
    //    conv_4.model.5.project.conv.weight: (128, 256, 1, 1)
    //    469: (1, 128, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_468[g*256/1],
                            14,
                            14,
                            buffer_469[i],
                            buffer_conv_4_model_5_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_468[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_4_model_5_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_469[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 110 BatchNormalization_110 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 469,conv_4.model.5.project.bn.weight,conv_4.model.5.project.bn.bias,conv_4.model.5.project.bn.running_mean,conv_4.model.5.project.bn.running_var
    //Outputs: 470
    //Shape:
    //    469: (1, 128, 14, 14)
    //    conv_4.model.5.project.bn.weight: (128,)
    //    conv_4.model.5.project.bn.bias: (128,)
    //    conv_4.model.5.project.bn.running_mean: (128,)
    //    conv_4.model.5.project.bn.running_var: (128,)
    //    470: (1, 128, 14, 14)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_469[i],
                              14,
                              14,
                              feature_buffer_470[i],
                              buffer_conv_4_model_5_project_bn_weight[i],
                              buffer_conv_4_model_5_project_bn_bias[i],
                              buffer_conv_4_model_5_project_bn_running_mean[i],
                              buffer_conv_4_model_5_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 111 Add_111 Add
    //Attributes
    //Parameters
    //Inputs: 460,470
    //Outputs: 471
    //Shape:
    //    460: (1, 128, 14, 14)
    //    470: (1, 128, 14, 14)
    //    471: (1, 128, 14, 14)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_471[i],
               feature_buffer_460[i],
               14*14*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_471[i], feature_buffer_470[i], 14, 14);
    }


    //Layer 112 Conv_112 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 471,conv_45.conv.conv.weight
    //Outputs: 472
    //Shape:
    //    471: (1, 128, 14, 14)
    //    conv_45.conv.conv.weight: (512, 128, 1, 1)
    //    472: (1, 512, 14, 14)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_naive(buffer_471[g*128/1],
                            14,
                            14,
                            buffer_472[i],
                            buffer_conv_45_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[14*14];
            convolution2d_naive(buffer_471[j],
                                14,
                                14,
                                temp_buffer,
                                buffer_conv_45_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_472[i],
                                temp_buffer,
                                14,
                                14);
            cnt+=1;
        }
        
    }
}

    //Layer 113 BatchNormalization_113 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 472,conv_45.conv.bn.weight,conv_45.conv.bn.bias,conv_45.conv.bn.running_mean,conv_45.conv.bn.running_var
    //Outputs: 473
    //Shape:
    //    472: (1, 512, 14, 14)
    //    conv_45.conv.bn.weight: (512,)
    //    conv_45.conv.bn.bias: (512,)
    //    conv_45.conv.bn.running_mean: (512,)
    //    conv_45.conv.bn.running_var: (512,)
    //    473: (1, 512, 14, 14)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive(buffer_472[i],
                              14,
                              14,
                              feature_buffer_473[i],
                              buffer_conv_45_conv_bn_weight[i],
                              buffer_conv_45_conv_bn_bias[i],
                              buffer_conv_45_conv_bn_running_mean[i],
                              buffer_conv_45_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 114 PRelu_114 PRelu
    //Attributes
    //Parameters
    //Inputs: 473,549
    //Outputs: 475
    //Shape:
    //    473: (1, 512, 14, 14)
    //    549: (512, 1, 1)
    //    475: (1, 512, 14, 14)

for (uint32_t i = 0; i < 512; i++) {
    prelu( feature_buffer_473[i],
               14,
               14,
           feature_buffer_475[i],
           feature_buffer_549[i]);
}

    //Layer 115 Conv_115 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 512
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 475,conv_45.conv_dw.conv.weight
    //Outputs: 476
    //Shape:
    //    475: (1, 512, 14, 14)
    //    conv_45.conv_dw.conv.weight: (512, 1, 3, 3)
    //    476: (1, 512, 7, 7)

const uint16_t Conv_115_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 512; g++) {
    for(uint32_t i = g*512/512; i < (g+1)*512/512; i+=1){
        convolution2d_padding_naive( feature_buffer_475[g*512/512],
                                    14,
                                    14,
                                     feature_buffer_476[i],
                                    buffer_conv_45_conv_dw_conv_weight[i*512/512],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_115_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 116 BatchNormalization_116 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 476,conv_45.conv_dw.bn.weight,conv_45.conv_dw.bn.bias,conv_45.conv_dw.bn.running_mean,conv_45.conv_dw.bn.running_var
    //Outputs: 477
    //Shape:
    //    476: (1, 512, 7, 7)
    //    conv_45.conv_dw.bn.weight: (512,)
    //    conv_45.conv_dw.bn.bias: (512,)
    //    conv_45.conv_dw.bn.running_mean: (512,)
    //    conv_45.conv_dw.bn.running_var: (512,)
    //    477: (1, 512, 7, 7)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive(feature_buffer_476[i],
                              7,
                              7,
                              buffer_477[i],
                              buffer_conv_45_conv_dw_bn_weight[i],
                              buffer_conv_45_conv_dw_bn_bias[i],
                              buffer_conv_45_conv_dw_bn_running_mean[i],
                              buffer_conv_45_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 117 PRelu_117 PRelu
    //Attributes
    //Parameters
    //Inputs: 477,550
    //Outputs: 479
    //Shape:
    //    477: (1, 512, 7, 7)
    //    550: (512, 1, 1)
    //    479: (1, 512, 7, 7)

for (uint32_t i = 0; i < 512; i++) {
    prelu(buffer_477[i],
               7,
               7,
               buffer_479[i],
          feature_buffer_550[i]);
}

    //Layer 118 Conv_118 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 479,conv_45.project.conv.weight
    //Outputs: 480
    //Shape:
    //    479: (1, 512, 7, 7)
    //    conv_45.project.conv.weight: (128, 512, 1, 1)
    //    480: (1, 128, 7, 7)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_479[g*512/1],
                            7,
                            7,
                            buffer_480[i],
                            buffer_conv_45_project_conv_weight[i*512/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*512/1+1; j < (g+1)*512/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_naive(buffer_479[j],
                                7,
                                7,
                                temp_buffer,
                                buffer_conv_45_project_conv_weight[i*512/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_480[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 119 BatchNormalization_119 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 480,conv_45.project.bn.weight,conv_45.project.bn.bias,conv_45.project.bn.running_mean,conv_45.project.bn.running_var
    //Outputs: 481
    //Shape:
    //    480: (1, 128, 7, 7)
    //    conv_45.project.bn.weight: (128,)
    //    conv_45.project.bn.bias: (128,)
    //    conv_45.project.bn.running_mean: (128,)
    //    conv_45.project.bn.running_var: (128,)
    //    481: (1, 128, 7, 7)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_480[i],
                              7,
                              7,
                              buffer_481[i],
                              buffer_conv_45_project_bn_weight[i],
                              buffer_conv_45_project_bn_bias[i],
                              buffer_conv_45_project_bn_running_mean[i],
                              buffer_conv_45_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 120 Conv_120 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 481,conv_5.model.0.conv.conv.weight
    //Outputs: 482
    //Shape:
    //    481: (1, 128, 7, 7)
    //    conv_5.model.0.conv.conv.weight: (256, 128, 1, 1)
    //    482: (1, 256, 7, 7)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_481[g*128/1],
                            7,
                            7,
                            buffer_482[i],
                            buffer_conv_5_model_0_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_naive(buffer_481[j],
                                7,
                                7,
                                temp_buffer,
                                buffer_conv_5_model_0_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_482[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 121 BatchNormalization_121 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 482,conv_5.model.0.conv.bn.weight,conv_5.model.0.conv.bn.bias,conv_5.model.0.conv.bn.running_mean,conv_5.model.0.conv.bn.running_var
    //Outputs: 483
    //Shape:
    //    482: (1, 256, 7, 7)
    //    conv_5.model.0.conv.bn.weight: (256,)
    //    conv_5.model.0.conv.bn.bias: (256,)
    //    conv_5.model.0.conv.bn.running_mean: (256,)
    //    conv_5.model.0.conv.bn.running_var: (256,)
    //    483: (1, 256, 7, 7)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_482[i],
                              7,
                              7,
                              buffer_483[i],
                              buffer_conv_5_model_0_conv_bn_weight[i],
                              buffer_conv_5_model_0_conv_bn_bias[i],
                              buffer_conv_5_model_0_conv_bn_running_mean[i],
                              buffer_conv_5_model_0_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 122 PRelu_122 PRelu
    //Attributes
    //Parameters
    //Inputs: 483,551
    //Outputs: 485
    //Shape:
    //    483: (1, 256, 7, 7)
    //    551: (256, 1, 1)
    //    485: (1, 256, 7, 7)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_483[i],
               7,
               7,
               buffer_485[i],
               buffer_551[i]);
}

    //Layer 123 Conv_123 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 485,conv_5.model.0.conv_dw.conv.weight
    //Outputs: 486
    //Shape:
    //    485: (1, 256, 7, 7)
    //    conv_5.model.0.conv_dw.conv.weight: (256, 1, 3, 3)
    //    486: (1, 256, 7, 7)

const uint16_t Conv_123_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_485[g*256/256],
                                    7,
                                    7,
                                    feature_buffer_486[i],
                                    buffer_conv_5_model_0_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_123_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 124 BatchNormalization_124 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 486,conv_5.model.0.conv_dw.bn.weight,conv_5.model.0.conv_dw.bn.bias,conv_5.model.0.conv_dw.bn.running_mean,conv_5.model.0.conv_dw.bn.running_var
    //Outputs: 487
    //Shape:
    //    486: (1, 256, 7, 7)
    //    conv_5.model.0.conv_dw.bn.weight: (256,)
    //    conv_5.model.0.conv_dw.bn.bias: (256,)
    //    conv_5.model.0.conv_dw.bn.running_mean: (256,)
    //    conv_5.model.0.conv_dw.bn.running_var: (256,)
    //    487: (1, 256, 7, 7)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive( feature_buffer_486[i],
                              7,
                              7,
                               feature_buffer_487[i],
                              buffer_conv_5_model_0_conv_dw_bn_weight[i],
                              buffer_conv_5_model_0_conv_dw_bn_bias[i],
                              buffer_conv_5_model_0_conv_dw_bn_running_mean[i],
                              buffer_conv_5_model_0_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 125 PRelu_125 PRelu
    //Attributes
    //Parameters
    //Inputs: 487,552
    //Outputs: 489
    //Shape:
    //    487: (1, 256, 7, 7)
    //    552: (256, 1, 1)
    //    489: (1, 256, 7, 7)

for (uint32_t i = 0; i < 256; i++) {
    prelu( feature_buffer_487[i],
               7,
               7,
               buffer_489[i],
               buffer_552[i]);
}

    //Layer 126 Conv_126 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 489,conv_5.model.0.project.conv.weight
    //Outputs: 490
    //Shape:
    //    489: (1, 256, 7, 7)
    //    conv_5.model.0.project.conv.weight: (128, 256, 1, 1)
    //    490: (1, 128, 7, 7)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_489[g*256/1],
                            7,
                            7,
                            buffer_490[i],
                            buffer_conv_5_model_0_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_naive(buffer_489[j],
                                7,
                                7,
                                temp_buffer,
                                buffer_conv_5_model_0_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_490[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 127 BatchNormalization_127 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 490,conv_5.model.0.project.bn.weight,conv_5.model.0.project.bn.bias,conv_5.model.0.project.bn.running_mean,conv_5.model.0.project.bn.running_var
    //Outputs: 491
    //Shape:
    //    490: (1, 128, 7, 7)
    //    conv_5.model.0.project.bn.weight: (128,)
    //    conv_5.model.0.project.bn.bias: (128,)
    //    conv_5.model.0.project.bn.running_mean: (128,)
    //    conv_5.model.0.project.bn.running_var: (128,)
    //    491: (1, 128, 7, 7)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_490[i],
                              7,
                              7,
                              buffer_491[i],
                              buffer_conv_5_model_0_project_bn_weight[i],
                              buffer_conv_5_model_0_project_bn_bias[i],
                              buffer_conv_5_model_0_project_bn_running_mean[i],
                              buffer_conv_5_model_0_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 128 Add_128 Add
    //Attributes
    //Parameters
    //Inputs: 481,491
    //Outputs: 492
    //Shape:
    //    481: (1, 128, 7, 7)
    //    491: (1, 128, 7, 7)
    //    492: (1, 128, 7, 7)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_492[i],
               buffer_481[i],
               7*7*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_492[i], buffer_491[i], 7, 7);
    }


    //Layer 129 Conv_129 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 492,conv_5.model.1.conv.conv.weight
    //Outputs: 493
    //Shape:
    //    492: (1, 128, 7, 7)
    //    conv_5.model.1.conv.conv.weight: (256, 128, 1, 1)
    //    493: (1, 256, 7, 7)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_492[g*128/1],
                            7,
                            7,
                            buffer_493[i],
                            buffer_conv_5_model_1_conv_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_naive(buffer_492[j],
                                7,
                                7,
                                temp_buffer,
                                buffer_conv_5_model_1_conv_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_493[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 130 BatchNormalization_130 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 493,conv_5.model.1.conv.bn.weight,conv_5.model.1.conv.bn.bias,conv_5.model.1.conv.bn.running_mean,conv_5.model.1.conv.bn.running_var
    //Outputs: 494
    //Shape:
    //    493: (1, 256, 7, 7)
    //    conv_5.model.1.conv.bn.weight: (256,)
    //    conv_5.model.1.conv.bn.bias: (256,)
    //    conv_5.model.1.conv.bn.running_mean: (256,)
    //    conv_5.model.1.conv.bn.running_var: (256,)
    //    494: (1, 256, 7, 7)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_493[i],
                              7,
                              7,
                              buffer_494[i],
                              buffer_conv_5_model_1_conv_bn_weight[i],
                              buffer_conv_5_model_1_conv_bn_bias[i],
                              buffer_conv_5_model_1_conv_bn_running_mean[i],
                              buffer_conv_5_model_1_conv_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 131 PRelu_131 PRelu
    //Attributes
    //Parameters
    //Inputs: 494,553
    //Outputs: 496
    //Shape:
    //    494: (1, 256, 7, 7)
    //    553: (256, 1, 1)
    //    496: (1, 256, 7, 7)

for (uint32_t i = 0; i < 256; i++) {
    prelu(buffer_494[i],
               7,
               7,
               buffer_496[i],
               buffer_553[i]);
}

    //Layer 132 Conv_132 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 496,conv_5.model.1.conv_dw.conv.weight
    //Outputs: 497
    //Shape:
    //    496: (1, 256, 7, 7)
    //    conv_5.model.1.conv_dw.conv.weight: (256, 1, 3, 3)
    //    497: (1, 256, 7, 7)

const uint16_t Conv_132_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_496[g*256/256],
                                    7,
                                    7,
                                    buffer_497[i],
                                    buffer_conv_5_model_1_conv_dw_conv_weight[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_132_padding,
                                    
                                    0
                                    );
        
    }
}

    //Layer 133 BatchNormalization_133 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 497,conv_5.model.1.conv_dw.bn.weight,conv_5.model.1.conv_dw.bn.bias,conv_5.model.1.conv_dw.bn.running_mean,conv_5.model.1.conv_dw.bn.running_var
    //Outputs: 498
    //Shape:
    //    497: (1, 256, 7, 7)
    //    conv_5.model.1.conv_dw.bn.weight: (256,)
    //    conv_5.model.1.conv_dw.bn.bias: (256,)
    //    conv_5.model.1.conv_dw.bn.running_mean: (256,)
    //    conv_5.model.1.conv_dw.bn.running_var: (256,)
    //    498: (1, 256, 7, 7)
for (uint32_t i = 0; i < 256; i++) {
    batch_normalization_naive(buffer_497[i],
                              7,
                              7,
                              feature_buffer_498[i],
                              buffer_conv_5_model_1_conv_dw_bn_weight[i],
                              buffer_conv_5_model_1_conv_dw_bn_bias[i],
                              buffer_conv_5_model_1_conv_dw_bn_running_mean[i],
                              buffer_conv_5_model_1_conv_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 134 PRelu_134 PRelu
    //Attributes
    //Parameters
    //Inputs: 498,554
    //Outputs: 500
    //Shape:
    //    498: (1, 256, 7, 7)
    //    554: (256, 1, 1)
    //    500: (1, 256, 7, 7)

for (uint32_t i = 0; i < 256; i++) {
    prelu( feature_buffer_498[i],
               7,
               7,
           feature_buffer_500[i],
               buffer_554[i]);
}

    //Layer 135 Conv_135 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 500,conv_5.model.1.project.conv.weight
    //Outputs: 501
    //Shape:
    //    500: (1, 256, 7, 7)
    //    conv_5.model.1.project.conv.weight: (128, 256, 1, 1)
    //    501: (1, 128, 7, 7)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive( feature_buffer_500[g*256/1],
                            7,
                            7,
                            buffer_501[i],
                            buffer_conv_5_model_1_project_conv_weight[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_naive( feature_buffer_500[j],
                                7,
                                7,
                                temp_buffer,
                                buffer_conv_5_model_1_project_conv_weight[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_501[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 136 BatchNormalization_136 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 501,conv_5.model.1.project.bn.weight,conv_5.model.1.project.bn.bias,conv_5.model.1.project.bn.running_mean,conv_5.model.1.project.bn.running_var
    //Outputs: 502
    //Shape:
    //    501: (1, 128, 7, 7)
    //    conv_5.model.1.project.bn.weight: (128,)
    //    conv_5.model.1.project.bn.bias: (128,)
    //    conv_5.model.1.project.bn.running_mean: (128,)
    //    conv_5.model.1.project.bn.running_var: (128,)
    //    502: (1, 128, 7, 7)
for (uint32_t i = 0; i < 128; i++) {
    batch_normalization_naive(buffer_501[i],
                              7,
                              7,
                              buffer_502[i],
                              buffer_conv_5_model_1_project_bn_weight[i],
                              buffer_conv_5_model_1_project_bn_bias[i],
                              buffer_conv_5_model_1_project_bn_running_mean[i],
                              buffer_conv_5_model_1_project_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 137 Add_137 Add
    //Attributes
    //Parameters
    //Inputs: 492,502
    //Outputs: 503
    //Shape:
    //    492: (1, 128, 7, 7)
    //    502: (1, 128, 7, 7)
    //    503: (1, 128, 7, 7)

    for(uint32_t i = 0; i < 128; i++){
        memcpy(buffer_503[i],
               buffer_492[i],
               7*7*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 128; i++){
        add_channel2d_naive(buffer_503[i], buffer_502[i], 7, 7);
    }


    //Layer 138 Conv_138 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 503,conv_6_sep.conv.weight
    //Outputs: 504
    //Shape:
    //    503: (1, 128, 7, 7)
    //    conv_6_sep.conv.weight: (512, 128, 1, 1)
    //    504: (1, 512, 7, 7)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*512/1; i < (g+1)*512/1; i+=1){
        convolution2d_naive(buffer_503[g*128/1],
                            7,
                            7,
                            buffer_504[i],
                            buffer_conv_6_sep_conv_weight[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            0
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[7*7];
            convolution2d_naive(buffer_503[j],
                                7,
                                7,
                                temp_buffer,
                                buffer_conv_6_sep_conv_weight[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_504[i],
                                temp_buffer,
                                7,
                                7);
            cnt+=1;
        }
        
    }
}

    //Layer 139 BatchNormalization_139 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 504,conv_6_sep.bn.weight,conv_6_sep.bn.bias,conv_6_sep.bn.running_mean,conv_6_sep.bn.running_var
    //Outputs: 505
    //Shape:
    //    504: (1, 512, 7, 7)
    //    conv_6_sep.bn.weight: (512,)
    //    conv_6_sep.bn.bias: (512,)
    //    conv_6_sep.bn.running_mean: (512,)
    //    conv_6_sep.bn.running_var: (512,)
    //    505: (1, 512, 7, 7)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive(buffer_504[i],
                              7,
                              7,
                              buffer_505[i],
                              buffer_conv_6_sep_bn_weight[i],
                              buffer_conv_6_sep_bn_bias[i],
                              buffer_conv_6_sep_bn_running_mean[i],
                              buffer_conv_6_sep_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 140 PRelu_140 PRelu
    //Attributes
    //Parameters
    //Inputs: 505,555
    //Outputs: 507
    //Shape:
    //    505: (1, 512, 7, 7)
    //    555: (512, 1, 1)
    //    507: (1, 512, 7, 7)

for (uint32_t i = 0; i < 512; i++) {
    prelu(buffer_505[i],
               7,
               7,
               buffer_507[i],
               buffer_555[i]);
}

    //Layer 141 Conv_141 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 512
    //  kernel_shape: [7, 7]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 507,conv_6_dw.conv.weight
    //Outputs: 508
    //Shape:
    //    507: (1, 512, 7, 7)
    //    conv_6_dw.conv.weight: (512, 1, 7, 7)
    //    508: (1, 512, 1, 1)

for(uint32_t g = 0; g < 512; g++) {
    for(uint32_t i = g*512/512; i < (g+1)*512/512; i+=1){
        convolution2d_naive(buffer_507[g*512/512],
                            7,
                            7,
                            buffer_508[i],
                            buffer_conv_6_dw_conv_weight[i*512/512],
                            7,
                            7,
                            1,
                            1,
                            
                            0
                            );
        
    }
}

    //Layer 142 BatchNormalization_142 BatchNormalization
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 508,conv_6_dw.bn.weight,conv_6_dw.bn.bias,conv_6_dw.bn.running_mean,conv_6_dw.bn.running_var
    //Outputs: 509
    //Shape:
    //    508: (1, 512, 1, 1)
    //    conv_6_dw.bn.weight: (512,)
    //    conv_6_dw.bn.bias: (512,)
    //    conv_6_dw.bn.running_mean: (512,)
    //    conv_6_dw.bn.running_var: (512,)
    //    509: (1, 512, 1, 1)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive(buffer_508[i],
                              1,
                              1,
                              buffer_509[i],
                              buffer_conv_6_dw_bn_weight[i],
                              buffer_conv_6_dw_bn_bias[i],
                              buffer_conv_6_dw_bn_running_mean[i],
                              buffer_conv_6_dw_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 143 Reshape_148 Reshape
    //Attributes
    //Parameters
    //Inputs: 509,516
    //Outputs: 517
    //Shape:
    //    509: (1, 512, 1, 1)
    //    516: (2,)
    //    517: (1, 512)

for(uint32_t i = 0; i < 512; i++){
    memcpy(&buffer_517[i*1*1],
           buffer_509[i],
           1*1*sizeof(fp_t));
}

    //Layer 144 MatMul_149 MatMul
    //Attributes
    //Parameters
    //Inputs: 517,557
    //Outputs: 519
    //Shape:
    //    517: (1, 512)
    //    557: (512, 512)
    //    519: (1, 512)
fully_connected_naive(buffer_517, 512,
                      buffer_519, 512,
                      buffer_557, NULL);
    //Layer 145 BatchNormalization_150 BatchNormalization1d
    //Attributes
    //  epsilon: 9.999999747378752e-06
    //  momentum: 0.8999999761581421
    //Parameters
    //Inputs: 519,bn.weight,bn.bias,bn.running_mean,bn.running_var
    //Outputs: 520
    //Shape:
    //    519: (1, 512)
    //    bn.weight: (512,)
    //    bn.bias: (512,)
    //    bn.running_mean: (512,)
    //    bn.running_var: (512,)
    //    520: (1, 512)
for (uint32_t i = 0; i < 512; i++) {
    batch_normalization_naive_1d(buffer_519+i,
                              buffer_520+i,
                              buffer_bn_weight[i],
                              buffer_bn_bias[i],
                              buffer_bn_running_mean[i],
                              buffer_bn_running_var[i],
                              9.999999747378752e-06);
}
    //Layer 146 ReduceL2_151 ReduceL2
    //Attributes
    //  axes: [1]
    //  keepdims: 1
    //Parameters
    //Inputs: 520
    //Outputs: 521
    //Shape:
    //    520: (1, 512)
    //    521: (1, 1)

norm_naive_l2(buffer_520, 512,2, buffer_521);

    //Layer 147 Div_152 Div
    //Attributes
    //Parameters
    //Inputs: 520,521
    //Outputs: output
    //Shape:
    //    520: (1, 512)
    //    521: (1, 1)
    //    output: (1, 512)

div_by_scalar(buffer_520, 512, buffer_521, output_output);

}

