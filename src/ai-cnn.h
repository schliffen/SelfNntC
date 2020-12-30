/** 
 * @brief provides all includes to construct a CNN
 *
 *
 *
 */

#ifndef AI_CNN_H
#define AI_CNN_H

#include "parameters.h"

#include "layers/activation_function.h"
#include "layers/convolution.h"
#include "layers/pooling.h"
#include "layers/fully_connected.h"
#include "layers/batch_normalization.h"
#include "layers/concatenate.h"
#include "layers/math_operations.h"
#include "io/read_binary_weights.h"
#include "io/read_binary_reference_data.h"
#include "io/read_pgm.h"

#ifdef MNIST
#include "io/read_mnist.h"
#ifdef DEBUG
#include "io/write_pgm.h"
#include "io/write_float.h"
#endif
#endif

#ifdef JPEG
#include "io/read_jpeg.h"
#endif

#ifdef IMAGENET
#include "io/read_means.h"
#include "io/read_imagenet_labels.h"
#include "io/read_imagenet_validation_labels.h"
#endif

#ifdef DEBUG
#include <stdio.h>
#endif

#endif // AI_CNN_H
