#include "network_initialization.h"

void initialize_network() {

kernels = (fp_t***) malloc(83 * sizeof(fp_t**));
biases = (fp_t**) malloc(200 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
buffer_conv1_conv_weight = (fp_t**) malloc(192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 192; kernel++){
    buffer_conv1_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[0] = buffer_conv1_conv_weight;


// Outputs
// (1, 64, 56, 56)
buffer_334 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_334[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: BatchNormalization_1, Operation: BatchNormalization
// Inputs
// (64,)
buffer_conv1_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[0] = buffer_conv1_bn_weight;


// (64,)
buffer_conv1_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[1] = buffer_conv1_bn_bias;


// (64,)
buffer_conv1_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[2] = buffer_conv1_bn_running_mean;


// (64,)
buffer_conv1_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[3] = buffer_conv1_bn_running_var;


// Outputs
// (1, 64, 56, 56)
buffer_335 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_335[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_2, Operation: PRelu
// Inputs
// (64, 1, 1)
buffer_523 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_523[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[1] = buffer_523;


// Outputs
// (1, 64, 56, 56)
buffer_337 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_337[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Conv_3, Operation: Conv
// Inputs
// (64, 1, 3, 3)
buffer_conv2_dw_conv_weight = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_conv2_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[2] = buffer_conv2_dw_conv_weight;


// Outputs
// (1, 64, 56, 56)
buffer_338 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_338[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: BatchNormalization_4, Operation: BatchNormalization
// Inputs
// (64,)
buffer_conv2_dw_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[4] = buffer_conv2_dw_bn_weight;


// (64,)
buffer_conv2_dw_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[5] = buffer_conv2_dw_bn_bias;


// (64,)
buffer_conv2_dw_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[6] = buffer_conv2_dw_bn_running_mean;


// (64,)
buffer_conv2_dw_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[7] = buffer_conv2_dw_bn_running_var;


// Outputs
// (1, 64, 56, 56)
buffer_339 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_339[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_5, Operation: PRelu
// Inputs
// (64, 1, 1)
buffer_524 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_524[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[3] = buffer_524;


// Outputs
// (1, 64, 56, 56)
buffer_341 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_341[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Conv_6, Operation: Conv
// Inputs
// (128, 64, 1, 1)
buffer_conv_23_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_23_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[4] = buffer_conv_23_conv_conv_weight;


// Outputs
// (1, 128, 56, 56)
buffer_342 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_342[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: BatchNormalization_7, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_23_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[8] = buffer_conv_23_conv_bn_weight;


// (128,)
buffer_conv_23_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[9] = buffer_conv_23_conv_bn_bias;


// (128,)
buffer_conv_23_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[10] = buffer_conv_23_conv_bn_running_mean;


// (128,)
buffer_conv_23_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[11] = buffer_conv_23_conv_bn_running_var;


// Outputs
// (1, 128, 56, 56)
buffer_343 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_343[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_8, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_525 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_525[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[5] = buffer_525;


// Outputs
// (1, 128, 56, 56)
buffer_345 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_345[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Conv_9, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_conv_23_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_conv_23_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[6] = buffer_conv_23_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_346 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_346[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_10, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_23_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[12] = buffer_conv_23_conv_dw_bn_weight;


// (128,)
buffer_conv_23_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[13] = buffer_conv_23_conv_dw_bn_bias;


// (128,)
buffer_conv_23_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[14] = buffer_conv_23_conv_dw_bn_running_mean;


// (128,)
buffer_conv_23_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[15] = buffer_conv_23_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_347 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_347[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_11, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_526 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_526[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[7] = buffer_526;


// Outputs
// (1, 128, 28, 28)
buffer_349 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_349[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_12, Operation: Conv
// Inputs
// (64, 128, 1, 1)
buffer_conv_23_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_23_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[8] = buffer_conv_23_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
buffer_350 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_350[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_13, Operation: BatchNormalization
// Inputs
// (64,)
buffer_conv_23_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[16] = buffer_conv_23_project_bn_weight;


// (64,)
buffer_conv_23_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[17] = buffer_conv_23_project_bn_bias;


// (64,)
buffer_conv_23_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[18] = buffer_conv_23_project_bn_running_mean;


// (64,)
buffer_conv_23_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[19] = buffer_conv_23_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
buffer_351 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_351[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_14, Operation: Conv
// Inputs
// (128, 64, 1, 1)
buffer_conv_3_model_0_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_0_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[9] = buffer_conv_3_model_0_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_352 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_352[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_15, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_0_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[20] = buffer_conv_3_model_0_conv_bn_weight;


// (128,)
buffer_conv_3_model_0_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[21] = buffer_conv_3_model_0_conv_bn_bias;


// (128,)
buffer_conv_3_model_0_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[22] = buffer_conv_3_model_0_conv_bn_running_mean;


// (128,)
buffer_conv_3_model_0_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[23] = buffer_conv_3_model_0_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_353 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_353[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_16, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_527 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_527[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[10] = buffer_527;


// Outputs
// (1, 128, 28, 28)
buffer_355 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_355[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_17, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_conv_3_model_0_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_conv_3_model_0_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[11] = buffer_conv_3_model_0_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_356 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_356[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_18, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_0_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[24] = buffer_conv_3_model_0_conv_dw_bn_weight;


// (128,)
buffer_conv_3_model_0_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[25] = buffer_conv_3_model_0_conv_dw_bn_bias;


// (128,)
buffer_conv_3_model_0_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[26] = buffer_conv_3_model_0_conv_dw_bn_running_mean;


// (128,)
buffer_conv_3_model_0_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[27] = buffer_conv_3_model_0_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_357 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_357[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_19, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_528 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_528[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[12] = buffer_528;


// Outputs
// (1, 128, 28, 28)
buffer_359 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_359[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_20, Operation: Conv
// Inputs
// (64, 128, 1, 1)
buffer_conv_3_model_0_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_0_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[13] = buffer_conv_3_model_0_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
buffer_360 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_360[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_21, Operation: BatchNormalization
// Inputs
// (64,)
buffer_conv_3_model_0_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[28] = buffer_conv_3_model_0_project_bn_weight;


// (64,)
buffer_conv_3_model_0_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[29] = buffer_conv_3_model_0_project_bn_bias;


// (64,)
buffer_conv_3_model_0_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[30] = buffer_conv_3_model_0_project_bn_running_mean;


// (64,)
buffer_conv_3_model_0_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[31] = buffer_conv_3_model_0_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
buffer_361 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_361[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_22, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
buffer_362 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_362[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_23, Operation: Conv
// Inputs
// (128, 64, 1, 1)
buffer_conv_3_model_1_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_1_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[14] = buffer_conv_3_model_1_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_363 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_363[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_24, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_1_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[32] = buffer_conv_3_model_1_conv_bn_weight;


// (128,)
buffer_conv_3_model_1_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[33] = buffer_conv_3_model_1_conv_bn_bias;


// (128,)
buffer_conv_3_model_1_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[34] = buffer_conv_3_model_1_conv_bn_running_mean;


// (128,)
buffer_conv_3_model_1_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[35] = buffer_conv_3_model_1_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_364 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_364[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_25, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_529 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_529[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[15] = buffer_529;


// Outputs
// (1, 128, 28, 28)
buffer_366 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_366[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_26, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_conv_3_model_1_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_conv_3_model_1_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[16] = buffer_conv_3_model_1_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_367 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_367[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_27, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_1_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[36] = buffer_conv_3_model_1_conv_dw_bn_weight;


// (128,)
buffer_conv_3_model_1_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[37] = buffer_conv_3_model_1_conv_dw_bn_bias;


// (128,)
buffer_conv_3_model_1_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[38] = buffer_conv_3_model_1_conv_dw_bn_running_mean;


// (128,)
buffer_conv_3_model_1_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[39] = buffer_conv_3_model_1_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_368 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_368[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_28, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_530 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_530[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[17] = buffer_530;


// Outputs
// (1, 128, 28, 28)
buffer_370 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_370[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_29, Operation: Conv
// Inputs
// (64, 128, 1, 1)
buffer_conv_3_model_1_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_1_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[18] = buffer_conv_3_model_1_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
buffer_371 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_371[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_30, Operation: BatchNormalization
// Inputs
// (64,)
buffer_conv_3_model_1_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[40] = buffer_conv_3_model_1_project_bn_weight;


// (64,)
buffer_conv_3_model_1_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[41] = buffer_conv_3_model_1_project_bn_bias;


// (64,)
buffer_conv_3_model_1_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[42] = buffer_conv_3_model_1_project_bn_running_mean;


// (64,)
buffer_conv_3_model_1_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[43] = buffer_conv_3_model_1_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
buffer_372 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_372[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_31, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
buffer_373 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_373[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_32, Operation: Conv
// Inputs
// (128, 64, 1, 1)
buffer_conv_3_model_2_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_2_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[19] = buffer_conv_3_model_2_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_374 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_374[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_33, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_2_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[44] = buffer_conv_3_model_2_conv_bn_weight;


// (128,)
buffer_conv_3_model_2_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[45] = buffer_conv_3_model_2_conv_bn_bias;


// (128,)
buffer_conv_3_model_2_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[46] = buffer_conv_3_model_2_conv_bn_running_mean;


// (128,)
buffer_conv_3_model_2_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[47] = buffer_conv_3_model_2_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_375 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_375[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_34, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_531 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_531[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[20] = buffer_531;


// Outputs
// (1, 128, 28, 28)
buffer_377 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_377[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_35, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_conv_3_model_2_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_conv_3_model_2_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[21] = buffer_conv_3_model_2_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_378 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_378[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_36, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_2_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[48] = buffer_conv_3_model_2_conv_dw_bn_weight;


// (128,)
buffer_conv_3_model_2_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[49] = buffer_conv_3_model_2_conv_dw_bn_bias;


// (128,)
buffer_conv_3_model_2_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[50] = buffer_conv_3_model_2_conv_dw_bn_running_mean;


// (128,)
buffer_conv_3_model_2_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[51] = buffer_conv_3_model_2_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_379 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_379[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_37, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_532 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_532[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[22] = buffer_532;


// Outputs
// (1, 128, 28, 28)
buffer_381 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_381[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_38, Operation: Conv
// Inputs
// (64, 128, 1, 1)
buffer_conv_3_model_2_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_2_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[23] = buffer_conv_3_model_2_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
buffer_382 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_382[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_39, Operation: BatchNormalization
// Inputs
// (64,)
buffer_conv_3_model_2_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[52] = buffer_conv_3_model_2_project_bn_weight;


// (64,)
buffer_conv_3_model_2_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[53] = buffer_conv_3_model_2_project_bn_bias;


// (64,)
buffer_conv_3_model_2_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[54] = buffer_conv_3_model_2_project_bn_running_mean;


// (64,)
buffer_conv_3_model_2_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[55] = buffer_conv_3_model_2_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
buffer_383 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_383[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_40, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
buffer_384 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_384[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_41, Operation: Conv
// Inputs
// (128, 64, 1, 1)
buffer_conv_3_model_3_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_3_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[24] = buffer_conv_3_model_3_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_385 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_385[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_42, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_3_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[56] = buffer_conv_3_model_3_conv_bn_weight;


// (128,)
buffer_conv_3_model_3_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[57] = buffer_conv_3_model_3_conv_bn_bias;


// (128,)
buffer_conv_3_model_3_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[58] = buffer_conv_3_model_3_conv_bn_running_mean;


// (128,)
buffer_conv_3_model_3_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[59] = buffer_conv_3_model_3_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_386 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_386[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_43, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_533 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_533[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[25] = buffer_533;


// Outputs
// (1, 128, 28, 28)
buffer_388 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_388[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_44, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_conv_3_model_3_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_conv_3_model_3_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[26] = buffer_conv_3_model_3_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
buffer_389 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_389[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_45, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_3_model_3_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[60] = buffer_conv_3_model_3_conv_dw_bn_weight;


// (128,)
buffer_conv_3_model_3_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[61] = buffer_conv_3_model_3_conv_dw_bn_bias;


// (128,)
buffer_conv_3_model_3_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[62] = buffer_conv_3_model_3_conv_dw_bn_running_mean;


// (128,)
buffer_conv_3_model_3_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[63] = buffer_conv_3_model_3_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_390 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_390[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_46, Operation: PRelu
// Inputs
// (128, 1, 1)
buffer_534 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_534[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[27] = buffer_534;


// Outputs
// (1, 128, 28, 28)
buffer_392 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_392[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_47, Operation: Conv
// Inputs
// (64, 128, 1, 1)
buffer_conv_3_model_3_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_conv_3_model_3_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[28] = buffer_conv_3_model_3_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
buffer_393 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_393[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_48, Operation: BatchNormalization
// Inputs
// (64,)
buffer_conv_3_model_3_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[64] = buffer_conv_3_model_3_project_bn_weight;


// (64,)
buffer_conv_3_model_3_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[65] = buffer_conv_3_model_3_project_bn_bias;


// (64,)
buffer_conv_3_model_3_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[66] = buffer_conv_3_model_3_project_bn_running_mean;


// (64,)
buffer_conv_3_model_3_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[67] = buffer_conv_3_model_3_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
buffer_394 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_394[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_49, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
buffer_395 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_395[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_50, Operation: Conv
// Inputs
// (256, 64, 1, 1)
buffer_conv_34_conv_conv_weight = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_conv_34_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[29] = buffer_conv_34_conv_conv_weight;


// Outputs
// (1, 256, 28, 28)
buffer_396 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_396[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_51, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_34_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[68] = buffer_conv_34_conv_bn_weight;


// (256,)
buffer_conv_34_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[69] = buffer_conv_34_conv_bn_bias;


// (256,)
buffer_conv_34_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[70] = buffer_conv_34_conv_bn_running_mean;


// (256,)
buffer_conv_34_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[71] = buffer_conv_34_conv_bn_running_var;


// Outputs
// (1, 256, 28, 28)
buffer_397 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_397[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_52, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_535 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_535[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[30] = buffer_535;


// Outputs
// (1, 256, 28, 28)
buffer_399 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_399[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_53, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_34_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_34_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[31] = buffer_conv_34_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_400 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_400[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_54, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_34_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[72] = buffer_conv_34_conv_dw_bn_weight;


// (256,)
buffer_conv_34_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[73] = buffer_conv_34_conv_dw_bn_bias;


// (256,)
buffer_conv_34_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[74] = buffer_conv_34_conv_dw_bn_running_mean;


// (256,)
buffer_conv_34_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[75] = buffer_conv_34_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_401 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_401[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_55, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_536 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_536[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[32] = buffer_536;


// Outputs
// (1, 256, 14, 14)
buffer_403 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_403[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_56, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_34_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_34_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[33] = buffer_conv_34_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
buffer_404 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_404[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_57, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_34_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[76] = buffer_conv_34_project_bn_weight;


// (128,)
buffer_conv_34_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[77] = buffer_conv_34_project_bn_bias;


// (128,)
buffer_conv_34_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[78] = buffer_conv_34_project_bn_running_mean;


// (128,)
buffer_conv_34_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[79] = buffer_conv_34_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
buffer_405 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_405[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_58, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_4_model_0_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_0_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[34] = buffer_conv_4_model_0_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_406 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_406[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_59, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_0_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[80] = buffer_conv_4_model_0_conv_bn_weight;


// (256,)
buffer_conv_4_model_0_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[81] = buffer_conv_4_model_0_conv_bn_bias;


// (256,)
buffer_conv_4_model_0_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[82] = buffer_conv_4_model_0_conv_bn_running_mean;


// (256,)
buffer_conv_4_model_0_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[83] = buffer_conv_4_model_0_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_407 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_407[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_60, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_537 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_537[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[35] = buffer_537;


// Outputs
// (1, 256, 14, 14)
buffer_409 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_409[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_61, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_4_model_0_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_4_model_0_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[36] = buffer_conv_4_model_0_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_410 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_410[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_62, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_0_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[84] = buffer_conv_4_model_0_conv_dw_bn_weight;


// (256,)
buffer_conv_4_model_0_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[85] = buffer_conv_4_model_0_conv_dw_bn_bias;


// (256,)
buffer_conv_4_model_0_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[86] = buffer_conv_4_model_0_conv_dw_bn_running_mean;


// (256,)
buffer_conv_4_model_0_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[87] = buffer_conv_4_model_0_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_411 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_411[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_63, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_538 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_538[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[37] = buffer_538;


// Outputs
// (1, 256, 14, 14)
buffer_413 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_413[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_64, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_4_model_0_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_0_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[38] = buffer_conv_4_model_0_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
buffer_414 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_414[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_65, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_4_model_0_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[88] = buffer_conv_4_model_0_project_bn_weight;


// (128,)
buffer_conv_4_model_0_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[89] = buffer_conv_4_model_0_project_bn_bias;


// (128,)
buffer_conv_4_model_0_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[90] = buffer_conv_4_model_0_project_bn_running_mean;


// (128,)
buffer_conv_4_model_0_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[91] = buffer_conv_4_model_0_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
buffer_415 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_415[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_66, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
buffer_416 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_416[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_67, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_4_model_1_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_1_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[39] = buffer_conv_4_model_1_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_417 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_417[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_68, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_1_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[92] = buffer_conv_4_model_1_conv_bn_weight;


// (256,)
buffer_conv_4_model_1_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[93] = buffer_conv_4_model_1_conv_bn_bias;


// (256,)
buffer_conv_4_model_1_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[94] = buffer_conv_4_model_1_conv_bn_running_mean;


// (256,)
buffer_conv_4_model_1_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[95] = buffer_conv_4_model_1_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_418 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_418[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_69, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_539 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_539[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[40] = buffer_539;


// Outputs
// (1, 256, 14, 14)
buffer_420 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_420[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_70, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_4_model_1_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_4_model_1_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[41] = buffer_conv_4_model_1_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_421 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_421[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_71, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_1_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[96] = buffer_conv_4_model_1_conv_dw_bn_weight;


// (256,)
buffer_conv_4_model_1_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[97] = buffer_conv_4_model_1_conv_dw_bn_bias;


// (256,)
buffer_conv_4_model_1_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[98] = buffer_conv_4_model_1_conv_dw_bn_running_mean;


// (256,)
buffer_conv_4_model_1_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[99] = buffer_conv_4_model_1_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_422 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_422[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_72, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_540 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_540[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[42] = buffer_540;


// Outputs
// (1, 256, 14, 14)
buffer_424 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_424[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_73, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_4_model_1_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_1_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[43] = buffer_conv_4_model_1_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
buffer_425 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_425[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_74, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_4_model_1_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[100] = buffer_conv_4_model_1_project_bn_weight;


// (128,)
buffer_conv_4_model_1_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[101] = buffer_conv_4_model_1_project_bn_bias;


// (128,)
buffer_conv_4_model_1_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[102] = buffer_conv_4_model_1_project_bn_running_mean;


// (128,)
buffer_conv_4_model_1_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[103] = buffer_conv_4_model_1_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
buffer_426 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_426[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_75, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
buffer_427 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_427[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_76, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_4_model_2_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_2_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[44] = buffer_conv_4_model_2_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_428 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_428[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_77, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_2_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[104] = buffer_conv_4_model_2_conv_bn_weight;


// (256,)
buffer_conv_4_model_2_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[105] = buffer_conv_4_model_2_conv_bn_bias;


// (256,)
buffer_conv_4_model_2_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[106] = buffer_conv_4_model_2_conv_bn_running_mean;


// (256,)
buffer_conv_4_model_2_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[107] = buffer_conv_4_model_2_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_429 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_429[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_78, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_541 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_541[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[45] = buffer_541;


// Outputs
// (1, 256, 14, 14)
buffer_431 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_431[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_79, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_4_model_2_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_4_model_2_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[46] = buffer_conv_4_model_2_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_432 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_432[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_80, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_2_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[108] = buffer_conv_4_model_2_conv_dw_bn_weight;


// (256,)
buffer_conv_4_model_2_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[109] = buffer_conv_4_model_2_conv_dw_bn_bias;


// (256,)
buffer_conv_4_model_2_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[110] = buffer_conv_4_model_2_conv_dw_bn_running_mean;


// (256,)
buffer_conv_4_model_2_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[111] = buffer_conv_4_model_2_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_433 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_433[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_81, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_542 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_542[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[47] = buffer_542;


// Outputs
// (1, 256, 14, 14)
buffer_435 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_435[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_82, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_4_model_2_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_2_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[48] = buffer_conv_4_model_2_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
buffer_436 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_436[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_83, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_4_model_2_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[112] = buffer_conv_4_model_2_project_bn_weight;


// (128,)
buffer_conv_4_model_2_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[113] = buffer_conv_4_model_2_project_bn_bias;


// (128,)
buffer_conv_4_model_2_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[114] = buffer_conv_4_model_2_project_bn_running_mean;


// (128,)
buffer_conv_4_model_2_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[115] = buffer_conv_4_model_2_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
buffer_437 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_437[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_84, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
buffer_438 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_438[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_85, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_4_model_3_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_3_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[49] = buffer_conv_4_model_3_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_439 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_439[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_86, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_3_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[116] = buffer_conv_4_model_3_conv_bn_weight;


// (256,)
buffer_conv_4_model_3_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[117] = buffer_conv_4_model_3_conv_bn_bias;


// (256,)
buffer_conv_4_model_3_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[118] = buffer_conv_4_model_3_conv_bn_running_mean;


// (256,)
buffer_conv_4_model_3_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[119] = buffer_conv_4_model_3_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_440 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_440[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_87, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_543 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_543[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[50] = buffer_543;


// Outputs
// (1, 256, 14, 14)
buffer_442 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_442[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_88, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_4_model_3_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_4_model_3_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[51] = buffer_conv_4_model_3_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_443 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_443[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_89, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_3_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[120] = buffer_conv_4_model_3_conv_dw_bn_weight;


// (256,)
buffer_conv_4_model_3_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[121] = buffer_conv_4_model_3_conv_dw_bn_bias;


// (256,)
buffer_conv_4_model_3_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[122] = buffer_conv_4_model_3_conv_dw_bn_running_mean;


// (256,)
buffer_conv_4_model_3_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[123] = buffer_conv_4_model_3_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_444 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_444[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_90, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_544 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_544[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[52] = buffer_544;


// Outputs
// (1, 256, 14, 14)
buffer_446 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_446[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_91, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_4_model_3_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_3_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[53] = buffer_conv_4_model_3_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
buffer_447 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_447[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_92, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_4_model_3_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[124] = buffer_conv_4_model_3_project_bn_weight;


// (128,)
buffer_conv_4_model_3_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[125] = buffer_conv_4_model_3_project_bn_bias;


// (128,)
buffer_conv_4_model_3_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[126] = buffer_conv_4_model_3_project_bn_running_mean;


// (128,)
buffer_conv_4_model_3_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[127] = buffer_conv_4_model_3_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
buffer_448 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_448[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_93, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
buffer_449 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_449[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_94, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_4_model_4_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_4_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[54] = buffer_conv_4_model_4_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_450 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_450[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_95, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_4_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[128] = buffer_conv_4_model_4_conv_bn_weight;


// (256,)
buffer_conv_4_model_4_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[129] = buffer_conv_4_model_4_conv_bn_bias;


// (256,)
buffer_conv_4_model_4_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[130] = buffer_conv_4_model_4_conv_bn_running_mean;


// (256,)
buffer_conv_4_model_4_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[131] = buffer_conv_4_model_4_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_451 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_451[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_96, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_545 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_545[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[55] = buffer_545;


// Outputs
// (1, 256, 14, 14)
buffer_453 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_453[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_97, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_4_model_4_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_4_model_4_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[56] = buffer_conv_4_model_4_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_454 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_454[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_98, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_4_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[132] = buffer_conv_4_model_4_conv_dw_bn_weight;


// (256,)
buffer_conv_4_model_4_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[133] = buffer_conv_4_model_4_conv_dw_bn_bias;


// (256,)
buffer_conv_4_model_4_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[134] = buffer_conv_4_model_4_conv_dw_bn_running_mean;


// (256,)
buffer_conv_4_model_4_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[135] = buffer_conv_4_model_4_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_455 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_455[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_99, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_546 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_546[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[57] = buffer_546;


// Outputs
// (1, 256, 14, 14)
buffer_457 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_457[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_100, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_4_model_4_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_4_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[58] = buffer_conv_4_model_4_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
buffer_458 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_458[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_101, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_4_model_4_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[136] = buffer_conv_4_model_4_project_bn_weight;


// (128,)
buffer_conv_4_model_4_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[137] = buffer_conv_4_model_4_project_bn_bias;


// (128,)
buffer_conv_4_model_4_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[138] = buffer_conv_4_model_4_project_bn_running_mean;


// (128,)
buffer_conv_4_model_4_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[139] = buffer_conv_4_model_4_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
buffer_459 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_459[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_102, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
buffer_460 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_460[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_103, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_4_model_5_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_5_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[59] = buffer_conv_4_model_5_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_461 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_461[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_104, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_5_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[140] = buffer_conv_4_model_5_conv_bn_weight;


// (256,)
buffer_conv_4_model_5_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[141] = buffer_conv_4_model_5_conv_bn_bias;


// (256,)
buffer_conv_4_model_5_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[142] = buffer_conv_4_model_5_conv_bn_running_mean;


// (256,)
buffer_conv_4_model_5_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[143] = buffer_conv_4_model_5_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_462 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_462[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_105, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_547 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_547[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[60] = buffer_547;


// Outputs
// (1, 256, 14, 14)
buffer_464 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_464[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_106, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_4_model_5_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_4_model_5_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[61] = buffer_conv_4_model_5_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
buffer_465 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_465[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_107, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_4_model_5_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[144] = buffer_conv_4_model_5_conv_dw_bn_weight;


// (256,)
buffer_conv_4_model_5_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[145] = buffer_conv_4_model_5_conv_dw_bn_bias;


// (256,)
buffer_conv_4_model_5_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[146] = buffer_conv_4_model_5_conv_dw_bn_running_mean;


// (256,)
buffer_conv_4_model_5_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[147] = buffer_conv_4_model_5_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_466 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_466[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_108, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_548 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_548[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[62] = buffer_548;


// Outputs
// (1, 256, 14, 14)
buffer_468 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_468[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_109, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_4_model_5_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_4_model_5_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[63] = buffer_conv_4_model_5_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
buffer_469 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_469[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_110, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_4_model_5_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[148] = buffer_conv_4_model_5_project_bn_weight;


// (128,)
buffer_conv_4_model_5_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[149] = buffer_conv_4_model_5_project_bn_bias;


// (128,)
buffer_conv_4_model_5_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[150] = buffer_conv_4_model_5_project_bn_running_mean;


// (128,)
buffer_conv_4_model_5_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[151] = buffer_conv_4_model_5_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
buffer_470 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_470[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_111, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
buffer_471 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_471[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_112, Operation: Conv
// Inputs
// (512, 128, 1, 1)
buffer_conv_45_conv_conv_weight = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_conv_45_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[64] = buffer_conv_45_conv_conv_weight;


// Outputs
// (1, 512, 14, 14)
buffer_472 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_472[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_113, Operation: BatchNormalization
// Inputs
// (512,)
buffer_conv_45_conv_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[152] = buffer_conv_45_conv_bn_weight;


// (512,)
buffer_conv_45_conv_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[153] = buffer_conv_45_conv_bn_bias;


// (512,)
buffer_conv_45_conv_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[154] = buffer_conv_45_conv_bn_running_mean;


// (512,)
buffer_conv_45_conv_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[155] = buffer_conv_45_conv_bn_running_var;


// Outputs
// (1, 512, 14, 14)
buffer_473 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_473[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_114, Operation: PRelu
// Inputs
// (512, 1, 1)
buffer_549 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_549[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[65] = buffer_549;


// Outputs
// (1, 512, 14, 14)
buffer_475 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_475[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_115, Operation: Conv
// Inputs
// (512, 1, 3, 3)
buffer_conv_45_conv_dw_conv_weight = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_conv_45_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[66] = buffer_conv_45_conv_dw_conv_weight;


// Outputs
// (1, 512, 7, 7)
buffer_476 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_476[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_116, Operation: BatchNormalization
// Inputs
// (512,)
buffer_conv_45_conv_dw_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[156] = buffer_conv_45_conv_dw_bn_weight;


// (512,)
buffer_conv_45_conv_dw_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[157] = buffer_conv_45_conv_dw_bn_bias;


// (512,)
buffer_conv_45_conv_dw_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[158] = buffer_conv_45_conv_dw_bn_running_mean;


// (512,)
buffer_conv_45_conv_dw_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[159] = buffer_conv_45_conv_dw_bn_running_var;


// Outputs
// (1, 512, 7, 7)
buffer_477 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_477[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_117, Operation: PRelu
// Inputs
// (512, 1, 1)
buffer_550 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_550[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[67] = buffer_550;


// Outputs
// (1, 512, 7, 7)
buffer_479 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_479[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_118, Operation: Conv
// Inputs
// (128, 512, 1, 1)
buffer_conv_45_project_conv_weight = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_conv_45_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[68] = buffer_conv_45_project_conv_weight;


// Outputs
// (1, 128, 7, 7)
buffer_480 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_480[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_119, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_45_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[160] = buffer_conv_45_project_bn_weight;


// (128,)
buffer_conv_45_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[161] = buffer_conv_45_project_bn_bias;


// (128,)
buffer_conv_45_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[162] = buffer_conv_45_project_bn_running_mean;


// (128,)
buffer_conv_45_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[163] = buffer_conv_45_project_bn_running_var;


// Outputs
// (1, 128, 7, 7)
buffer_481 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_481[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_120, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_5_model_0_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_5_model_0_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[69] = buffer_conv_5_model_0_conv_conv_weight;


// Outputs
// (1, 256, 7, 7)
buffer_482 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_482[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_121, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_5_model_0_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[164] = buffer_conv_5_model_0_conv_bn_weight;


// (256,)
buffer_conv_5_model_0_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[165] = buffer_conv_5_model_0_conv_bn_bias;


// (256,)
buffer_conv_5_model_0_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[166] = buffer_conv_5_model_0_conv_bn_running_mean;


// (256,)
buffer_conv_5_model_0_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[167] = buffer_conv_5_model_0_conv_bn_running_var;


// Outputs
// (1, 256, 7, 7)
buffer_483 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_483[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_122, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_551 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_551[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[70] = buffer_551;


// Outputs
// (1, 256, 7, 7)
buffer_485 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_485[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_123, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_5_model_0_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_5_model_0_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[71] = buffer_conv_5_model_0_conv_dw_conv_weight;


// Outputs
// (1, 256, 7, 7)
buffer_486 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_486[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_124, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_5_model_0_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[168] = buffer_conv_5_model_0_conv_dw_bn_weight;


// (256,)
buffer_conv_5_model_0_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[169] = buffer_conv_5_model_0_conv_dw_bn_bias;


// (256,)
buffer_conv_5_model_0_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[170] = buffer_conv_5_model_0_conv_dw_bn_running_mean;


// (256,)
buffer_conv_5_model_0_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[171] = buffer_conv_5_model_0_conv_dw_bn_running_var;


// Outputs
// (1, 256, 7, 7)
buffer_487 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_487[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_125, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_552 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_552[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[72] = buffer_552;


// Outputs
// (1, 256, 7, 7)
buffer_489 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_489[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_126, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_5_model_0_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_5_model_0_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[73] = buffer_conv_5_model_0_project_conv_weight;


// Outputs
// (1, 128, 7, 7)
buffer_490 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_490[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_127, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_5_model_0_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[172] = buffer_conv_5_model_0_project_bn_weight;


// (128,)
buffer_conv_5_model_0_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[173] = buffer_conv_5_model_0_project_bn_bias;


// (128,)
buffer_conv_5_model_0_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[174] = buffer_conv_5_model_0_project_bn_running_mean;


// (128,)
buffer_conv_5_model_0_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[175] = buffer_conv_5_model_0_project_bn_running_var;


// Outputs
// (1, 128, 7, 7)
buffer_491 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_491[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_128, Operation: Add
// Inputs
// Outputs
// (1, 128, 7, 7)
buffer_492 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_492[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_129, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_conv_5_model_1_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_5_model_1_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[74] = buffer_conv_5_model_1_conv_conv_weight;


// Outputs
// (1, 256, 7, 7)
buffer_493 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_493[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_130, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_5_model_1_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[176] = buffer_conv_5_model_1_conv_bn_weight;


// (256,)
buffer_conv_5_model_1_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[177] = buffer_conv_5_model_1_conv_bn_bias;


// (256,)
buffer_conv_5_model_1_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[178] = buffer_conv_5_model_1_conv_bn_running_mean;


// (256,)
buffer_conv_5_model_1_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[179] = buffer_conv_5_model_1_conv_bn_running_var;


// Outputs
// (1, 256, 7, 7)
buffer_494 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_494[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_131, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_553 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_553[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[75] = buffer_553;


// Outputs
// (1, 256, 7, 7)
buffer_496 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_496[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_132, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_conv_5_model_1_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_conv_5_model_1_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[76] = buffer_conv_5_model_1_conv_dw_conv_weight;


// Outputs
// (1, 256, 7, 7)
buffer_497 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_497[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_133, Operation: BatchNormalization
// Inputs
// (256,)
buffer_conv_5_model_1_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[180] = buffer_conv_5_model_1_conv_dw_bn_weight;


// (256,)
buffer_conv_5_model_1_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[181] = buffer_conv_5_model_1_conv_dw_bn_bias;


// (256,)
buffer_conv_5_model_1_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[182] = buffer_conv_5_model_1_conv_dw_bn_running_mean;


// (256,)
buffer_conv_5_model_1_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[183] = buffer_conv_5_model_1_conv_dw_bn_running_var;


// Outputs
// (1, 256, 7, 7)
buffer_498 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_498[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_134, Operation: PRelu
// Inputs
// (256, 1, 1)
buffer_554 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_554[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[77] = buffer_554;


// Outputs
// (1, 256, 7, 7)
buffer_500 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_500[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_135, Operation: Conv
// Inputs
// (128, 256, 1, 1)
buffer_conv_5_model_1_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_conv_5_model_1_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[78] = buffer_conv_5_model_1_project_conv_weight;


// Outputs
// (1, 128, 7, 7)
buffer_501 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_501[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_136, Operation: BatchNormalization
// Inputs
// (128,)
buffer_conv_5_model_1_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[184] = buffer_conv_5_model_1_project_bn_weight;


// (128,)
buffer_conv_5_model_1_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[185] = buffer_conv_5_model_1_project_bn_bias;


// (128,)
buffer_conv_5_model_1_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[186] = buffer_conv_5_model_1_project_bn_running_mean;


// (128,)
buffer_conv_5_model_1_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[187] = buffer_conv_5_model_1_project_bn_running_var;


// Outputs
// (1, 128, 7, 7)
buffer_502 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_502[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_137, Operation: Add
// Inputs
// Outputs
// (1, 128, 7, 7)
buffer_503 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_503[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_138, Operation: Conv
// Inputs
// (512, 128, 1, 1)
buffer_conv_6_sep_conv_weight = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_conv_6_sep_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[79] = buffer_conv_6_sep_conv_weight;


// Outputs
// (1, 512, 7, 7)
buffer_504 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_504[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_139, Operation: BatchNormalization
// Inputs
// (512,)
buffer_conv_6_sep_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[188] = buffer_conv_6_sep_bn_weight;


// (512,)
buffer_conv_6_sep_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[189] = buffer_conv_6_sep_bn_bias;


// (512,)
buffer_conv_6_sep_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[190] = buffer_conv_6_sep_bn_running_mean;


// (512,)
buffer_conv_6_sep_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[191] = buffer_conv_6_sep_bn_running_var;


// Outputs
// (1, 512, 7, 7)
buffer_505 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_505[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_140, Operation: PRelu
// Inputs
// (512, 1, 1)
buffer_555 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_555[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[80] = buffer_555;


// Outputs
// (1, 512, 7, 7)
buffer_507 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_507[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_141, Operation: Conv
// Inputs
// (512, 1, 7, 7)
buffer_conv_6_dw_conv_weight = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_conv_6_dw_conv_weight[kernel] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



kernels[81] = buffer_conv_6_dw_conv_weight;


// Outputs
// (1, 512, 1, 1)
buffer_508 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_508[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: BatchNormalization_142, Operation: BatchNormalization
// Inputs
// (512,)
buffer_conv_6_dw_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[192] = buffer_conv_6_dw_bn_weight;


// (512,)
buffer_conv_6_dw_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[193] = buffer_conv_6_dw_bn_bias;


// (512,)
buffer_conv_6_dw_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[194] = buffer_conv_6_dw_bn_running_mean;


// (512,)
buffer_conv_6_dw_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[195] = buffer_conv_6_dw_bn_running_var;


// Outputs
// (1, 512, 1, 1)
buffer_509 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_509[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Reshape_148, Operation: Reshape
// Inputs
// Outputs
// (1, 512)
buffer_517 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: MatMul_149, Operation: MatMul
// Inputs
// (512, 512)
buffer_557 = (fp_t*) malloc(262144 * sizeof(fp_t));



kernels[82] = &buffer_557;


// Outputs
// (1, 512)
buffer_519 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: BatchNormalization_150, Operation: BatchNormalization1d
// Inputs
// (512,)
buffer_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[196] = buffer_bn_weight;


// (512,)
buffer_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[197] = buffer_bn_bias;


// (512,)
buffer_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[198] = buffer_bn_running_mean;


// (512,)
buffer_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[199] = buffer_bn_running_var;


// Outputs
// (1, 512)
buffer_520 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: ReduceL2_151, Operation: ReduceL2
// Inputs
// Outputs
// (1, 1)
buffer_521 = (fp_t*) malloc(1 * sizeof(fp_t));



// Layer: Div_152, Operation: Div
// Inputs
// Outputs
// (1, 512)
output_output = (fp_t*) malloc(512 * sizeof(fp_t));



}
