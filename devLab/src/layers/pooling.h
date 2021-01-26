/**
 * @brief contains all poolings
 *
 * @author Konstantin Luebeck (University of Tuebingen, Chair for Embedded Systems)
 * @author Alexander Jung (University of Tuebingen, Chair for Embedded Systems)
 * @author Nils Weinhardt (University of Tuebingen, Chair for Embedded Systems)
 */

#ifndef POOLING_H
#define POOLING_H

#include "../parameters.h"
#include "../utils.h"
#include <stdint.h>
#include <stdio.h>

/**
 * @brief applies max pooling of kernel_size to input_channel
 *
 * @param input_channel
 * @param output_channel
 * @param kernel_size
 * @param stride
 */
void max_pooling1d_naive(const fp_t* input_channel, const uint16_t input_width, fp_t* output_channel,
                         const uint16_t kernel_size, const uint16_t stride);

/**
 * @brief Extends the input channel with the given padding and passes the extended input channel to max_pooling1d_naive
 *
 * @param input_channel
 * @param input_width
 * @param output_channel
 * @param kernel_size
 * @param stride
 * @param padding
 */
void max_pooling1d_naive_padded(const fp_t* input_channel, const uint16_t input_width,
                                fp_t* output_channel, const uint16_t kernel_size, const uint16_t stride,
                                const uint16_t* padding);

/**
 * @brief applies max pooling of kernel_size x kernel_size to input_channel
 *
 * @param input_channel (height x width)
 * @param height
 * @param width
 * @param output_channel (((height-kernel_size)/stride+1) x ((width-kernel_size)/stride+1))
 * @param kernel_size
 * @param stride
 */
void max_pooling2d_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                         fp_t* output_channel, const uint16_t kernel_size, const uint16_t stride);

/**
 * @brief Extends the input channel with the given padding and passes the extended input channel to max_pooling2d_naive
 *
 * @param input_channel (height x width)
 * @param height
 * @param width
 * @param output_channel (((height+padding[0]+padding[2]-kernel_size)/stride+1) x ((width+padding[1]+padding[3]-kernel_size)/stride+1))
 * @param kernel_size
 * @param stride
 * @param padding integer array of length 4 containing the number of padding pixels for each dimension (x1_begin, x2_begin, x1_end, x2_end)
 */
void max_pooling2d_naive_padded(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                                fp_t* output_channel, const uint16_t kernel_size, const uint16_t stride,
                                const uint16_t* padding);

/**
 * @brief applies average pooling of kernel_size x kernel_size to input_channel
 *
 * @param input_channel (height x width)
 * @param height
 * @param width
 * @param output_channel (height/kernel_size x width/kernel_size)
 * @param kernel_size
 * @param stride
 * @param bias
 * @param padding This parameter is only needed for center/edge case detection when count_include_pad == 0
 * @param count_include_pad If 1 the padded pixels of the channel will be taken into account for average computation,
 *        if 0 they will not be taken into account. This parameter has to be 1 if the function is used directly
 *        and not called via the padded version.
 */
void average_pooling2d_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                             fp_t* output_channel, const uint16_t kernel_size, const uint16_t stride,
                             fp_t bias, const uint16_t* padding, const uint16_t count_include_pad);

/**
 * @brief Extends the input channel with the given padding and passes the extended input channel to average_pooling2d_naive
 *
 * @param input_channel (height x width)
 * @param height
 * @param width
 * @param output_channel
 * @param kernel_size
 * @param bias
 * @param count_include_pad If 1 the padded pixels of the channel will be taken into account for average computation,
 *        if 0 they will not be taken into account.
 */
void average_pooling2d_naive_padded(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                                    fp_t* output_channel, const uint16_t kernel_size, const uint16_t stride,
                                    fp_t bias, const uint16_t* padding, const uint16_t count_include_pad);

/**
 * @brief Performs average pooling on a 1 x input_width big channel with kernel_size and stride
 *
 * @param input_channel (1 x input_width)
 * @param input_width
 * @param output_channel
 * @param kernel_size
 * @param stride
 * @param bias
 * @param padding This parameter is only needed for center/edge case detection when count_include_pad == 0
 * @param count_include_pad If 1 the padded pixels of the channel will be taken into account for average computation,
 *        if 0 they will not be taken into account. This parameter has to be 1 if the function is used directly
 *        and not called via the padded version.
 */
void average_pooling1d_naive(const fp_t* input_channel, const uint16_t input_width, fp_t* output_channel,
                             const uint16_t kernel_size, const uint16_t stride, fp_t bias, const uint16_t* padding,
                             const uint16_t count_include_pad);

/**
 * @brief Extends the given input channel with the given padding and performs average pooling on the extended input
 *
 * @param input_channel (1 x input_width)
 * @param input_width
 * @param output_channel
 * @param kernel_size
 * @param stride
 * @param bias
 * @param padding
 * @param count_include_pad If 1 the padded pixels of the channel will be taken into account for average computation,
 *        if 0 they will not be taken into account.
 */
void average_pooling1d_naive_padded(const fp_t* input_channel, const uint16_t input_width, fp_t* output_channel,
                                    const uint16_t kernel_size, const uint16_t stride, fp_t bias,
                                    const uint16_t* padding, const uint16_t count_include_pad);


/**
 * @brief Applies average pooling over the whole channel of size input_height x input_width
 *
 * @param input_channel
 * @param input_height
 * @param input_width
 * @param output_channel
 */
void global_average_pooling2d_naive(const fp_t* input_channel, const uint16_t input_height,
                                    const uint16_t input_width, fp_t* output_channel);

/**
 * @brief Applies max pooling over the whole channel of size input_height x input_width
 *
 * @param input_channel
 * @param input_height
 * @param input_width
 * @param output_channel
 */
void global_max_pooling2d_naive(const fp_t* input_channel, const uint16_t input_height,
                                const uint16_t input_width, fp_t* output_channel);

/**
 * @brief The padding operation extends the input_channel with padding into the output_channel.
 * @param input_channel (height x width)
 * @param height
 * @param width
 * @param output_channel (height+padding[0]+padding[2]) x (width+padding[1]+padding[3])
 * @param padding const uint16_t[4] = {height_begin, width_begin, height_end, width_end}
 * @param initializer The value the padded pixels will be initialized to
 */
void pad_2d_naive(const fp_t* input_channel, const uint16_t height, const uint16_t width,
                  fp_t* output_channel, const uint16_t* padding, fp_t initializer);

/**
 * @brief The padding operation extends the input_channel with padding into the output_channel.
 * @param input_channel (1 x width)
 * @param width
 * @param output_channel (1 x (width+padding[0]+padding[1])
 * @param padding const uint16_t[2] = {width_begin, width_end}
 * @param initializer The value the padded pixels will be initialized to
 */
void pad_1d_naive(const fp_t* input_channel, const uint16_t width,
                  fp_t* output_channel, const uint16_t* padding, fp_t initializer);

#endif // POOLING_H
