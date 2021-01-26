/** 
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
#include "layers/upsampling.h"

#include "io/read_binary_weights.h"
#include "io/read_binary_reference_data.h"
//#include "io/read_pgm.h"


#ifdef DEBUG
#include <stdio.h>
#endif

#endif // AI_CNN_H
