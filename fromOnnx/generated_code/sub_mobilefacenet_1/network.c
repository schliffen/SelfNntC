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
    //Inputs: data,349,350
    //Outputs: 348
    //Shape:
    //    data: (1, 3, 112, 112)
    //    349: (64, 3, 3, 3)
    //    350: (64,)
    //    348: (1, 64, 56, 56)

const uint16_t Conv_0_padding[4] = { 1, 1, 1, 1 };
for(uint32_t g = 0; g < 1; g++) {
    for(uint32_t i = g*64/1; i < (g+1)*64/1; i+=1){
        convolution2d_padding_naive(input_data[g*3/1],
                                    112,
                                    112,
                                    buffer_348[i],
                                    buffer_349[i*3/1],
                                    3,
                                    3,
                                    2,
                                    2,
                                    Conv_0_padding,
                                    
                                    buffer_350[i]
                                    );
        
        uint32_t cnt = 1;
        for(uint32_t j = g*3/1+1; j < (g+1)*3/1; j+=1){
            static fp_t temp_buffer[56*56];
            convolution2d_padding_naive(input_data[j],
                                        112,
                                        112,
                                        temp_buffer,
                                        buffer_349[i*3/1+cnt],
                                        3,
                                        3,
                                        2,
                                        2,
                                        Conv_0_padding,
                                        0.0);

            add_channel2d_naive(buffer_348[i],
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
    //Inputs: 348,351
    //Outputs: 337
    //Shape:
    //    348: (1, 64, 56, 56)
    //    351: (64, 1, 1)
    //    337: (1, 64, 56, 56)

for (uint32_t i = 0; i < 64; i++) {
    prelu(buffer_348[i],
               56,
               56,
               buffer_337[i],
               buffer_351[i]);
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

    //Layer 3 ReduceL2_8 ReduceL2
    //Attributes
    //  axes: [1]
    //  keepdims: 1
    //Parameters
    //Inputs: 345
    //Outputs: 346
    //Shape:
    //    345: (1, 200704)
    //    346: ()
//
//for (uint32_t i = 0; i < 200704; i++) {
norm_naive_l2(buffer_345,
200704,
2,
&buffer_346);
//}
//
    //Layer 4 Div_9 Div
    //Attributes
    //Parameters
    //Inputs: 345,346
    //Outputs: output
    //Shape:
    //    345: (1, 200704)
    //    346: ()
    //    output: (0, 200704)

for (uint32_t i = 0; i < 200704; i++) {
div_by_scalar(buffer_345,
1,
1,
buffer_346,
output_output[i]);
}

}

