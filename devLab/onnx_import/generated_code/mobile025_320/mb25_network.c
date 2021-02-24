#include  "mb25_network.h"

void mb25_network(fp_t **mb25_input_input0, fp_t **mb25_output0, fp_t **mb25_586, fp_t **mb25_585){
    //Layer 0 Conv_0 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: input0,588,589
    //Outputs: 587
    //Shape:
    //    input0: (1, 3, 320, 320)
    //    588: (8, 3, 3, 3)
    //    589: (8,)
    //    587: (1, 8, 160, 160)

const uint16_t Conv_0_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*8/1; i < (g+1)*8/1; i+=1){
        convolution2d_padding_naive(input_input0[g*3/1],
                                    320,
                                    320,
                                    buffer_587[i],
                                    buffer_588[i*3/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_0_padding,
                                    
                                    buffer_589[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*3/1+1; j < (g+1)*3/1; j+=1){
            static fp_t temp_buffer[160*160];
            convolution2d_padding_naive(input_input0[j],
                                        320,
                                        320,
                                        temp_buffer,
                                        buffer_588[i*3/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_0_padding,
                                        0.0);

            add_channel2d_naive(buffer_587[i],
                                temp_buffer,
                                160,
                                160);
            cnt+=1;
        }
        
    }
}

    //Layer 1 LeakyRelu_1 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 587
    //Outputs: 303
    //Shape:
    //    587: (1, 8, 160, 160)
    //    303: (1, 8, 160, 160)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 8; i++) {
leaky_relu_naive(buffer_587[i],
160,
160,
buffer_303[i],
0.10000000149011612);
}

    //Layer 2 Conv_2 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 8
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 303,591,592
    //Outputs: 590
    //Shape:
    //    303: (1, 8, 160, 160)
    //    591: (8, 1, 3, 3)
    //    592: (8,)
    //    590: (1, 8, 160, 160)

const uint16_t Conv_2_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 8; g++) {
    for(uint32_t i = g*8/8; i < (g+1)*8/8; i+=1){
        convolution2d_padding_naive(buffer_303[g*8/8],
                                    160,
                                    160,
                                    buffer_590[i],
                                    buffer_591[i*8/8],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_2_padding,
                                    
                                    buffer_592[i]
                                    );
        
    }
}

    //Layer 3 LeakyRelu_3 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 590
    //Outputs: 306
    //Shape:
    //    590: (1, 8, 160, 160)
    //    306: (1, 8, 160, 160)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 8; i++) {
leaky_relu_naive(buffer_590[i],
160,
160,
buffer_306[i],
0.10000000149011612);
}

    //Layer 4 Conv_4 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 306,594,595
    //Outputs: 593
    //Shape:
    //    306: (1, 8, 160, 160)
    //    594: (16, 8, 1, 1)
    //    595: (16,)
    //    593: (1, 16, 160, 160)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_naive(buffer_306[g*8/1],
                            160,
                            160,
                            buffer_593[i],
                            buffer_594[i*8/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_595[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*8/1+1; j < (g+1)*8/1; j+=1){
            static fp_t temp_buffer[160*160];
            convolution2d_naive(buffer_306[j],
                                160,
                                160,
                                temp_buffer,
                                buffer_594[i*8/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_593[i],
                                temp_buffer,
                                160,
                                160);
            cnt+=1;
        }
        
    }
}

    //Layer 5 LeakyRelu_5 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 593
    //Outputs: 309
    //Shape:
    //    593: (1, 16, 160, 160)
    //    309: (1, 16, 160, 160)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_593[i],
160,
160,
buffer_309[i],
0.10000000149011612);
}

    //Layer 6 Conv_6 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 16
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 309,597,598
    //Outputs: 596
    //Shape:
    //    309: (1, 16, 160, 160)
    //    597: (16, 1, 3, 3)
    //    598: (16,)
    //    596: (1, 16, 80, 80)

const uint16_t Conv_6_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 16; g++) {
    for(uint32_t i = g*16/16; i < (g+1)*16/16; i+=1){
        convolution2d_padding_naive(buffer_309[g*16/16],
                                    160,
                                    160,
                                    buffer_596[i],
                                    buffer_597[i*16/16],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_6_padding,
                                    
                                    buffer_598[i]
                                    );
        
    }
}

    //Layer 7 LeakyRelu_7 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 596
    //Outputs: 312
    //Shape:
    //    596: (1, 16, 80, 80)
    //    312: (1, 16, 80, 80)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_596[i],
80,
80,
buffer_312[i],
0.10000000149011612);
}

    //Layer 8 Conv_8 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 312,600,601
    //Outputs: 599
    //Shape:
    //    312: (1, 16, 80, 80)
    //    600: (32, 16, 1, 1)
    //    601: (32,)
    //    599: (1, 32, 80, 80)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*32/1; i < (g+1)*32/1; i+=1){
        convolution2d_naive(buffer_312[g*16/1],
                            80,
                            80,
                            buffer_599[i],
                            buffer_600[i*16/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_601[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[80*80];
            convolution2d_naive(buffer_312[j],
                                80,
                                80,
                                temp_buffer,
                                buffer_600[i*16/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_599[i],
                                temp_buffer,
                                80,
                                80);
            cnt+=1;
        }
        
    }
}

    //Layer 9 LeakyRelu_9 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 599
    //Outputs: 315
    //Shape:
    //    599: (1, 32, 80, 80)
    //    315: (1, 32, 80, 80)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 32; i++) {
leaky_relu_naive(buffer_599[i],
80,
80,
buffer_315[i],
0.10000000149011612);
}

    //Layer 10 Conv_10 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 32
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 315,603,604
    //Outputs: 602
    //Shape:
    //    315: (1, 32, 80, 80)
    //    603: (32, 1, 3, 3)
    //    604: (32,)
    //    602: (1, 32, 80, 80)

const uint16_t Conv_10_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 32; g++) {
    for(uint32_t i = g*32/32; i < (g+1)*32/32; i+=1){
        convolution2d_padding_naive(buffer_315[g*32/32],
                                    80,
                                    80,
                                    buffer_602[i],
                                    buffer_603[i*32/32],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_10_padding,
                                    
                                    buffer_604[i]
                                    );
        
    }
}

    //Layer 11 LeakyRelu_11 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 602
    //Outputs: 318
    //Shape:
    //    602: (1, 32, 80, 80)
    //    318: (1, 32, 80, 80)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 32; i++) {
leaky_relu_naive(buffer_602[i],
80,
80,
buffer_318[i],
0.10000000149011612);
}

    //Layer 12 Conv_12 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 318,606,607
    //Outputs: 605
    //Shape:
    //    318: (1, 32, 80, 80)
    //    606: (32, 32, 1, 1)
    //    607: (32,)
    //    605: (1, 32, 80, 80)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*32/1; i < (g+1)*32/1; i+=1){
        convolution2d_naive(buffer_318[g*32/1],
                            80,
                            80,
                            buffer_605[i],
                            buffer_606[i*32/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_607[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*32/1+1; j < (g+1)*32/1; j+=1){
            static fp_t temp_buffer[80*80];
            convolution2d_naive(buffer_318[j],
                                80,
                                80,
                                temp_buffer,
                                buffer_606[i*32/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_605[i],
                                temp_buffer,
                                80,
                                80);
            cnt+=1;
        }
        
    }
}

    //Layer 13 LeakyRelu_13 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 605
    //Outputs: 321
    //Shape:
    //    605: (1, 32, 80, 80)
    //    321: (1, 32, 80, 80)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 32; i++) {
leaky_relu_naive(buffer_605[i],
80,
80,
buffer_321[i],
0.10000000149011612);
}

    //Layer 14 Conv_14 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 32
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 321,609,610
    //Outputs: 608
    //Shape:
    //    321: (1, 32, 80, 80)
    //    609: (32, 1, 3, 3)
    //    610: (32,)
    //    608: (1, 32, 40, 40)

const uint16_t Conv_14_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 32; g++) {
    for(uint32_t i = g*32/32; i < (g+1)*32/32; i+=1){
        convolution2d_padding_naive(buffer_321[g*32/32],
                                    80,
                                    80,
                                    buffer_608[i],
                                    buffer_609[i*32/32],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_14_padding,
                                    
                                    buffer_610[i]
                                    );
        
    }
}

    //Layer 15 LeakyRelu_15 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 608
    //Outputs: 324
    //Shape:
    //    608: (1, 32, 40, 40)
    //    324: (1, 32, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 32; i++) {
leaky_relu_naive(buffer_608[i],
40,
40,
buffer_324[i],
0.10000000149011612);
}

    //Layer 16 Conv_16 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 324,612,613
    //Outputs: 611
    //Shape:
    //    324: (1, 32, 40, 40)
    //    612: (64, 32, 1, 1)
    //    613: (64,)
    //    611: (1, 64, 40, 40)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_324[g*32/1],
                            40,
                            40,
                            buffer_611[i],
                            buffer_612[i*32/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_613[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*32/1+1; j < (g+1)*32/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_naive(buffer_324[j],
                                40,
                                40,
                                temp_buffer,
                                buffer_612[i*32/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_611[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 17 LeakyRelu_17 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 611
    //Outputs: 327
    //Shape:
    //    611: (1, 64, 40, 40)
    //    327: (1, 64, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_611[i],
40,
40,
buffer_327[i],
0.10000000149011612);
}

    //Layer 18 Conv_18 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 64
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 327,615,616
    //Outputs: 614
    //Shape:
    //    327: (1, 64, 40, 40)
    //    615: (64, 1, 3, 3)
    //    616: (64,)
    //    614: (1, 64, 40, 40)

const uint16_t Conv_18_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 64; g++) {
    for(uint32_t i = g*64/64; i < (g+1)*64/64; i+=1){
        convolution2d_padding_naive(buffer_327[g*64/64],
                                    40,
                                    40,
                                    buffer_614[i],
                                    buffer_615[i*64/64],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_18_padding,
                                    
                                    buffer_616[i]
                                    );
        
    }
}

    //Layer 19 LeakyRelu_19 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 614
    //Outputs: 330
    //Shape:
    //    614: (1, 64, 40, 40)
    //    330: (1, 64, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_614[i],
40,
40,
buffer_330[i],
0.10000000149011612);
}

    //Layer 20 Conv_20 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 330,618,619
    //Outputs: 617
    //Shape:
    //    330: (1, 64, 40, 40)
    //    618: (64, 64, 1, 1)
    //    619: (64,)
    //    617: (1, 64, 40, 40)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_330[g*64/1],
                            40,
                            40,
                            buffer_617[i],
                            buffer_618[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_619[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_naive(buffer_330[j],
                                40,
                                40,
                                temp_buffer,
                                buffer_618[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_617[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 21 LeakyRelu_21 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 617
    //Outputs: 333
    //Shape:
    //    617: (1, 64, 40, 40)
    //    333: (1, 64, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_617[i],
40,
40,
buffer_333[i],
0.10000000149011612);
}

    //Layer 22 Conv_22 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 64
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 333,621,622
    //Outputs: 620
    //Shape:
    //    333: (1, 64, 40, 40)
    //    621: (64, 1, 3, 3)
    //    622: (64,)
    //    620: (1, 64, 20, 20)

const uint16_t Conv_22_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 64; g++) {
    for(uint32_t i = g*64/64; i < (g+1)*64/64; i+=1){
        convolution2d_padding_naive(buffer_333[g*64/64],
                                    40,
                                    40,
                                    buffer_620[i],
                                    buffer_621[i*64/64],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_22_padding,
                                    
                                    buffer_622[i]
                                    );
        
    }
}

    //Layer 23 LeakyRelu_23 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 620
    //Outputs: 336
    //Shape:
    //    620: (1, 64, 20, 20)
    //    336: (1, 64, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_620[i],
20,
20,
buffer_336[i],
0.10000000149011612);
}

    //Layer 24 Conv_24 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 336,624,625
    //Outputs: 623
    //Shape:
    //    336: (1, 64, 20, 20)
    //    624: (128, 64, 1, 1)
    //    625: (128,)
    //    623: (1, 128, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_336[g*64/1],
                            20,
                            20,
                            buffer_623[i],
                            buffer_624[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_625[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_336[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_624[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_623[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 25 LeakyRelu_25 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 623
    //Outputs: 339
    //Shape:
    //    623: (1, 128, 20, 20)
    //    339: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_623[i],
20,
20,
buffer_339[i],
0.10000000149011612);
}

    //Layer 26 Conv_26 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 339,627,628
    //Outputs: 626
    //Shape:
    //    339: (1, 128, 20, 20)
    //    627: (128, 1, 3, 3)
    //    628: (128,)
    //    626: (1, 128, 20, 20)

const uint16_t Conv_26_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_339[g*128/128],
                                    20,
                                    20,
                                    buffer_626[i],
                                    buffer_627[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_26_padding,
                                    
                                    buffer_628[i]
                                    );
        
    }
}

    //Layer 27 LeakyRelu_27 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 626
    //Outputs: 342
    //Shape:
    //    626: (1, 128, 20, 20)
    //    342: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_626[i],
20,
20,
buffer_342[i],
0.10000000149011612);
}

    //Layer 28 Conv_28 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 342,630,631
    //Outputs: 629
    //Shape:
    //    342: (1, 128, 20, 20)
    //    630: (128, 128, 1, 1)
    //    631: (128,)
    //    629: (1, 128, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_342[g*128/1],
                            20,
                            20,
                            buffer_629[i],
                            buffer_630[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_631[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_342[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_630[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_629[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 29 LeakyRelu_29 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 629
    //Outputs: 345
    //Shape:
    //    629: (1, 128, 20, 20)
    //    345: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_629[i],
20,
20,
buffer_345[i],
0.10000000149011612);
}

    //Layer 30 Conv_30 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 345,633,634
    //Outputs: 632
    //Shape:
    //    345: (1, 128, 20, 20)
    //    633: (128, 1, 3, 3)
    //    634: (128,)
    //    632: (1, 128, 20, 20)

const uint16_t Conv_30_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_345[g*128/128],
                                    20,
                                    20,
                                    buffer_632[i],
                                    buffer_633[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_30_padding,
                                    
                                    buffer_634[i]
                                    );
        
    }
}

    //Layer 31 LeakyRelu_31 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 632
    //Outputs: 348
    //Shape:
    //    632: (1, 128, 20, 20)
    //    348: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_632[i],
20,
20,
buffer_348[i],
0.10000000149011612);
}

    //Layer 32 Conv_32 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 348,636,637
    //Outputs: 635
    //Shape:
    //    348: (1, 128, 20, 20)
    //    636: (128, 128, 1, 1)
    //    637: (128,)
    //    635: (1, 128, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_348[g*128/1],
                            20,
                            20,
                            buffer_635[i],
                            buffer_636[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_637[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_348[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_636[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_635[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 33 LeakyRelu_33 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 635
    //Outputs: 351
    //Shape:
    //    635: (1, 128, 20, 20)
    //    351: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_635[i],
20,
20,
buffer_351[i],
0.10000000149011612);
}

    //Layer 34 Conv_34 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 351,639,640
    //Outputs: 638
    //Shape:
    //    351: (1, 128, 20, 20)
    //    639: (128, 1, 3, 3)
    //    640: (128,)
    //    638: (1, 128, 20, 20)

const uint16_t Conv_34_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_351[g*128/128],
                                    20,
                                    20,
                                    buffer_638[i],
                                    buffer_639[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_34_padding,
                                    
                                    buffer_640[i]
                                    );
        
    }
}

    //Layer 35 LeakyRelu_35 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 638
    //Outputs: 354
    //Shape:
    //    638: (1, 128, 20, 20)
    //    354: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_638[i],
20,
20,
buffer_354[i],
0.10000000149011612);
}

    //Layer 36 Conv_36 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 354,642,643
    //Outputs: 641
    //Shape:
    //    354: (1, 128, 20, 20)
    //    642: (128, 128, 1, 1)
    //    643: (128,)
    //    641: (1, 128, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_354[g*128/1],
                            20,
                            20,
                            buffer_641[i],
                            buffer_642[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_643[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_354[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_642[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_641[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 37 LeakyRelu_37 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 641
    //Outputs: 357
    //Shape:
    //    641: (1, 128, 20, 20)
    //    357: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_641[i],
20,
20,
buffer_357[i],
0.10000000149011612);
}

    //Layer 38 Conv_38 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 357,645,646
    //Outputs: 644
    //Shape:
    //    357: (1, 128, 20, 20)
    //    645: (128, 1, 3, 3)
    //    646: (128,)
    //    644: (1, 128, 20, 20)

const uint16_t Conv_38_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_357[g*128/128],
                                    20,
                                    20,
                                    buffer_644[i],
                                    buffer_645[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_38_padding,
                                    
                                    buffer_646[i]
                                    );
        
    }
}

    //Layer 39 LeakyRelu_39 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 644
    //Outputs: 360
    //Shape:
    //    644: (1, 128, 20, 20)
    //    360: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_644[i],
20,
20,
buffer_360[i],
0.10000000149011612);
}

    //Layer 40 Conv_40 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 360,648,649
    //Outputs: 647
    //Shape:
    //    360: (1, 128, 20, 20)
    //    648: (128, 128, 1, 1)
    //    649: (128,)
    //    647: (1, 128, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_360[g*128/1],
                            20,
                            20,
                            buffer_647[i],
                            buffer_648[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_649[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_360[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_648[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_647[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 41 LeakyRelu_41 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 647
    //Outputs: 363
    //Shape:
    //    647: (1, 128, 20, 20)
    //    363: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_647[i],
20,
20,
buffer_363[i],
0.10000000149011612);
}

    //Layer 42 Conv_42 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 363,651,652
    //Outputs: 650
    //Shape:
    //    363: (1, 128, 20, 20)
    //    651: (128, 1, 3, 3)
    //    652: (128,)
    //    650: (1, 128, 20, 20)

const uint16_t Conv_42_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_363[g*128/128],
                                    20,
                                    20,
                                    buffer_650[i],
                                    buffer_651[i*128/128],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_42_padding,
                                    
                                    buffer_652[i]
                                    );
        
    }
}

    //Layer 43 LeakyRelu_43 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 650
    //Outputs: 366
    //Shape:
    //    650: (1, 128, 20, 20)
    //    366: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_650[i],
20,
20,
buffer_366[i],
0.10000000149011612);
}

    //Layer 44 Conv_44 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 366,654,655
    //Outputs: 653
    //Shape:
    //    366: (1, 128, 20, 20)
    //    654: (128, 128, 1, 1)
    //    655: (128,)
    //    653: (1, 128, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*128/1; i < (g+1)*128/1; i+=1){
        convolution2d_naive(buffer_366[g*128/1],
                            20,
                            20,
                            buffer_653[i],
                            buffer_654[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_655[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_366[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_654[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_653[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 45 LeakyRelu_45 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 653
    //Outputs: 369
    //Shape:
    //    653: (1, 128, 20, 20)
    //    369: (1, 128, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_653[i],
20,
20,
buffer_369[i],
0.10000000149011612);
}

    //Layer 46 Conv_46 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 128
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [2, 2]
    //Parameters
    //Inputs: 369,657,658
    //Outputs: 656
    //Shape:
    //    369: (1, 128, 20, 20)
    //    657: (128, 1, 3, 3)
    //    658: (128,)
    //    656: (1, 128, 10, 10)

const uint16_t Conv_46_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 128; g++) {
    for(uint32_t i = g*128/128; i < (g+1)*128/128; i+=1){
        convolution2d_padding_naive(buffer_369[g*128/128],
                                    20,
                                    20,
                                    buffer_656[i],
                                    buffer_657[i*128/128],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_46_padding,
                                    
                                    buffer_658[i]
                                    );
        
    }
}

    //Layer 47 LeakyRelu_47 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 656
    //Outputs: 372
    //Shape:
    //    656: (1, 128, 10, 10)
    //    372: (1, 128, 10, 10)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 128; i++) {
leaky_relu_naive(buffer_656[i],
10,
10,
buffer_372[i],
0.10000000149011612);
}

    //Layer 48 Conv_48 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 372,660,661
    //Outputs: 659
    //Shape:
    //    372: (1, 128, 10, 10)
    //    660: (256, 128, 1, 1)
    //    661: (256,)
    //    659: (1, 256, 10, 10)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_372[g*128/1],
                            10,
                            10,
                            buffer_659[i],
                            buffer_660[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_661[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_naive(buffer_372[j],
                                10,
                                10,
                                temp_buffer,
                                buffer_660[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_659[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 49 LeakyRelu_49 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 659
    //Outputs: 375
    //Shape:
    //    659: (1, 256, 10, 10)
    //    375: (1, 256, 10, 10)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 256; i++) {
leaky_relu_naive(buffer_659[i],
10,
10,
buffer_375[i],
0.10000000149011612);
}

    //Layer 50 Conv_50 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 256
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 375,663,664
    //Outputs: 662
    //Shape:
    //    375: (1, 256, 10, 10)
    //    663: (256, 1, 3, 3)
    //    664: (256,)
    //    662: (1, 256, 10, 10)

const uint16_t Conv_50_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 256; g++) {
    for(uint32_t i = g*256/256; i < (g+1)*256/256; i+=1){
        convolution2d_padding_naive(buffer_375[g*256/256],
                                    10,
                                    10,
                                    buffer_662[i],
                                    buffer_663[i*256/256],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_50_padding,
                                    
                                    buffer_664[i]
                                    );
        
    }
}

    //Layer 51 LeakyRelu_51 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 662
    //Outputs: 378
    //Shape:
    //    662: (1, 256, 10, 10)
    //    378: (1, 256, 10, 10)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 256; i++) {
leaky_relu_naive(buffer_662[i],
10,
10,
buffer_378[i],
0.10000000149011612);
}

    //Layer 52 Conv_52 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 378,666,667
    //Outputs: 665
    //Shape:
    //    378: (1, 256, 10, 10)
    //    666: (256, 256, 1, 1)
    //    667: (256,)
    //    665: (1, 256, 10, 10)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*256/1; i < (g+1)*256/1; i+=1){
        convolution2d_naive(buffer_378[g*256/1],
                            10,
                            10,
                            buffer_665[i],
                            buffer_666[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_667[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_naive(buffer_378[j],
                                10,
                                10,
                                temp_buffer,
                                buffer_666[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_665[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 53 LeakyRelu_53 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 665
    //Outputs: 381
    //Shape:
    //    665: (1, 256, 10, 10)
    //    381: (1, 256, 10, 10)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 256; i++) {
leaky_relu_naive(buffer_665[i],
10,
10,
buffer_381[i],
0.10000000149011612);
}

    //Layer 54 Conv_54 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 333,669,670
    //Outputs: 668
    //Shape:
    //    333: (1, 64, 40, 40)
    //    669: (64, 64, 1, 1)
    //    670: (64,)
    //    668: (1, 64, 40, 40)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_333[g*64/1],
                            40,
                            40,
                            buffer_668[i],
                            buffer_669[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_670[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_naive(buffer_333[j],
                                40,
                                40,
                                temp_buffer,
                                buffer_669[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_668[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 55 LeakyRelu_55 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 668
    //Outputs: 384
    //Shape:
    //    668: (1, 64, 40, 40)
    //    384: (1, 64, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_668[i],
40,
40,
buffer_384[i],
0.10000000149011612);
}

    //Layer 56 Conv_56 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 369,672,673
    //Outputs: 671
    //Shape:
    //    369: (1, 128, 20, 20)
    //    672: (64, 128, 1, 1)
    //    673: (64,)
    //    671: (1, 64, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_369[g*128/1],
                            20,
                            20,
                            buffer_671[i],
                            buffer_672[i*128/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_673[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*128/1+1; j < (g+1)*128/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_369[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_672[i*128/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_671[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 57 LeakyRelu_57 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 671
    //Outputs: 387
    //Shape:
    //    671: (1, 64, 20, 20)
    //    387: (1, 64, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_671[i],
20,
20,
buffer_387[i],
0.10000000149011612);
}

    //Layer 58 Conv_58 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 381,675,676
    //Outputs: 674
    //Shape:
    //    381: (1, 256, 10, 10)
    //    675: (64, 256, 1, 1)
    //    676: (64,)
    //    674: (1, 64, 10, 10)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_naive(buffer_381[g*256/1],
                            10,
                            10,
                            buffer_674[i],
                            buffer_675[i*256/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_676[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*256/1+1; j < (g+1)*256/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_naive(buffer_381[j],
                                10,
                                10,
                                temp_buffer,
                                buffer_675[i*256/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_674[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 59 LeakyRelu_59 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 674
    //Outputs: 390
    //Shape:
    //    674: (1, 64, 10, 10)
    //    390: (1, 64, 10, 10)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_674[i],
10,
10,
buffer_390[i],
0.10000000149011612);
}

    //Layer 60 Upsample_76 Upsample
    //Attributes
    //  mode: b'nearest'
    //Parameters
    //Inputs: 390,400
    //Outputs: 407
    //Shape:
    //    390: (1, 64, 10, 10)
    //    400: (2,)
    //    407: (1, 64, 20, 20)
//
// Created by ali on 15.01.2021.
//

for (uint32_t i = 0; i < 64; i++) {
upsampling_2D_nearest_neighbour(buffer_390[i],
20,
20,
2.0,
buffer_407[i]);
}


// upsampling_2D_nearest_neighbour
    //Layer 61 Add_77 Add
    //Attributes
    //Parameters
    //Inputs: 387,407
    //Outputs: 408
    //Shape:
    //    387: (1, 64, 20, 20)
    //    407: (1, 64, 20, 20)
    //    408: (1, 64, 20, 20)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_408[i],
               buffer_387[i],
               20*20*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_408[i], buffer_407[i], 20, 20);
    }


    //Layer 62 Conv_78 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 408,678,679
    //Outputs: 677
    //Shape:
    //    408: (1, 64, 20, 20)
    //    678: (64, 64, 3, 3)
    //    679: (64,)
    //    677: (1, 64, 20, 20)

const uint16_t Conv_78_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_408[g*64/1],
                                    20,
                                    20,
                                    buffer_677[i],
                                    buffer_678[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_78_padding,
                                    
                                    buffer_679[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_padding_naive(buffer_408[j],
                                        20,
                                        20,
                                        temp_buffer,
                                        buffer_678[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_78_padding,
                                        0.0);

            add_channel2d_naive(buffer_677[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 63 LeakyRelu_79 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 677
    //Outputs: 411
    //Shape:
    //    677: (1, 64, 20, 20)
    //    411: (1, 64, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_677[i],
20,
20,
buffer_411[i],
0.10000000149011612);
}

    //Layer 64 Upsample_96 Upsample
    //Attributes
    //  mode: b'nearest'
    //Parameters
    //Inputs: 411,421
    //Outputs: 428
    //Shape:
    //    411: (1, 64, 20, 20)
    //    421: (2,)
    //    428: (1, 64, 40, 40)
//
// Created by ali on 15.01.2021.
//

for (uint32_t i = 0; i < 64; i++) {
upsampling_2D_nearest_neighbour(buffer_411[i],
40,
40,
2.0,
buffer_428[i]);
}


// upsampling_2D_nearest_neighbour
    //Layer 65 Add_97 Add
    //Attributes
    //Parameters
    //Inputs: 384,428
    //Outputs: 429
    //Shape:
    //    384: (1, 64, 40, 40)
    //    428: (1, 64, 40, 40)
    //    429: (1, 64, 40, 40)

    for(uint32_t i = 0; i < 64; i++){
        memcpy(buffer_429[i],
               buffer_384[i],
               40*40*sizeof(fp_t));
    }

    for(uint32_t i = 0; i < 64; i++){
        add_channel2d_naive(buffer_429[i], buffer_428[i], 40, 40);
    }


    //Layer 66 Conv_98 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 429,681,682
    //Outputs: 680
    //Shape:
    //    429: (1, 64, 40, 40)
    //    681: (64, 64, 3, 3)
    //    682: (64,)
    //    680: (1, 64, 40, 40)

const uint16_t Conv_98_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(buffer_429[g*64/1],
                                    40,
                                    40,
                                    buffer_680[i],
                                    buffer_681[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_98_padding,
                                    
                                    buffer_682[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_padding_naive(buffer_429[j],
                                        40,
                                        40,
                                        temp_buffer,
                                        buffer_681[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_98_padding,
                                        0.0);

            add_channel2d_naive(buffer_680[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 67 LeakyRelu_99 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 680
    //Outputs: 432
    //Shape:
    //    680: (1, 64, 40, 40)
    //    432: (1, 64, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 64; i++) {
leaky_relu_naive(buffer_680[i],
40,
40,
buffer_432[i],
0.10000000149011612);
}

    //Layer 68 Conv_100 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 432,684,685
    //Outputs: 683
    //Shape:
    //    432: (1, 64, 40, 40)
    //    684: (32, 64, 3, 3)
    //    685: (32,)
    //    683: (1, 32, 40, 40)

const uint16_t Conv_100_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*32/1; i < (g+1)*32/1; i+=1){
        convolution2d_padding_naive(buffer_432[g*64/1],
                                    40,
                                    40,
                                    buffer_683[i],
                                    buffer_684[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_100_padding,
                                    
                                    buffer_685[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_padding_naive(buffer_432[j],
                                        40,
                                        40,
                                        temp_buffer,
                                        buffer_684[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_100_padding,
                                        0.0);

            add_channel2d_naive(buffer_683[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 69 Conv_101 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 432,687,688
    //Outputs: 686
    //Shape:
    //    432: (1, 64, 40, 40)
    //    687: (16, 64, 3, 3)
    //    688: (16,)
    //    686: (1, 16, 40, 40)

const uint16_t Conv_101_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_432[g*64/1],
                                    40,
                                    40,
                                    buffer_686[i],
                                    buffer_687[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_101_padding,
                                    
                                    buffer_688[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_padding_naive(buffer_432[j],
                                        40,
                                        40,
                                        temp_buffer,
                                        buffer_687[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_101_padding,
                                        0.0);

            add_channel2d_naive(buffer_686[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 70 LeakyRelu_102 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 686
    //Outputs: 437
    //Shape:
    //    686: (1, 16, 40, 40)
    //    437: (1, 16, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_686[i],
40,
40,
buffer_437[i],
0.10000000149011612);
}

    //Layer 71 Conv_103 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 437,690,691
    //Outputs: 689
    //Shape:
    //    437: (1, 16, 40, 40)
    //    690: (16, 16, 3, 3)
    //    691: (16,)
    //    689: (1, 16, 40, 40)

const uint16_t Conv_103_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_437[g*16/1],
                                    40,
                                    40,
                                    buffer_689[i],
                                    buffer_690[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_103_padding,
                                    
                                    buffer_691[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_padding_naive(buffer_437[j],
                                        40,
                                        40,
                                        temp_buffer,
                                        buffer_690[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_103_padding,
                                        0.0);

            add_channel2d_naive(buffer_689[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 72 Conv_104 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 437,693,694
    //Outputs: 692
    //Shape:
    //    437: (1, 16, 40, 40)
    //    693: (16, 16, 3, 3)
    //    694: (16,)
    //    692: (1, 16, 40, 40)

const uint16_t Conv_104_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_437[g*16/1],
                                    40,
                                    40,
                                    buffer_692[i],
                                    buffer_693[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_104_padding,
                                    
                                    buffer_694[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_padding_naive(buffer_437[j],
                                        40,
                                        40,
                                        temp_buffer,
                                        buffer_693[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_104_padding,
                                        0.0);

            add_channel2d_naive(buffer_692[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 73 LeakyRelu_105 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 692
    //Outputs: 442
    //Shape:
    //    692: (1, 16, 40, 40)
    //    442: (1, 16, 40, 40)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_692[i],
40,
40,
buffer_442[i],
0.10000000149011612);
}

    //Layer 74 Conv_106 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 442,696,697
    //Outputs: 695
    //Shape:
    //    442: (1, 16, 40, 40)
    //    696: (16, 16, 3, 3)
    //    697: (16,)
    //    695: (1, 16, 40, 40)

const uint16_t Conv_106_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_442[g*16/1],
                                    40,
                                    40,
                                    buffer_695[i],
                                    buffer_696[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_106_padding,
                                    
                                    buffer_697[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_padding_naive(buffer_442[j],
                                        40,
                                        40,
                                        temp_buffer,
                                        buffer_696[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_106_padding,
                                        0.0);

            add_channel2d_naive(buffer_695[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 75 Concat_107 Concat
    //Attributes
    //  axis: 1
    //Parameters
    //Inputs: 683,689,695
    //Outputs: 445
    //Shape:
    //    683: (1, 32, 40, 40)
    //    689: (1, 16, 40, 40)
    //    695: (1, 16, 40, 40)
    //    445: (1, 64, 40, 40)
    fp_t*** inputs_Concat_107 = (fp_t***) malloc(3 * sizeof(fp_t**));
    inputs_Concat_107[0] = buffer_683;
    inputs_Concat_107[1] = buffer_689;
    inputs_Concat_107[2] = buffer_695;


    const uint16_t* input_shape_Concat_107[3];
    uint16_t input_shape_Concat_107_0[3] = { 32, 40, 40 };
    input_shape_Concat_107[0] = input_shape_Concat_107_0;
    uint16_t input_shape_Concat_107_1[3] = { 16, 40, 40 };
    input_shape_Concat_107[1] = input_shape_Concat_107_1;
    uint16_t input_shape_Concat_107_2[3] = { 16, 40, 40 };
    input_shape_Concat_107[2] = input_shape_Concat_107_2;


    concatenate_naive(inputs_Concat_107, input_shape_Concat_107, 0,
                      3, buffer_445);

    free(inputs_Concat_107);

    //Layer 76 Relu_108 Relu
    //Attributes
    //Parameters
    //Inputs: 445
    //Outputs: 446
    //Shape:
    //    445: (1, 64, 40, 40)
    //    446: (1, 64, 40, 40)

for (uint32_t i = 0; i < 64; i++) {
    relu_naive(buffer_445[i],
               40,
               40,
               buffer_446[i]);
}

    //Layer 77 Conv_109 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 411,699,700
    //Outputs: 698
    //Shape:
    //    411: (1, 64, 20, 20)
    //    699: (32, 64, 3, 3)
    //    700: (32,)
    //    698: (1, 32, 20, 20)

const uint16_t Conv_109_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*32/1; i < (g+1)*32/1; i+=1){
        convolution2d_padding_naive(buffer_411[g*64/1],
                                    20,
                                    20,
                                    buffer_698[i],
                                    buffer_699[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_109_padding,
                                    
                                    buffer_700[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_padding_naive(buffer_411[j],
                                        20,
                                        20,
                                        temp_buffer,
                                        buffer_699[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_109_padding,
                                        0.0);

            add_channel2d_naive(buffer_698[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 78 Conv_110 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 411,702,703
    //Outputs: 701
    //Shape:
    //    411: (1, 64, 20, 20)
    //    702: (16, 64, 3, 3)
    //    703: (16,)
    //    701: (1, 16, 20, 20)

const uint16_t Conv_110_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_411[g*64/1],
                                    20,
                                    20,
                                    buffer_701[i],
                                    buffer_702[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_110_padding,
                                    
                                    buffer_703[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_padding_naive(buffer_411[j],
                                        20,
                                        20,
                                        temp_buffer,
                                        buffer_702[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_110_padding,
                                        0.0);

            add_channel2d_naive(buffer_701[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 79 LeakyRelu_111 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 701
    //Outputs: 451
    //Shape:
    //    701: (1, 16, 20, 20)
    //    451: (1, 16, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_701[i],
20,
20,
buffer_451[i],
0.10000000149011612);
}

    //Layer 80 Conv_112 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 451,705,706
    //Outputs: 704
    //Shape:
    //    451: (1, 16, 20, 20)
    //    705: (16, 16, 3, 3)
    //    706: (16,)
    //    704: (1, 16, 20, 20)

const uint16_t Conv_112_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_451[g*16/1],
                                    20,
                                    20,
                                    buffer_704[i],
                                    buffer_705[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_112_padding,
                                    
                                    buffer_706[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_padding_naive(buffer_451[j],
                                        20,
                                        20,
                                        temp_buffer,
                                        buffer_705[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_112_padding,
                                        0.0);

            add_channel2d_naive(buffer_704[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 81 Conv_113 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 451,708,709
    //Outputs: 707
    //Shape:
    //    451: (1, 16, 20, 20)
    //    708: (16, 16, 3, 3)
    //    709: (16,)
    //    707: (1, 16, 20, 20)

const uint16_t Conv_113_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_451[g*16/1],
                                    20,
                                    20,
                                    buffer_707[i],
                                    buffer_708[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_113_padding,
                                    
                                    buffer_709[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_padding_naive(buffer_451[j],
                                        20,
                                        20,
                                        temp_buffer,
                                        buffer_708[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_113_padding,
                                        0.0);

            add_channel2d_naive(buffer_707[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 82 LeakyRelu_114 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 707
    //Outputs: 456
    //Shape:
    //    707: (1, 16, 20, 20)
    //    456: (1, 16, 20, 20)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_707[i],
20,
20,
buffer_456[i],
0.10000000149011612);
}

    //Layer 83 Conv_115 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 456,711,712
    //Outputs: 710
    //Shape:
    //    456: (1, 16, 20, 20)
    //    711: (16, 16, 3, 3)
    //    712: (16,)
    //    710: (1, 16, 20, 20)

const uint16_t Conv_115_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_456[g*16/1],
                                    20,
                                    20,
                                    buffer_710[i],
                                    buffer_711[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_115_padding,
                                    
                                    buffer_712[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_padding_naive(buffer_456[j],
                                        20,
                                        20,
                                        temp_buffer,
                                        buffer_711[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_115_padding,
                                        0.0);

            add_channel2d_naive(buffer_710[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 84 Concat_116 Concat
    //Attributes
    //  axis: 1
    //Parameters
    //Inputs: 698,704,710
    //Outputs: 459
    //Shape:
    //    698: (1, 32, 20, 20)
    //    704: (1, 16, 20, 20)
    //    710: (1, 16, 20, 20)
    //    459: (1, 64, 20, 20)
    fp_t*** inputs_Concat_116 = (fp_t***) malloc(3 * sizeof(fp_t**));
    inputs_Concat_116[0] = buffer_698;
    inputs_Concat_116[1] = buffer_704;
    inputs_Concat_116[2] = buffer_710;


    const uint16_t* input_shape_Concat_116[3];
    uint16_t input_shape_Concat_116_0[3] = { 32, 20, 20 };
    input_shape_Concat_116[0] = input_shape_Concat_116_0;
    uint16_t input_shape_Concat_116_1[3] = { 16, 20, 20 };
    input_shape_Concat_116[1] = input_shape_Concat_116_1;
    uint16_t input_shape_Concat_116_2[3] = { 16, 20, 20 };
    input_shape_Concat_116[2] = input_shape_Concat_116_2;


    concatenate_naive(inputs_Concat_116, input_shape_Concat_116, 0,
                      3, buffer_459);

    free(inputs_Concat_116);

    //Layer 85 Relu_117 Relu
    //Attributes
    //Parameters
    //Inputs: 459
    //Outputs: 460
    //Shape:
    //    459: (1, 64, 20, 20)
    //    460: (1, 64, 20, 20)

for (uint32_t i = 0; i < 64; i++) {
    relu_naive(buffer_459[i],
               20,
               20,
               buffer_460[i]);
}

    //Layer 86 Conv_118 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 390,714,715
    //Outputs: 713
    //Shape:
    //    390: (1, 64, 10, 10)
    //    714: (32, 64, 3, 3)
    //    715: (32,)
    //    713: (1, 32, 10, 10)

const uint16_t Conv_118_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*32/1; i < (g+1)*32/1; i+=1){
        convolution2d_padding_naive(buffer_390[g*64/1],
                                    10,
                                    10,
                                    buffer_713[i],
                                    buffer_714[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_118_padding,
                                    
                                    buffer_715[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_padding_naive(buffer_390[j],
                                        10,
                                        10,
                                        temp_buffer,
                                        buffer_714[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_118_padding,
                                        0.0);

            add_channel2d_naive(buffer_713[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 87 Conv_119 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 390,717,718
    //Outputs: 716
    //Shape:
    //    390: (1, 64, 10, 10)
    //    717: (16, 64, 3, 3)
    //    718: (16,)
    //    716: (1, 16, 10, 10)

const uint16_t Conv_119_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_390[g*64/1],
                                    10,
                                    10,
                                    buffer_716[i],
                                    buffer_717[i*64/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_119_padding,
                                    
                                    buffer_718[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_padding_naive(buffer_390[j],
                                        10,
                                        10,
                                        temp_buffer,
                                        buffer_717[i*64/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_119_padding,
                                        0.0);

            add_channel2d_naive(buffer_716[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 88 LeakyRelu_120 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 716
    //Outputs: 465
    //Shape:
    //    716: (1, 16, 10, 10)
    //    465: (1, 16, 10, 10)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_716[i],
10,
10,
buffer_465[i],
0.10000000149011612);
}

    //Layer 89 Conv_121 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 465,720,721
    //Outputs: 719
    //Shape:
    //    465: (1, 16, 10, 10)
    //    720: (16, 16, 3, 3)
    //    721: (16,)
    //    719: (1, 16, 10, 10)

const uint16_t Conv_121_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_465[g*16/1],
                                    10,
                                    10,
                                    buffer_719[i],
                                    buffer_720[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_121_padding,
                                    
                                    buffer_721[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_padding_naive(buffer_465[j],
                                        10,
                                        10,
                                        temp_buffer,
                                        buffer_720[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_121_padding,
                                        0.0);

            add_channel2d_naive(buffer_719[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 90 Conv_122 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 465,723,724
    //Outputs: 722
    //Shape:
    //    465: (1, 16, 10, 10)
    //    723: (16, 16, 3, 3)
    //    724: (16,)
    //    722: (1, 16, 10, 10)

const uint16_t Conv_122_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_465[g*16/1],
                                    10,
                                    10,
                                    buffer_722[i],
                                    buffer_723[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_122_padding,
                                    
                                    buffer_724[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_padding_naive(buffer_465[j],
                                        10,
                                        10,
                                        temp_buffer,
                                        buffer_723[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_122_padding,
                                        0.0);

            add_channel2d_naive(buffer_722[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 91 LeakyRelu_123 LeakyRelu
    //Attributes
    //  alpha: 0.10000000149011612
    //Parameters
    //Inputs: 722
    //Outputs: 470
    //Shape:
    //    722: (1, 16, 10, 10)
    //    470: (1, 16, 10, 10)
//
// Created by ali on 15.01.2021.
//


for (uint32_t i = 0; i < 16; i++) {
leaky_relu_naive(buffer_722[i],
10,
10,
buffer_470[i],
0.10000000149011612);
}

    //Layer 92 Conv_124 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [3, 3]
    //  pads: [1, 1, 1, 1]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 470,726,727
    //Outputs: 725
    //Shape:
    //    470: (1, 16, 10, 10)
    //    726: (16, 16, 3, 3)
    //    727: (16,)
    //    725: (1, 16, 10, 10)

const uint16_t Conv_124_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*16/1; i < (g+1)*16/1; i+=1){
        convolution2d_padding_naive(buffer_470[g*16/1],
                                    10,
                                    10,
                                    buffer_725[i],
                                    buffer_726[i*16/1],
                                    3,
                                    3,
                                    1,
                                    1,
                                    Conv_124_padding,
                                    
                                    buffer_727[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*16/1+1; j < (g+1)*16/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_padding_naive(buffer_470[j],
                                        10,
                                        10,
                                        temp_buffer,
                                        buffer_726[i*16/1+cnt],
                                        3,
                                        3,
                                        1,
                                        1,
                                        Conv_124_padding,
                                        0.0);

            add_channel2d_naive(buffer_725[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 93 Concat_125 Concat
    //Attributes
    //  axis: 1
    //Parameters
    //Inputs: 713,719,725
    //Outputs: 473
    //Shape:
    //    713: (1, 32, 10, 10)
    //    719: (1, 16, 10, 10)
    //    725: (1, 16, 10, 10)
    //    473: (1, 64, 10, 10)
    fp_t*** inputs_Concat_125 = (fp_t***) malloc(3 * sizeof(fp_t**));
    inputs_Concat_125[0] = buffer_713;
    inputs_Concat_125[1] = buffer_719;
    inputs_Concat_125[2] = buffer_725;


    const uint16_t* input_shape_Concat_125[3];
    uint16_t input_shape_Concat_125_0[3] = { 32, 10, 10 };
    input_shape_Concat_125[0] = input_shape_Concat_125_0;
    uint16_t input_shape_Concat_125_1[3] = { 16, 10, 10 };
    input_shape_Concat_125[1] = input_shape_Concat_125_1;
    uint16_t input_shape_Concat_125_2[3] = { 16, 10, 10 };
    input_shape_Concat_125[2] = input_shape_Concat_125_2;


    concatenate_naive(inputs_Concat_125, input_shape_Concat_125, 0,
                      3, buffer_473);

    free(inputs_Concat_125);

    //Layer 94 Relu_126 Relu
    //Attributes
    //Parameters
    //Inputs: 473
    //Outputs: 474
    //Shape:
    //    473: (1, 64, 10, 10)
    //    474: (1, 64, 10, 10)

for (uint32_t i = 0; i < 64; i++) {
    relu_naive(buffer_473[i],
               10,
               10,
               buffer_474[i]);
}

    //Layer 95 Conv_127 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 446,289,290
    //Outputs: 475
    //Shape:
    //    446: (1, 64, 40, 40)
    //    289: (8, 64, 1, 1)
    //    290: (8,)
    //    475: (1, 8, 40, 40)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*8/1; i < (g+1)*8/1; i+=1){
        convolution2d_naive(buffer_446[g*64/1],
                            40,
                            40,
                            buffer_475[i],
                            buffer_289[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_290[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_naive(buffer_446[j],
                                40,
                                40,
                                temp_buffer,
                                buffer_289[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_475[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 96 Transpose_128 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 475
    //Outputs: 476
    //Shape:
    //    475: (1, 8, 40, 40)
    //    476: (1, 40, 40, 8)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 8; dim1++)
            for(uint32_t dim2 = 0; dim2 < 40; dim2++)
                for(uint32_t dim3 = 0; dim3 < 40; dim3++)
                    buffer_476[dim2][dim3*8 + dim1] = buffer_475[dim1][dim2*40 + dim3];
}
    //Layer 97 Reshape_134 Reshape
    //Attributes
    //Parameters
    //Inputs: 476,485
    //Outputs: 486
    //Shape:
    //    476: (1, 40, 40, 8)
    //    485: (3,)
    //    486: (1, 3200, 4)

for(uint32_t i = 0; i < 40; i++){
    memcpy(&buffer_486[i*40*8],
           buffer_476[i],
           40*8*sizeof(fp_t));
}

    //Layer 98 Conv_135 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 460,291,292
    //Outputs: 487
    //Shape:
    //    460: (1, 64, 20, 20)
    //    291: (8, 64, 1, 1)
    //    292: (8,)
    //    487: (1, 8, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*8/1; i < (g+1)*8/1; i+=1){
        convolution2d_naive(buffer_460[g*64/1],
                            20,
                            20,
                            buffer_487[i],
                            buffer_291[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_292[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_460[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_291[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_487[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 99 Transpose_136 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 487
    //Outputs: 488
    //Shape:
    //    487: (1, 8, 20, 20)
    //    488: (1, 20, 20, 8)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 8; dim1++)
            for(uint32_t dim2 = 0; dim2 < 20; dim2++)
                for(uint32_t dim3 = 0; dim3 < 20; dim3++)
                    buffer_488[dim2][dim3*8 + dim1] = buffer_487[dim1][dim2*20 + dim3];
}
    //Layer 100 Reshape_142 Reshape
    //Attributes
    //Parameters
    //Inputs: 488,497
    //Outputs: 498
    //Shape:
    //    488: (1, 20, 20, 8)
    //    497: (3,)
    //    498: (1, 800, 4)

for(uint32_t i = 0; i < 20; i++){
    memcpy(&buffer_498[i*20*8],
           buffer_488[i],
           20*8*sizeof(fp_t));
}

    //Layer 101 Conv_143 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 474,293,294
    //Outputs: 499
    //Shape:
    //    474: (1, 64, 10, 10)
    //    293: (8, 64, 1, 1)
    //    294: (8,)
    //    499: (1, 8, 10, 10)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*8/1; i < (g+1)*8/1; i+=1){
        convolution2d_naive(buffer_474[g*64/1],
                            10,
                            10,
                            buffer_499[i],
                            buffer_293[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_294[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_naive(buffer_474[j],
                                10,
                                10,
                                temp_buffer,
                                buffer_293[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_499[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 102 Transpose_144 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 499
    //Outputs: 500
    //Shape:
    //    499: (1, 8, 10, 10)
    //    500: (1, 10, 10, 8)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 8; dim1++)
            for(uint32_t dim2 = 0; dim2 < 10; dim2++)
                for(uint32_t dim3 = 0; dim3 < 10; dim3++)
                    buffer_500[dim2][dim3*8 + dim1] = buffer_499[dim1][dim2*10 + dim3];
}
    //Layer 103 Reshape_150 Reshape
    //Attributes
    //Parameters
    //Inputs: 500,509
    //Outputs: 510
    //Shape:
    //    500: (1, 10, 10, 8)
    //    509: (3,)
    //    510: (1, 200, 4)

for(uint32_t i = 0; i < 10; i++){
    memcpy(&buffer_510[i*10*8],
           buffer_500[i],
           10*8*sizeof(fp_t));
}

    //Layer 104 Concat_151 Concat2d
    //Attributes
    //  axis: 1
    //Parameters
    //Inputs: 486,498,510
    //Outputs: output0
    //Shape:
    //    486: (1, 3200, 4)
    //    498: (1, 800, 4)
    //    510: (1, 200, 4)
    //    output0: (1, 4200, 4)
//
// Created by ali on 15.01.2021.
//

fp_t** inputs_Concat_151 = (fp_t**) malloc(3 * sizeof(fp_t*));
    inputs_Concat_151[0] = buffer_486;
    inputs_Concat_151[1] = buffer_498;
    inputs_Concat_151[2] = buffer_510;


const uint16_t* input_shape_Concat_151[3];
    uint16_t input_shape_Concat_151_0[2] = { 3200, 4 };
    input_shape_Concat_151[0] = input_shape_Concat_151_0;
    uint16_t input_shape_Concat_151_1[2] = { 800, 4 };
    input_shape_Concat_151[1] = input_shape_Concat_151_1;
    uint16_t input_shape_Concat_151_2[2] = { 200, 4 };
    input_shape_Concat_151[2] = input_shape_Concat_151_2;


concatenate_2D_naive(inputs_Concat_151, input_shape_Concat_151, 0,
3, output_output0);

free(inputs_Concat_151);

    //Layer 105 Conv_152 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 446,283,284
    //Outputs: 512
    //Shape:
    //    446: (1, 64, 40, 40)
    //    283: (4, 64, 1, 1)
    //    284: (4,)
    //    512: (1, 4, 40, 40)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*4/1; i < (g+1)*4/1; i+=1){
        convolution2d_naive(buffer_446[g*64/1],
                            40,
                            40,
                            buffer_512[i],
                            buffer_283[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_284[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_naive(buffer_446[j],
                                40,
                                40,
                                temp_buffer,
                                buffer_283[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_512[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 106 Transpose_153 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 512
    //Outputs: 513
    //Shape:
    //    512: (1, 4, 40, 40)
    //    513: (1, 40, 40, 4)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 4; dim1++)
            for(uint32_t dim2 = 0; dim2 < 40; dim2++)
                for(uint32_t dim3 = 0; dim3 < 40; dim3++)
                    buffer_513[dim2][dim3*4 + dim1] = buffer_512[dim1][dim2*40 + dim3];
}
    //Layer 107 Reshape_159 Reshape
    //Attributes
    //Parameters
    //Inputs: 513,522
    //Outputs: 523
    //Shape:
    //    513: (1, 40, 40, 4)
    //    522: (3,)
    //    523: (1, 3200, 2)

for(uint32_t i = 0; i < 40; i++){
    memcpy(&buffer_523[i*40*4],
           buffer_513[i],
           40*4*sizeof(fp_t));
}

    //Layer 108 Conv_160 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 460,285,286
    //Outputs: 524
    //Shape:
    //    460: (1, 64, 20, 20)
    //    285: (4, 64, 1, 1)
    //    286: (4,)
    //    524: (1, 4, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*4/1; i < (g+1)*4/1; i+=1){
        convolution2d_naive(buffer_460[g*64/1],
                            20,
                            20,
                            buffer_524[i],
                            buffer_285[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_286[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_460[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_285[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_524[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 109 Transpose_161 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 524
    //Outputs: 525
    //Shape:
    //    524: (1, 4, 20, 20)
    //    525: (1, 20, 20, 4)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 4; dim1++)
            for(uint32_t dim2 = 0; dim2 < 20; dim2++)
                for(uint32_t dim3 = 0; dim3 < 20; dim3++)
                    buffer_525[dim2][dim3*4 + dim1] = buffer_524[dim1][dim2*20 + dim3];
}
    //Layer 110 Reshape_167 Reshape
    //Attributes
    //Parameters
    //Inputs: 525,534
    //Outputs: 535
    //Shape:
    //    525: (1, 20, 20, 4)
    //    534: (3,)
    //    535: (1, 800, 2)

for(uint32_t i = 0; i < 20; i++){
    memcpy(&buffer_535[i*20*4],
           buffer_525[i],
           20*4*sizeof(fp_t));
}

    //Layer 111 Conv_168 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 474,287,288
    //Outputs: 536
    //Shape:
    //    474: (1, 64, 10, 10)
    //    287: (4, 64, 1, 1)
    //    288: (4,)
    //    536: (1, 4, 10, 10)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*4/1; i < (g+1)*4/1; i+=1){
        convolution2d_naive(buffer_474[g*64/1],
                            10,
                            10,
                            buffer_536[i],
                            buffer_287[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_288[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_naive(buffer_474[j],
                                10,
                                10,
                                temp_buffer,
                                buffer_287[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_536[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 112 Transpose_169 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 536
    //Outputs: 537
    //Shape:
    //    536: (1, 4, 10, 10)
    //    537: (1, 10, 10, 4)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 4; dim1++)
            for(uint32_t dim2 = 0; dim2 < 10; dim2++)
                for(uint32_t dim3 = 0; dim3 < 10; dim3++)
                    buffer_537[dim2][dim3*4 + dim1] = buffer_536[dim1][dim2*10 + dim3];
}
    //Layer 113 Reshape_175 Reshape
    //Attributes
    //Parameters
    //Inputs: 537,546
    //Outputs: 547
    //Shape:
    //    537: (1, 10, 10, 4)
    //    546: (3,)
    //    547: (1, 200, 2)

for(uint32_t i = 0; i < 10; i++){
    memcpy(&buffer_547[i*10*4],
           buffer_537[i],
           10*4*sizeof(fp_t));
}

    //Layer 114 Concat_176 Concat2d
    //Attributes
    //  axis: 1
    //Parameters
    //Inputs: 523,535,547
    //Outputs: 548
    //Shape:
    //    523: (1, 3200, 2)
    //    535: (1, 800, 2)
    //    547: (1, 200, 2)
    //    548: (1, 4200, 2)
//
// Created by ali on 15.01.2021.
//

fp_t** inputs_Concat_176 = (fp_t**) malloc(3 * sizeof(fp_t*));
    inputs_Concat_176[0] = buffer_523;
    inputs_Concat_176[1] = buffer_535;
    inputs_Concat_176[2] = buffer_547;


const uint16_t* input_shape_Concat_176[3];
    uint16_t input_shape_Concat_176_0[2] = { 3200, 2 };
    input_shape_Concat_176[0] = input_shape_Concat_176_0;
    uint16_t input_shape_Concat_176_1[2] = { 800, 2 };
    input_shape_Concat_176[1] = input_shape_Concat_176_1;
    uint16_t input_shape_Concat_176_2[2] = { 200, 2 };
    input_shape_Concat_176[2] = input_shape_Concat_176_2;


concatenate_2D_naive(inputs_Concat_176, input_shape_Concat_176, 0,
3, buffer_548);

free(inputs_Concat_176);

    //Layer 115 Conv_177 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 446,295,296
    //Outputs: 549
    //Shape:
    //    446: (1, 64, 40, 40)
    //    295: (20, 64, 1, 1)
    //    296: (20,)
    //    549: (1, 20, 40, 40)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*20/1; i < (g+1)*20/1; i+=1){
        convolution2d_naive(buffer_446[g*64/1],
                            40,
                            40,
                            buffer_549[i],
                            buffer_295[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_296[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[40*40];
            convolution2d_naive(buffer_446[j],
                                40,
                                40,
                                temp_buffer,
                                buffer_295[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_549[i],
                                temp_buffer,
                                40,
                                40);
            cnt+=1;
        }
        
    }
}

    //Layer 116 Transpose_178 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 549
    //Outputs: 550
    //Shape:
    //    549: (1, 20, 40, 40)
    //    550: (1, 40, 40, 20)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 20; dim1++)
            for(uint32_t dim2 = 0; dim2 < 40; dim2++)
                for(uint32_t dim3 = 0; dim3 < 40; dim3++)
                    buffer_550[dim2][dim3*20 + dim1] = buffer_549[dim1][dim2*40 + dim3];
}
    //Layer 117 Reshape_184 Reshape
    //Attributes
    //Parameters
    //Inputs: 550,559
    //Outputs: 560
    //Shape:
    //    550: (1, 40, 40, 20)
    //    559: (3,)
    //    560: (1, 3200, 10)

for(uint32_t i = 0; i < 40; i++){
    memcpy(&buffer_560[i*40*20],
           buffer_550[i],
           40*20*sizeof(fp_t));
}

    //Layer 118 Conv_185 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 460,297,298
    //Outputs: 561
    //Shape:
    //    460: (1, 64, 20, 20)
    //    297: (20, 64, 1, 1)
    //    298: (20,)
    //    561: (1, 20, 20, 20)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*20/1; i < (g+1)*20/1; i+=1){
        convolution2d_naive(buffer_460[g*64/1],
                            20,
                            20,
                            buffer_561[i],
                            buffer_297[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_298[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[20*20];
            convolution2d_naive(buffer_460[j],
                                20,
                                20,
                                temp_buffer,
                                buffer_297[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_561[i],
                                temp_buffer,
                                20,
                                20);
            cnt+=1;
        }
        
    }
}

    //Layer 119 Transpose_186 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 561
    //Outputs: 562
    //Shape:
    //    561: (1, 20, 20, 20)
    //    562: (1, 20, 20, 20)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 20; dim1++)
            for(uint32_t dim2 = 0; dim2 < 20; dim2++)
                for(uint32_t dim3 = 0; dim3 < 20; dim3++)
                    buffer_562[dim2][dim3*20 + dim1] = buffer_561[dim1][dim2*20 + dim3];
}
    //Layer 120 Reshape_192 Reshape
    //Attributes
    //Parameters
    //Inputs: 562,571
    //Outputs: 572
    //Shape:
    //    562: (1, 20, 20, 20)
    //    571: (3,)
    //    572: (1, 800, 10)

for(uint32_t i = 0; i < 20; i++){
    memcpy(&buffer_572[i*20*20],
           buffer_562[i],
           20*20*sizeof(fp_t));
}

    //Layer 121 Conv_193 Conv
    //Attributes
    //  dilations: [1, 1]
    //  group: 1
    //  kernel_shape: [1, 1]
    //  pads: [0, 0, 0, 0]
    //  strides: [1, 1]
    //Parameters
    //Inputs: 474,299,300
    //Outputs: 573
    //Shape:
    //    474: (1, 64, 10, 10)
    //    299: (20, 64, 1, 1)
    //    300: (20,)
    //    573: (1, 20, 10, 10)

for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*20/1; i < (g+1)*20/1; i+=1){
        convolution2d_naive(buffer_474[g*64/1],
                            10,
                            10,
                            buffer_573[i],
                            buffer_299[i*64/1],
                            1,
                            1,
                            1,
                            1,
                            
                            buffer_300[i]
                            );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*64/1+1; j < (g+1)*64/1; j+=1){
            static fp_t temp_buffer[10*10];
            convolution2d_naive(buffer_474[j],
                                10,
                                10,
                                temp_buffer,
                                buffer_299[i*64/1+cnt],
                                1,
                                1,
                                1,
                                1,
                                0.0);

            add_channel2d_naive(buffer_573[i],
                                temp_buffer,
                                10,
                                10);
            cnt+=1;
        }
        
    }
}

    //Layer 122 Transpose_194 Transpose
    //Attributes
    //  perm: [0, 2, 3, 1]
    //Parameters
    //Inputs: 573
    //Outputs: 574
    //Shape:
    //    573: (1, 20, 10, 10)
    //    574: (1, 10, 10, 20)
{
    for(uint32_t dim0 = 0; dim0 < 1; dim0++)
        for(uint32_t dim1 = 0; dim1 < 20; dim1++)
            for(uint32_t dim2 = 0; dim2 < 10; dim2++)
                for(uint32_t dim3 = 0; dim3 < 10; dim3++)
                    buffer_574[dim2][dim3*20 + dim1] = buffer_573[dim1][dim2*10 + dim3];
}
    //Layer 123 Reshape_200 Reshape
    //Attributes
    //Parameters
    //Inputs: 574,583
    //Outputs: 584
    //Shape:
    //    574: (1, 10, 10, 20)
    //    583: (3,)
    //    584: (1, 200, 10)

for(uint32_t i = 0; i < 10; i++){
    memcpy(&buffer_584[i*10*20],
           buffer_574[i],
           10*20*sizeof(fp_t));
}

    //Layer 124 Concat_201 Concat2d
    //Attributes
    //  axis: 1
    //Parameters
    //Inputs: 560,572,584
    //Outputs: 585
    //Shape:
    //    560: (1, 3200, 10)
    //    572: (1, 800, 10)
    //    584: (1, 200, 10)
    //    585: (1, 4200, 10)
//
// Created by ali on 15.01.2021.
//

fp_t** inputs_Concat_201 = (fp_t**) malloc(3 * sizeof(fp_t*));
    inputs_Concat_201[0] = buffer_560;
    inputs_Concat_201[1] = buffer_572;
    inputs_Concat_201[2] = buffer_584;


const uint16_t* input_shape_Concat_201[3];
    uint16_t input_shape_Concat_201_0[2] = { 3200, 10 };
    input_shape_Concat_201[0] = input_shape_Concat_201_0;
    uint16_t input_shape_Concat_201_1[2] = { 800, 10 };
    input_shape_Concat_201[1] = input_shape_Concat_201_1;
    uint16_t input_shape_Concat_201_2[2] = { 200, 10 };
    input_shape_Concat_201[2] = input_shape_Concat_201_2;


concatenate_2D_naive(inputs_Concat_201, input_shape_Concat_201, 0,
3, output_585);

free(inputs_Concat_201);

    //Layer 125 Softmax_202 Softmax
    //Attributes
    //  axis: 2
    //Parameters
    //Inputs: 548
    //Outputs: 586
    //Shape:
    //    548: (1, 4200, 2)
    //    586: (1, 4200, 2)
softmax_naive(buffer_548, 1, 4200, output_586);
}

