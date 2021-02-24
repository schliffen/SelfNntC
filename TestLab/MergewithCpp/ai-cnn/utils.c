#include "utils.h"

void extend_2d_input_with_padding(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                                  fp_t** extended_input, const uint16_t* padding, fp_t initializer) {

    uint16_t height_padded = height + padding[0] + padding[2];
    uint16_t width_padded = width + padding[1] + padding[3];

    *extended_input = (fp_t*) calloc(height_padded * width_padded, sizeof(fp_t));

    if(initializer != 0.0) {
        for(uint16_t r = 0; r < height_padded; r++){
            for(uint16_t c = 0; c < width_padded; c++){
                (*extended_input)[r*width_padded+c] = initializer;
            }
        }
    }

    for (int16_t channel_row = 0; channel_row < height; channel_row++) {
        memcpy((*extended_input) + (channel_row + padding[0]) * width_padded + padding[1],
               input_channel + channel_row * width, width * sizeof(fp_t));
    }
}




void extend_2d_input_with_padding_extended(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                                  fp_t** extended_input, const uint16_t* padding, fp_t initializer) {

    uint16_t height_padded = height + padding[0] + padding[2];
    uint16_t width_padded = width + padding[1] + padding[3];

    *extended_input = (fp_t*) calloc(height_padded * width_padded, sizeof(fp_t));

    if(initializer != 0.0) {
        for(uint16_t r = 0; r < height_padded; r++){
            for(uint16_t c = 0; c < width_padded; c++){
                (*extended_input)[r*width_padded+c] = initializer;
            }
        }
    }

    for (int16_t channel_row = 0; channel_row < height; channel_row++) {
        memcpy((*extended_input) + (channel_row + padding[0]) * width_padded + padding[1],
               input_channel + channel_row * width, width * sizeof(fp_t));
    }
}


void extend_2d_input_with_padding_first_layer(const unsigned char* input_channel, const uint16_t height, const uint16_t width,
                                  fp_t** extended_input, const uint16_t* padding, fp_t initializer) {

    uint16_t height_padded = height + padding[0] + padding[2];
    uint16_t width_padded = width + padding[1] + padding[3];

    // assuming number of channels are 3 as in normal images
    for (int c=0; c<3; c++) {
        if (c == 0) {

            extended_input[c] = (fp_t*) calloc(height_padded * width_padded, sizeof(fp_t));
            if(initializer != 0.0) {
                for(uint16_t r = 0; r < height_padded; r++){
                    for(uint16_t ci = 0; ci < width_padded; c++){
                        extended_input[c][r*width_padded+ci] = initializer;
                    }
                }
            }


            for (int16_t channel_row = 0; channel_row < height; channel_row++) {
                for (int wi = 0; wi < width; wi++) {
                    extended_input[c][(channel_row + padding[0]) * width_padded + padding[1] + wi] =
                            (fp_t) *(input_channel + (channel_row*height + wi) * 3 + 2) - 104.;
//                    printf("i: %d, 1st channel:  %f \n", wi,
//                           extended_input[0][(channel_row + padding[0]) * width_padded + padding[1] + wi]);

                }
            }
        } else if (c == 1) {

            extended_input[c] = (fp_t*) calloc(height_padded * width_padded, sizeof(fp_t));
            if(initializer != 0.0) {
                for(uint16_t r = 0; r < height_padded; r++){
                    for(uint16_t ci = 0; ci < width_padded; c++){
                        extended_input[c][r*width_padded+ci] = initializer;
                    }
                }
            }


            for (int16_t channel_row = 0; channel_row < height; channel_row++) {
                for (int wi = 0; wi < width; wi++) {
                    extended_input[c][(channel_row + padding[0]) * width_padded + padding[1] + wi] =
                            (fp_t) *(input_channel + (channel_row*height + wi) * 3 + 1) - 117.;
//                    printf("i: %d, 2nd channel:  %f \n", wi,
//                           extended_input[1][(channel_row + padding[0]) * width_padded + padding[1] + wi]);
                }
            }

        } else if (c == 2) {

            extended_input[c] = (fp_t*) calloc(height_padded * width_padded, sizeof(fp_t));

            if(initializer != 0.0) {
                for(uint16_t r = 0; r < height_padded; r++){
                    for(uint16_t ci = 0; ci < width_padded; c++){
                        extended_input[c][r*width_padded+ci] = initializer;
                    }
                }
            }

            for (int16_t channel_row = 0; channel_row < height; channel_row++) {
                for (int wi = 0; wi < width; wi++) {
                    extended_input[c] [(channel_row + padding[0]) * width_padded + padding[1] + wi] =
                            (fp_t) *(input_channel + (channel_row*height +wi) * 3) - 123.;
//                    printf("i: %d, 3rd channel:  %f \n", wi,
//                           extended_input[2][(channel_row + padding[0]) * width_padded + padding[1] + wi]);
                }
            }

        }
    }

        //memcpy((*extended_input) + (channel_row + padding[0]) * width_padded + padding[1],
        //       input_channel + channel_row * width, width * sizeof(fp_t));

}




void extend_1d_input_with_padding(const fp_t* input_channel, const uint16_t width,
                                  fp_t** extended_input, const uint16_t* padding, fp_t initializer) {

    uint16_t width_padded = width + padding[0] + padding[1];

    *extended_input = (fp_t*) calloc(width_padded, sizeof(fp_t));

    if(initializer != 0.0) {
        for(uint16_t i = 0; i < width_padded; i++){
            (*extended_input)[i] = initializer;
        }
    }

    memcpy((*extended_input)+padding[0], input_channel, width*sizeof(fp_t));
}
