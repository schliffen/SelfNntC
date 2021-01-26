//
// Created by ali on 14.01.2021.
//
void upsampling_2D_nearest_neighbour(fp_t** input_channels, const uint16_t target_height, const uint16_t target_width, const uint16_t scale, fp_t** output_channel){

//    calculate scale

    int in_i, in_j;
    for( int i=0; i< target_height; i++){
        for (int j=0; j< target_width; j++){
            // clculate corresponding indexes from input channel
            in_i = (int) floor(i/scale);
            in_j = (int) floor(j/scale);
            output_channel[i][j] = input_channels[in_i][in_j];

        }
    }
}
