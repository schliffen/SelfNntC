#include "activation_function.h"

void clip_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                const fp_t min, const fp_t max, fp_t* output_channel) {
    #ifdef BIG_LOOPS
    uint64_t i;
    #else
    uint32_t i;
    #endif

    for(i = 0; i < height*width; i++) {
        if(input_channel[i] < min)
            output_channel[i] = min;
        else if(input_channel[i] > max)
            output_channel[i] = max;
        else
            output_channel[i] = input_channel[i];

    }
}

void tanh_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel) {

    #ifdef BIG_LOOPS
    uint64_t i;
    #else
    uint32_t i;
    #endif

    for(i = 0; i < height*width; i++) {
        output_channel[i] = tanhf(input_channel[i]);
    }
}

void relu_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel) {

    #ifdef BIG_LOOPS
    uint64_t i;
    #else
    uint32_t i;
    #endif

    for(i = 0; i < height*width; i++) {
        output_channel[i] = (input_channel[i] < 0.0) ? 0.0 : input_channel[i];
    }
}

void relu6_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel) {

#ifdef BIG_LOOPS
    uint64_t i;
#else
    uint32_t i;
#endif

    for(i = 0; i < height*width; i++) {
        if (input_channel[i] < 0.0)
            output_channel[i] = 0.0;
        else if (input_channel[i] > 6.0)
            output_channel[i] = 6.0;
        else
            output_channel[i] = input_channel[i];

//        output_channel[i] = (input_channel[i] < 0.0) ? 0.0 : input_channel[i]
    }
}

void prelu(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel, fp_t* weight) {

#ifdef BIG_LOOPS
    uint64_t i;
#else
    uint32_t i;
#endif

    for(i = 0; i < height*width; i++) {
        output_channel[i] = (input_channel[i] < 0.0) ? weight[i] * input_channel[i] : input_channel[i];
    }
}

void prelu_mbfc(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel, fp_t weight) {

#ifdef BIG_LOOPS
    uint64_t i;
#else
    uint32_t i;
#endif

    for(i = 0; i < height*width; i++) {
        output_channel[i] = (input_channel[i] < 0.0) ? weight * input_channel[i] : input_channel[i];
    }
}


void prelu_naive(const fp_t input_channel, const uint16_t height, const uint16_t width, fp_t output_channel, fp_t weight) {

#ifdef BIG_LOOPS
    uint64_t i;
#else
    uint32_t i;
#endif

    for(i = 0; i < height*width; i++) {
        output_channel = (input_channel < 0.0) ? weight * input_channel : input_channel;
    }
}




void leaky_relu_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel, const fp_t leak) {

    #ifdef BIG_LOOPS
    uint64_t i;
    # else
    uint32_t i;
    #endif

    for(i = 0; i < height*width; i++) {
        output_channel[i] = (input_channel[i] < 0.0) ? (leak*input_channel[i]) : input_channel[i];
    }
}


// TODO: check whether kernel size (multiple parameters) makes sense
// TODO: rename kernel?
void parametrized_relu_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel, fp_t* kernel) {

    #ifdef BIG_LOOPS
    uint64_t i;
    # else
    uint32_t i;
    #endif

    for(i = 0; i < height*width; i++) {
        output_channel[i] = (input_channel[i] < 0.0) ? (kernel[i] * input_channel[i]) : input_channel[i];
    }

}


// TODO: check whether correct
void sigmoid_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width,  fp_t* output_channel) {

    #ifdef BIG_LOOPS
    uint64_t i;
    #else
    uint32_t i;
    #endif

    for(i = 0; i < height*width; i++) {
        output_channel[i] = 1 / (1+expf(- input_channel[i]));
        // alternative formula:
        //  output_channel[i] = 0.5 * (1 + tanhf(input_channel[i] / 2));
    }
}

void softmax_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width, fp_t* output_channel) {

    #ifdef BIG_LOOPS
    uint64_t i;
    #else
    uint32_t i;
    #endif

    long double denominator = 0.0;

    for(i = 0; i < height*width; i++) {
        denominator += expl((long double)input_channel[i]);
    }

    for(i = 0; i < height*width; i++) {
        output_channel[i] = (fp_t)(expl((long double)input_channel[i]) / denominator);
    }
}

void softmax_naive_mbnet(const fp_t** input_channel, const uint16_t num_inputs, fp_t* output_channel) {

#ifdef BIG_LOOPS
    uint64_t i;
#else
    uint32_t i;
#endif

    int input_shape[3] = {12800, 3200, 800};
    //
    fp_t denom;
    long double denominator = 0.0;
    uint32_t gind = 0;
    for (int n_in = 0; n_in < num_inputs; n_in++) {

        for (i = 0; i < input_shape[n_in]; i++) {
            denom =  expl((long double) input_channel[n_in][2 * i  +1]) /(expl((long double) input_channel[n_in][2 * i  ]) +  expl((long double) input_channel[n_in][2 * i  +1]));
//            denominator =exponent_nom; //expl((long double) input_channel[n_in][2 * i 1]);
            output_channel[gind] =  denom;
            gind++;
        }


//        for (i = 0; i < input_shape[n_in]/2; i++) {
//            output_channel[gind] = (fp_t) (expl((long double) input_channel[n_in][2 * i + 1]) / denominator);
//            gind++;
//        }
    }

//    output_channel[gind] = denominator;

}

void local_response_normalization_naive(fp_t** input_channels, const uint16_t height, const uint16_t width, const uint16_t depth, fp_t** output_channels, const fp_t alpha, const fp_t beta, const uint16_t n) {

    int32_t channel, row, column, i;
    int32_t from;
    int32_t to;

    fp_t sum;

    for(channel = 0; channel < depth; channel++) {
        from = MAX(0,channel-(n/2));
        to = MIN(depth-1,channel+(n/2));

        for(row = 0; row < height; row++) {
            for(column = 0; column < width; column++) {

                sum = 0.0;

                for(i = from; i <= to; i++) {
                    sum += powf(input_channels[i][row*width+column], 2);
                }

                output_channels[channel][row*width+column] = input_channels[channel][row*width+column] / powf((1+(alpha/n)*sum),beta);
            }
        }
    }
}
