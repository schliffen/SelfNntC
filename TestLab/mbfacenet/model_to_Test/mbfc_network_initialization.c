#include "mbfc_network_initialization.h"

void mbfc_feature_initialize_network() {

mbfc_kernels = (fp_t***) malloc(83 * sizeof(fp_t**));
mbfc_biases = (fp_t**) malloc(200 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
mbfc_buffer_conv1_conv_weight = (fp_t**) malloc(192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 192; kernel++){
    mbfc_buffer_conv1_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[0] = mbfc_buffer_conv1_conv_weight;


// Outputs
// (1, 64, 56, 56)
mbfc_buffer_334 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_334[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: BatchNormalization_1, Operation: BatchNormalization
// Inputs
// (64,)
mbfc_buffer_conv1_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[0] = mbfc_buffer_conv1_bn_weight;


// (64,)
mbfc_buffer_conv1_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[1] = mbfc_buffer_conv1_bn_bias;


// (64,)
mbfc_buffer_conv1_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[2] = mbfc_buffer_conv1_bn_running_mean;


// (64,)
mbfc_buffer_conv1_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[3] = mbfc_buffer_conv1_bn_running_var;


// Outputs
// (1, 64, 56, 56)
mbfc_buffer_335 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_335[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_2, Operation: PRelu
// Inputs
// (64, 1, 1)
feature_mbfc_buffer_523 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    feature_mbfc_buffer_523[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}

mbfc_kernels[1] = feature_mbfc_buffer_523;


// Outputs
// (1, 64, 56, 56)
mbfc_buffer_337 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_337[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Conv_3, Operation: Conv
// Inputs
// (64, 1, 3, 3)
mbfc_buffer_conv2_dw_conv_weight = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    mbfc_buffer_conv2_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[2] = mbfc_buffer_conv2_dw_conv_weight;


// Outputs
// (1, 64, 56, 56)
mbfc_buffer_338 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_338[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: BatchNormalization_4, Operation: BatchNormalization
// Inputs
// (64,)
mbfc_buffer_conv2_dw_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[4] = mbfc_buffer_conv2_dw_bn_weight;


// (64,)
mbfc_buffer_conv2_dw_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[5] = mbfc_buffer_conv2_dw_bn_bias;


// (64,)
mbfc_buffer_conv2_dw_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[6] = mbfc_buffer_conv2_dw_bn_running_mean;


// (64,)
mbfc_buffer_conv2_dw_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[7] = mbfc_buffer_conv2_dw_bn_running_var;


// Outputs
// (1, 64, 56, 56)
feature_mbfc_buffer_339 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    feature_mbfc_buffer_339[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_5, Operation: PRelu
// Inputs
// (64, 1, 1)
feature_mbfc_buffer_524 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    feature_mbfc_buffer_524[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[3] = feature_mbfc_buffer_524;


// Outputs
// (1, 64, 56, 56)
mbfc_buffer_341 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_341[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Conv_6, Operation: Conv
// Inputs
// (128, 64, 1, 1)
mbfc_buffer_conv_23_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_23_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[4] = mbfc_buffer_conv_23_conv_conv_weight;


// Outputs
// (1, 128, 56, 56)
feature_mbfc_buffer_342 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_342[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: BatchNormalization_7, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_23_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[8] = mbfc_buffer_conv_23_conv_bn_weight;


// (128,)
mbfc_buffer_conv_23_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[9] = mbfc_buffer_conv_23_conv_bn_bias;


// (128,)
mbfc_buffer_conv_23_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[10] = mbfc_buffer_conv_23_conv_bn_running_mean;


// (128,)
mbfc_buffer_conv_23_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[11] = mbfc_buffer_conv_23_conv_bn_running_var;


// Outputs
// (1, 128, 56, 56)
mbfc_buffer_343 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_343[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: PRelu_8, Operation: PRelu
// Inputs
// (128, 1, 1)
feature_mbfc_buffer_525 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    feature_mbfc_buffer_525[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[5] = feature_mbfc_buffer_525;


// Outputs
// (1, 128, 56, 56)
feature_mbfc_buffer_345 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_345[output] = (fp_t*) malloc(56*56 * sizeof(fp_t));
}



// Layer: Conv_9, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mbfc_buffer_conv_23_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_conv_23_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[6] = mbfc_buffer_conv_23_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_346 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_346[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_10, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_23_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[12] = mbfc_buffer_conv_23_conv_dw_bn_weight;


// (128,)
mbfc_buffer_conv_23_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[13] = mbfc_buffer_conv_23_conv_dw_bn_bias;


// (128,)
mbfc_buffer_conv_23_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[14] = mbfc_buffer_conv_23_conv_dw_bn_running_mean;


// (128,)
mbfc_buffer_conv_23_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[15] = mbfc_buffer_conv_23_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_347 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_347[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_11, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_526 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_526[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[7] = mbfc_buffer_526;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_349 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_349[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_12, Operation: Conv
// Inputs
// (64, 128, 1, 1)
mbfc_buffer_conv_23_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_23_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[8] = mbfc_buffer_conv_23_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
mbfc_buffer_350 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_350[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_13, Operation: BatchNormalization
// Inputs
// (64,)
mbfc_buffer_conv_23_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[16] = mbfc_buffer_conv_23_project_bn_weight;


// (64,)
mbfc_buffer_conv_23_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[17] = mbfc_buffer_conv_23_project_bn_bias;


// (64,)
mbfc_buffer_conv_23_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[18] = mbfc_buffer_conv_23_project_bn_running_mean;


// (64,)
mbfc_buffer_conv_23_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[19] = mbfc_buffer_conv_23_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
feature_mbfc_buffer_351 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    feature_mbfc_buffer_351[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_14, Operation: Conv
// Inputs
// (128, 64, 1, 1)
mbfc_buffer_conv_3_model_0_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_0_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[9] = mbfc_buffer_conv_3_model_0_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_352 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_352[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_15, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_0_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[20] = mbfc_buffer_conv_3_model_0_conv_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_0_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[21] = mbfc_buffer_conv_3_model_0_conv_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_0_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[22] = mbfc_buffer_conv_3_model_0_conv_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_0_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[23] = mbfc_buffer_conv_3_model_0_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_353 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_353[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_16, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_527 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_527[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[10] = mbfc_buffer_527;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_355 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_355[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_17, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mbfc_buffer_conv_3_model_0_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_conv_3_model_0_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[11] = mbfc_buffer_conv_3_model_0_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_356 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_356[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_18, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_0_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[24] = mbfc_buffer_conv_3_model_0_conv_dw_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_0_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[25] = mbfc_buffer_conv_3_model_0_conv_dw_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_0_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[26] = mbfc_buffer_conv_3_model_0_conv_dw_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_0_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[27] = mbfc_buffer_conv_3_model_0_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
feature_mbfc_buffer_357 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_357[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_19, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_528 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_528[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[12] = mbfc_buffer_528;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_359 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_359[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_20, Operation: Conv
// Inputs
// (64, 128, 1, 1)
mbfc_buffer_conv_3_model_0_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_0_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[13] = mbfc_buffer_conv_3_model_0_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
feature_mbfc_buffer_360 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    feature_mbfc_buffer_360[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_21, Operation: BatchNormalization
// Inputs
// (64,)
mbfc_buffer_conv_3_model_0_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[28] = mbfc_buffer_conv_3_model_0_project_bn_weight;


// (64,)
mbfc_buffer_conv_3_model_0_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[29] = mbfc_buffer_conv_3_model_0_project_bn_bias;


// (64,)
mbfc_buffer_conv_3_model_0_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[30] = mbfc_buffer_conv_3_model_0_project_bn_running_mean;


// (64,)
mbfc_buffer_conv_3_model_0_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[31] = mbfc_buffer_conv_3_model_0_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
mbfc_buffer_361 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_361[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_22, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
mbfc_buffer_362 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_362[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_23, Operation: Conv
// Inputs
// (128, 64, 1, 1)
mbfc_buffer_conv_3_model_1_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_1_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[14] = mbfc_buffer_conv_3_model_1_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
feature_mbfc_buffer_363 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_363[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_24, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_1_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[32] = mbfc_buffer_conv_3_model_1_conv_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_1_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[33] = mbfc_buffer_conv_3_model_1_conv_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_1_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[34] = mbfc_buffer_conv_3_model_1_conv_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_1_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[35] = mbfc_buffer_conv_3_model_1_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_364 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_364[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_25, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_529 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_529[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[15] = mbfc_buffer_529;


// Outputs
// (1, 128, 28, 28)
feature_mbfc_buffer_366 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_366[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_26, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mbfc_buffer_conv_3_model_1_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_conv_3_model_1_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[16] = mbfc_buffer_conv_3_model_1_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_367 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_367[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_27, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_1_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[36] = mbfc_buffer_conv_3_model_1_conv_dw_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_1_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[37] = mbfc_buffer_conv_3_model_1_conv_dw_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_1_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[38] = mbfc_buffer_conv_3_model_1_conv_dw_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_1_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[39] = mbfc_buffer_conv_3_model_1_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_368 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_368[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_28, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_530 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_530[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[17] = mbfc_buffer_530;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_370 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_370[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_29, Operation: Conv
// Inputs
// (64, 128, 1, 1)
mbfc_buffer_conv_3_model_1_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_1_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[18] = mbfc_buffer_conv_3_model_1_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
mbfc_buffer_371 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_371[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_30, Operation: BatchNormalization
// Inputs
// (64,)
mbfc_buffer_conv_3_model_1_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[40] = mbfc_buffer_conv_3_model_1_project_bn_weight;


// (64,)
mbfc_buffer_conv_3_model_1_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[41] = mbfc_buffer_conv_3_model_1_project_bn_bias;


// (64,)
mbfc_buffer_conv_3_model_1_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[42] = mbfc_buffer_conv_3_model_1_project_bn_running_mean;


// (64,)
mbfc_buffer_conv_3_model_1_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[43] = mbfc_buffer_conv_3_model_1_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
feature_mbfc_buffer_372 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    feature_mbfc_buffer_372[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_31, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
mbfc_buffer_373 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_373[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_32, Operation: Conv
// Inputs
// (128, 64, 1, 1)
mbfc_buffer_conv_3_model_2_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_2_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[19] = mbfc_buffer_conv_3_model_2_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_374 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_374[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_33, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_2_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[44] = mbfc_buffer_conv_3_model_2_conv_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_2_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[45] = mbfc_buffer_conv_3_model_2_conv_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_2_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[46] = mbfc_buffer_conv_3_model_2_conv_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_2_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[47] = mbfc_buffer_conv_3_model_2_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
feature_mbfc_buffer_375 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_375[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_34, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_531 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_531[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[20] = mbfc_buffer_531;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_377 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_377[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_35, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mbfc_buffer_conv_3_model_2_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_conv_3_model_2_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[21] = mbfc_buffer_conv_3_model_2_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
feature_mbfc_buffer_378 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_378[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_36, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_2_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[48] = mbfc_buffer_conv_3_model_2_conv_dw_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_2_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[49] = mbfc_buffer_conv_3_model_2_conv_dw_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_2_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[50] = mbfc_buffer_conv_3_model_2_conv_dw_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_2_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[51] = mbfc_buffer_conv_3_model_2_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_379 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_379[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_37, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_532 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_532[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[22] = mbfc_buffer_532;


// Outputs
// (1, 128, 28, 28)
feature_mbfc_buffer_381 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_381[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_38, Operation: Conv
// Inputs
// (64, 128, 1, 1)
mbfc_buffer_conv_3_model_2_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_2_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[23] = mbfc_buffer_conv_3_model_2_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
mbfc_buffer_382 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_382[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_39, Operation: BatchNormalization
// Inputs
// (64,)
mbfc_buffer_conv_3_model_2_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[52] = mbfc_buffer_conv_3_model_2_project_bn_weight;


// (64,)
mbfc_buffer_conv_3_model_2_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[53] = mbfc_buffer_conv_3_model_2_project_bn_bias;


// (64,)
mbfc_buffer_conv_3_model_2_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[54] = mbfc_buffer_conv_3_model_2_project_bn_running_mean;


// (64,)
mbfc_buffer_conv_3_model_2_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[55] = mbfc_buffer_conv_3_model_2_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
mbfc_buffer_383 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_383[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_40, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
feature_mbfc_buffer_384 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    feature_mbfc_buffer_384[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_41, Operation: Conv
// Inputs
// (128, 64, 1, 1)
mbfc_buffer_conv_3_model_3_conv_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_3_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[24] = mbfc_buffer_conv_3_model_3_conv_conv_weight;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_385 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_385[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_42, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_3_conv_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[56] = mbfc_buffer_conv_3_model_3_conv_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_3_conv_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[57] = mbfc_buffer_conv_3_model_3_conv_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_3_conv_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[58] = mbfc_buffer_conv_3_model_3_conv_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_3_conv_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[59] = mbfc_buffer_conv_3_model_3_conv_bn_running_var;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_386 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_386[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_43, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_533 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_533[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[25] = mbfc_buffer_533;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_388 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_388[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_44, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mbfc_buffer_conv_3_model_3_conv_dw_conv_weight = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_conv_3_model_3_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[26] = mbfc_buffer_conv_3_model_3_conv_dw_conv_weight;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_389 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_389[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_45, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_3_model_3_conv_dw_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[60] = mbfc_buffer_conv_3_model_3_conv_dw_bn_weight;


// (128,)
mbfc_buffer_conv_3_model_3_conv_dw_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[61] = mbfc_buffer_conv_3_model_3_conv_dw_bn_bias;


// (128,)
mbfc_buffer_conv_3_model_3_conv_dw_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[62] = mbfc_buffer_conv_3_model_3_conv_dw_bn_running_mean;


// (128,)
mbfc_buffer_conv_3_model_3_conv_dw_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[63] = mbfc_buffer_conv_3_model_3_conv_dw_bn_running_var;


// Outputs
// (1, 128, 28, 28)
feature_mbfc_buffer_390 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_390[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_46, Operation: PRelu
// Inputs
// (128, 1, 1)
mbfc_buffer_534 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mbfc_buffer_534[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[27] = mbfc_buffer_534;


// Outputs
// (1, 128, 28, 28)
mbfc_buffer_392 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_392[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_47, Operation: Conv
// Inputs
// (64, 128, 1, 1)
mbfc_buffer_conv_3_model_3_project_conv_weight = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mbfc_buffer_conv_3_model_3_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[28] = mbfc_buffer_conv_3_model_3_project_conv_weight;


// Outputs
// (1, 64, 28, 28)
mbfc_buffer_393 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_393[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_48, Operation: BatchNormalization
// Inputs
// (64,)
mbfc_buffer_conv_3_model_3_project_bn_weight = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[64] = mbfc_buffer_conv_3_model_3_project_bn_weight;


// (64,)
mbfc_buffer_conv_3_model_3_project_bn_bias = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[65] = mbfc_buffer_conv_3_model_3_project_bn_bias;


// (64,)
mbfc_buffer_conv_3_model_3_project_bn_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[66] = mbfc_buffer_conv_3_model_3_project_bn_running_mean;


// (64,)
mbfc_buffer_conv_3_model_3_project_bn_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



mbfc_biases[67] = mbfc_buffer_conv_3_model_3_project_bn_running_var;


// Outputs
// (1, 64, 28, 28)
mbfc_buffer_394 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_394[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_49, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
mbfc_buffer_395 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mbfc_buffer_395[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_50, Operation: Conv
// Inputs
// (256, 64, 1, 1)
mbfc_buffer_conv_34_conv_conv_weight = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    mbfc_buffer_conv_34_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[29] = mbfc_buffer_conv_34_conv_conv_weight;


// Outputs
// (1, 256, 28, 28)
mbfc_buffer_396 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_396[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_51, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_34_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[68] = mbfc_buffer_conv_34_conv_bn_weight;


// (256,)
mbfc_buffer_conv_34_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[69] = mbfc_buffer_conv_34_conv_bn_bias;


// (256,)
mbfc_buffer_conv_34_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[70] = mbfc_buffer_conv_34_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_34_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[71] = mbfc_buffer_conv_34_conv_bn_running_var;


// Outputs
// (1, 256, 28, 28)
mbfc_buffer_397 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_397[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_52, Operation: PRelu
// Inputs
// (256, 1, 1)
feature_mbfc_buffer_535 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    feature_mbfc_buffer_535[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[30] = feature_mbfc_buffer_535;


// Outputs
// (1, 256, 28, 28)
mbfc_buffer_399 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_399[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_53, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_34_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_34_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[31] = mbfc_buffer_conv_34_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_400 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_400[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_54, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_34_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[72] = mbfc_buffer_conv_34_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_34_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[73] = mbfc_buffer_conv_34_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_34_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[74] = mbfc_buffer_conv_34_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_34_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[75] = mbfc_buffer_conv_34_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_401 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_401[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_55, Operation: PRelu
// Inputs
// (256, 1, 1)
feature_mbfc_buffer_536 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    feature_mbfc_buffer_536[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[32] = feature_mbfc_buffer_536;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_403 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_403[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_56, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_34_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_34_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[33] = mbfc_buffer_conv_34_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_404 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_404[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_57, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_34_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[76] = mbfc_buffer_conv_34_project_bn_weight;


// (128,)
mbfc_buffer_conv_34_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[77] = mbfc_buffer_conv_34_project_bn_bias;


// (128,)
mbfc_buffer_conv_34_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[78] = mbfc_buffer_conv_34_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_34_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[79] = mbfc_buffer_conv_34_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_405 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_405[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_58, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_4_model_0_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_0_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[34] = mbfc_buffer_conv_4_model_0_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_406 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_406[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_59, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_0_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[80] = mbfc_buffer_conv_4_model_0_conv_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_0_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[81] = mbfc_buffer_conv_4_model_0_conv_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_0_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[82] = mbfc_buffer_conv_4_model_0_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_0_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[83] = mbfc_buffer_conv_4_model_0_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_407 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_407[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_60, Operation: PRelu
// Inputs
// (256, 1, 1)
feature_mbfc_buffer_537 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    feature_mbfc_buffer_537[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[35] = feature_mbfc_buffer_537;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_409 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_409[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_61, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_4_model_0_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_4_model_0_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[36] = mbfc_buffer_conv_4_model_0_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_410 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_410[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_62, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_0_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[84] = mbfc_buffer_conv_4_model_0_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_0_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[85] = mbfc_buffer_conv_4_model_0_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_0_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[86] = mbfc_buffer_conv_4_model_0_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_0_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[87] = mbfc_buffer_conv_4_model_0_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_411 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_411[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_63, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_538 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_538[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[37] = mbfc_buffer_538;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_413 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_413[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_64, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_4_model_0_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_0_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[38] = mbfc_buffer_conv_4_model_0_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_414 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_414[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_65, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_4_model_0_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[88] = mbfc_buffer_conv_4_model_0_project_bn_weight;


// (128,)
mbfc_buffer_conv_4_model_0_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[89] = mbfc_buffer_conv_4_model_0_project_bn_bias;


// (128,)
mbfc_buffer_conv_4_model_0_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[90] = mbfc_buffer_conv_4_model_0_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_4_model_0_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[91] = mbfc_buffer_conv_4_model_0_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_415 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_415[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_66, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
mbfc_buffer_416 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_416[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_67, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_4_model_1_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_1_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[39] = mbfc_buffer_conv_4_model_1_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_417 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_417[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_68, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_1_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[92] = mbfc_buffer_conv_4_model_1_conv_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_1_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[93] = mbfc_buffer_conv_4_model_1_conv_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_1_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[94] = mbfc_buffer_conv_4_model_1_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_1_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[95] = mbfc_buffer_conv_4_model_1_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_418 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_418[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_69, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_539 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_539[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[40] = mbfc_buffer_539;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_420 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_420[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_70, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_4_model_1_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_4_model_1_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[41] = mbfc_buffer_conv_4_model_1_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_421 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_421[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_71, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_1_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[96] = mbfc_buffer_conv_4_model_1_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_1_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[97] = mbfc_buffer_conv_4_model_1_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_1_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[98] = mbfc_buffer_conv_4_model_1_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_1_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[99] = mbfc_buffer_conv_4_model_1_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_422 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_422[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_72, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_540 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_540[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[42] = mbfc_buffer_540;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_424 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_424[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_73, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_4_model_1_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_1_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[43] = mbfc_buffer_conv_4_model_1_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_425 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_425[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_74, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_4_model_1_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[100] = mbfc_buffer_conv_4_model_1_project_bn_weight;


// (128,)
mbfc_buffer_conv_4_model_1_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[101] = mbfc_buffer_conv_4_model_1_project_bn_bias;


// (128,)
mbfc_buffer_conv_4_model_1_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[102] = mbfc_buffer_conv_4_model_1_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_4_model_1_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[103] = mbfc_buffer_conv_4_model_1_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_426 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_426[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_75, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
mbfc_buffer_427 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_427[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_76, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_4_model_2_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_2_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[44] = mbfc_buffer_conv_4_model_2_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_428 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_428[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_77, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_2_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[104] = mbfc_buffer_conv_4_model_2_conv_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_2_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[105] = mbfc_buffer_conv_4_model_2_conv_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_2_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[106] = mbfc_buffer_conv_4_model_2_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_2_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[107] = mbfc_buffer_conv_4_model_2_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_429 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_429[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_78, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_541 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_541[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[45] = mbfc_buffer_541;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_431 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_431[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_79, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_4_model_2_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_4_model_2_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[46] = mbfc_buffer_conv_4_model_2_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_432 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_432[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_80, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_2_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[108] = mbfc_buffer_conv_4_model_2_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_2_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[109] = mbfc_buffer_conv_4_model_2_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_2_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[110] = mbfc_buffer_conv_4_model_2_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_2_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[111] = mbfc_buffer_conv_4_model_2_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_433 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_433[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_81, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_542 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_542[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[47] = mbfc_buffer_542;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_435 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_435[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_82, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_4_model_2_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_2_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[48] = mbfc_buffer_conv_4_model_2_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_436 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_436[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_83, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_4_model_2_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[112] = mbfc_buffer_conv_4_model_2_project_bn_weight;


// (128,)
mbfc_buffer_conv_4_model_2_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[113] = mbfc_buffer_conv_4_model_2_project_bn_bias;


// (128,)
mbfc_buffer_conv_4_model_2_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[114] = mbfc_buffer_conv_4_model_2_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_4_model_2_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[115] = mbfc_buffer_conv_4_model_2_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
feature_mbfc_buffer_437 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_437[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_84, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
mbfc_buffer_438 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_438[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_85, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_4_model_3_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_3_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[49] = mbfc_buffer_conv_4_model_3_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_439 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_439[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_86, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_3_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[116] = mbfc_buffer_conv_4_model_3_conv_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_3_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[117] = mbfc_buffer_conv_4_model_3_conv_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_3_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[118] = mbfc_buffer_conv_4_model_3_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_3_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[119] = mbfc_buffer_conv_4_model_3_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_440 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_440[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_87, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_543 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_543[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[50] = mbfc_buffer_543;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_442 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_442[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_88, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_4_model_3_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_4_model_3_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[51] = mbfc_buffer_conv_4_model_3_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_443 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_443[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_89, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_3_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[120] = mbfc_buffer_conv_4_model_3_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_3_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[121] = mbfc_buffer_conv_4_model_3_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_3_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[122] = mbfc_buffer_conv_4_model_3_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_3_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[123] = mbfc_buffer_conv_4_model_3_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_444 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_444[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_90, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_544 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_544[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[52] = mbfc_buffer_544;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_446 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_446[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_91, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_4_model_3_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_3_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[53] = mbfc_buffer_conv_4_model_3_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_447 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_447[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_92, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_4_model_3_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[124] = mbfc_buffer_conv_4_model_3_project_bn_weight;


// (128,)
mbfc_buffer_conv_4_model_3_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[125] = mbfc_buffer_conv_4_model_3_project_bn_bias;


// (128,)
mbfc_buffer_conv_4_model_3_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[126] = mbfc_buffer_conv_4_model_3_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_4_model_3_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[127] = mbfc_buffer_conv_4_model_3_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_448 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_448[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_93, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
mbfc_buffer_449 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_449[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_94, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_4_model_4_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_4_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[54] = mbfc_buffer_conv_4_model_4_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_450 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_450[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_95, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_4_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[128] = mbfc_buffer_conv_4_model_4_conv_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_4_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[129] = mbfc_buffer_conv_4_model_4_conv_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_4_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[130] = mbfc_buffer_conv_4_model_4_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_4_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[131] = mbfc_buffer_conv_4_model_4_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_451 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_451[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_96, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_545 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_545[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[55] = mbfc_buffer_545;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_453 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_453[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_97, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_4_model_4_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_4_model_4_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[56] = mbfc_buffer_conv_4_model_4_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_454 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_454[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_98, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_4_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[132] = mbfc_buffer_conv_4_model_4_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_4_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[133] = mbfc_buffer_conv_4_model_4_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_4_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[134] = mbfc_buffer_conv_4_model_4_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_4_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[135] = mbfc_buffer_conv_4_model_4_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_455 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_455[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_99, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_546 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_546[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[57] = mbfc_buffer_546;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_457 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_457[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_100, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_4_model_4_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_4_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[58] = mbfc_buffer_conv_4_model_4_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_458 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_458[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_101, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_4_model_4_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[136] = mbfc_buffer_conv_4_model_4_project_bn_weight;


// (128,)
mbfc_buffer_conv_4_model_4_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[137] = mbfc_buffer_conv_4_model_4_project_bn_bias;


// (128,)
mbfc_buffer_conv_4_model_4_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[138] = mbfc_buffer_conv_4_model_4_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_4_model_4_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[139] = mbfc_buffer_conv_4_model_4_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
feature_mbfc_buffer_459 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_459[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_102, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
feature_mbfc_buffer_460 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_460[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_103, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_4_model_5_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_5_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[59] = mbfc_buffer_conv_4_model_5_conv_conv_weight;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_461 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_461[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_104, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_5_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[140] = mbfc_buffer_conv_4_model_5_conv_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_5_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[141] = mbfc_buffer_conv_4_model_5_conv_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_5_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[142] = mbfc_buffer_conv_4_model_5_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_5_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[143] = mbfc_buffer_conv_4_model_5_conv_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_462 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_462[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_105, Operation: PRelu
// Inputs
// (256, 1, 1)
feature_mbfc_buffer_547 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    feature_mbfc_buffer_547[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[60] = feature_mbfc_buffer_547;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_464 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_464[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_106, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_4_model_5_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_4_model_5_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[61] = mbfc_buffer_conv_4_model_5_conv_dw_conv_weight;


// Outputs
// (1, 256, 14, 14)
feature_mbfc_buffer_465 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_465[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_107, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_4_model_5_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[144] = mbfc_buffer_conv_4_model_5_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_4_model_5_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[145] = mbfc_buffer_conv_4_model_5_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_4_model_5_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[146] = mbfc_buffer_conv_4_model_5_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_4_model_5_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[147] = mbfc_buffer_conv_4_model_5_conv_dw_bn_running_var;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_466 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_466[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_108, Operation: PRelu
// Inputs
// (256, 1, 1)
feature_mbfc_buffer_548 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    feature_mbfc_buffer_548[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[62] = feature_mbfc_buffer_548;


// Outputs
// (1, 256, 14, 14)
mbfc_buffer_468 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_468[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_109, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_4_model_5_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_4_model_5_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[63] = mbfc_buffer_conv_4_model_5_project_conv_weight;


// Outputs
// (1, 128, 14, 14)
mbfc_buffer_469 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_469[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_110, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_4_model_5_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[148] = mbfc_buffer_conv_4_model_5_project_bn_weight;


// (128,)
mbfc_buffer_conv_4_model_5_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[149] = mbfc_buffer_conv_4_model_5_project_bn_bias;


// (128,)
mbfc_buffer_conv_4_model_5_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[150] = mbfc_buffer_conv_4_model_5_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_4_model_5_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[151] = mbfc_buffer_conv_4_model_5_project_bn_running_var;


// Outputs
// (1, 128, 14, 14)
feature_mbfc_buffer_470 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    feature_mbfc_buffer_470[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_111, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
mbfc_buffer_471 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_471[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_112, Operation: Conv
// Inputs
// (512, 128, 1, 1)
mbfc_buffer_conv_45_conv_conv_weight = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    mbfc_buffer_conv_45_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[64] = mbfc_buffer_conv_45_conv_conv_weight;


// Outputs
// (1, 512, 14, 14)
mbfc_buffer_472 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_472[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_113, Operation: BatchNormalization
// Inputs
// (512,)
mbfc_buffer_conv_45_conv_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[152] = mbfc_buffer_conv_45_conv_bn_weight;


// (512,)
mbfc_buffer_conv_45_conv_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[153] = mbfc_buffer_conv_45_conv_bn_bias;


// (512,)
mbfc_buffer_conv_45_conv_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[154] = mbfc_buffer_conv_45_conv_bn_running_mean;


// (512,)
mbfc_buffer_conv_45_conv_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[155] = mbfc_buffer_conv_45_conv_bn_running_var;


// Outputs
// (1, 512, 14, 14)
feature_mbfc_buffer_473 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    feature_mbfc_buffer_473[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_114, Operation: PRelu
// Inputs
// (512, 1, 1)
feature_mbfc_buffer_549 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    feature_mbfc_buffer_549[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[65] = feature_mbfc_buffer_549;


// Outputs
// (1, 512, 14, 14)
feature_mbfc_buffer_475 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    feature_mbfc_buffer_475[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_115, Operation: Conv
// Inputs
// (512, 1, 3, 3)
mbfc_buffer_conv_45_conv_dw_conv_weight = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    mbfc_buffer_conv_45_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[66] = mbfc_buffer_conv_45_conv_dw_conv_weight;


// Outputs
// (1, 512, 7, 7)
feature_mbfc_buffer_476 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    feature_mbfc_buffer_476[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_116, Operation: BatchNormalization
// Inputs
// (512,)
mbfc_buffer_conv_45_conv_dw_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[156] = mbfc_buffer_conv_45_conv_dw_bn_weight;


// (512,)
mbfc_buffer_conv_45_conv_dw_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[157] = mbfc_buffer_conv_45_conv_dw_bn_bias;


// (512,)
mbfc_buffer_conv_45_conv_dw_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[158] = mbfc_buffer_conv_45_conv_dw_bn_running_mean;


// (512,)
mbfc_buffer_conv_45_conv_dw_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[159] = mbfc_buffer_conv_45_conv_dw_bn_running_var;


// Outputs
// (1, 512, 7, 7)
mbfc_buffer_477 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_477[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_117, Operation: PRelu
// Inputs
// (512, 1, 1)
feature_mbfc_buffer_550 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    feature_mbfc_buffer_550[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[67] = feature_mbfc_buffer_550;


// Outputs
// (1, 512, 7, 7)
mbfc_buffer_479 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_479[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_118, Operation: Conv
// Inputs
// (128, 512, 1, 1)
mbfc_buffer_conv_45_project_conv_weight = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    mbfc_buffer_conv_45_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[68] = mbfc_buffer_conv_45_project_conv_weight;


// Outputs
// (1, 128, 7, 7)
mbfc_buffer_480 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_480[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_119, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_45_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[160] = mbfc_buffer_conv_45_project_bn_weight;


// (128,)
mbfc_buffer_conv_45_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[161] = mbfc_buffer_conv_45_project_bn_bias;


// (128,)
mbfc_buffer_conv_45_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[162] = mbfc_buffer_conv_45_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_45_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[163] = mbfc_buffer_conv_45_project_bn_running_var;


// Outputs
// (1, 128, 7, 7)
mbfc_buffer_481 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_481[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_120, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_5_model_0_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_5_model_0_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[69] = mbfc_buffer_conv_5_model_0_conv_conv_weight;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_482 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_482[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_121, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_5_model_0_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[164] = mbfc_buffer_conv_5_model_0_conv_bn_weight;


// (256,)
mbfc_buffer_conv_5_model_0_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[165] = mbfc_buffer_conv_5_model_0_conv_bn_bias;


// (256,)
mbfc_buffer_conv_5_model_0_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[166] = mbfc_buffer_conv_5_model_0_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_5_model_0_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[167] = mbfc_buffer_conv_5_model_0_conv_bn_running_var;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_483 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_483[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_122, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_551 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_551[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[70] = mbfc_buffer_551;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_485 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_485[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_123, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_5_model_0_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_5_model_0_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[71] = mbfc_buffer_conv_5_model_0_conv_dw_conv_weight;


// Outputs
// (1, 256, 7, 7)
feature_mbfc_buffer_486 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_486[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_124, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_5_model_0_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[168] = mbfc_buffer_conv_5_model_0_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_5_model_0_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[169] = mbfc_buffer_conv_5_model_0_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_5_model_0_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[170] = mbfc_buffer_conv_5_model_0_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_5_model_0_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[171] = mbfc_buffer_conv_5_model_0_conv_dw_bn_running_var;


// Outputs
// (1, 256, 7, 7)
feature_mbfc_buffer_487 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_487[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_125, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_552 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_552[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[72] = mbfc_buffer_552;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_489 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_489[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_126, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_5_model_0_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_5_model_0_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[73] = mbfc_buffer_conv_5_model_0_project_conv_weight;


// Outputs
// (1, 128, 7, 7)
mbfc_buffer_490 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_490[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_127, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_5_model_0_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[172] = mbfc_buffer_conv_5_model_0_project_bn_weight;


// (128,)
mbfc_buffer_conv_5_model_0_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[173] = mbfc_buffer_conv_5_model_0_project_bn_bias;


// (128,)
mbfc_buffer_conv_5_model_0_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[174] = mbfc_buffer_conv_5_model_0_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_5_model_0_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[175] = mbfc_buffer_conv_5_model_0_project_bn_running_var;


// Outputs
// (1, 128, 7, 7)
mbfc_buffer_491 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_491[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_128, Operation: Add
// Inputs
// Outputs
// (1, 128, 7, 7)
mbfc_buffer_492 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_492[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_129, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mbfc_buffer_conv_5_model_1_conv_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_5_model_1_conv_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[74] = mbfc_buffer_conv_5_model_1_conv_conv_weight;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_493 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_493[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_130, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_5_model_1_conv_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[176] = mbfc_buffer_conv_5_model_1_conv_bn_weight;


// (256,)
mbfc_buffer_conv_5_model_1_conv_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[177] = mbfc_buffer_conv_5_model_1_conv_bn_bias;


// (256,)
mbfc_buffer_conv_5_model_1_conv_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[178] = mbfc_buffer_conv_5_model_1_conv_bn_running_mean;


// (256,)
mbfc_buffer_conv_5_model_1_conv_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[179] = mbfc_buffer_conv_5_model_1_conv_bn_running_var;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_494 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_494[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_131, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_553 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_553[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[75] = mbfc_buffer_553;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_496 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_496[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_132, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mbfc_buffer_conv_5_model_1_conv_dw_conv_weight = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_conv_5_model_1_conv_dw_conv_weight[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mbfc_kernels[76] = mbfc_buffer_conv_5_model_1_conv_dw_conv_weight;


// Outputs
// (1, 256, 7, 7)
mbfc_buffer_497 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mbfc_buffer_497[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_133, Operation: BatchNormalization
// Inputs
// (256,)
mbfc_buffer_conv_5_model_1_conv_dw_bn_weight = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[180] = mbfc_buffer_conv_5_model_1_conv_dw_bn_weight;


// (256,)
mbfc_buffer_conv_5_model_1_conv_dw_bn_bias = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[181] = mbfc_buffer_conv_5_model_1_conv_dw_bn_bias;


// (256,)
mbfc_buffer_conv_5_model_1_conv_dw_bn_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[182] = mbfc_buffer_conv_5_model_1_conv_dw_bn_running_mean;


// (256,)
mbfc_buffer_conv_5_model_1_conv_dw_bn_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



mbfc_biases[183] = mbfc_buffer_conv_5_model_1_conv_dw_bn_running_var;


// Outputs
// (1, 256, 7, 7)
feature_mbfc_buffer_498 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_498[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_134, Operation: PRelu
// Inputs
// (256, 1, 1)
mbfc_buffer_554 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mbfc_buffer_554[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[77] = mbfc_buffer_554;


// Outputs
// (1, 256, 7, 7)
feature_mbfc_buffer_500 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    feature_mbfc_buffer_500[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_135, Operation: Conv
// Inputs
// (128, 256, 1, 1)
mbfc_buffer_conv_5_model_1_project_conv_weight = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mbfc_buffer_conv_5_model_1_project_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[78] = mbfc_buffer_conv_5_model_1_project_conv_weight;


// Outputs
// (1, 128, 7, 7)
mbfc_buffer_501 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_501[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_136, Operation: BatchNormalization
// Inputs
// (128,)
mbfc_buffer_conv_5_model_1_project_bn_weight = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[184] = mbfc_buffer_conv_5_model_1_project_bn_weight;


// (128,)
mbfc_buffer_conv_5_model_1_project_bn_bias = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[185] = mbfc_buffer_conv_5_model_1_project_bn_bias;


// (128,)
mbfc_buffer_conv_5_model_1_project_bn_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[186] = mbfc_buffer_conv_5_model_1_project_bn_running_mean;


// (128,)
mbfc_buffer_conv_5_model_1_project_bn_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



mbfc_biases[187] = mbfc_buffer_conv_5_model_1_project_bn_running_var;


// Outputs
// (1, 128, 7, 7)
mbfc_buffer_502 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_502[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_137, Operation: Add
// Inputs
// Outputs
// (1, 128, 7, 7)
mbfc_buffer_503 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mbfc_buffer_503[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_138, Operation: Conv
// Inputs
// (512, 128, 1, 1)
mbfc_buffer_conv_6_sep_conv_weight = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    mbfc_buffer_conv_6_sep_conv_weight[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[79] = mbfc_buffer_conv_6_sep_conv_weight;


// Outputs
// (1, 512, 7, 7)
mbfc_buffer_504 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_504[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_139, Operation: BatchNormalization
// Inputs
// (512,)
mbfc_buffer_conv_6_sep_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[188] = mbfc_buffer_conv_6_sep_bn_weight;


// (512,)
mbfc_buffer_conv_6_sep_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[189] = mbfc_buffer_conv_6_sep_bn_bias;


// (512,)
mbfc_buffer_conv_6_sep_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[190] = mbfc_buffer_conv_6_sep_bn_running_mean;


// (512,)
mbfc_buffer_conv_6_sep_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[191] = mbfc_buffer_conv_6_sep_bn_running_var;


// Outputs
// (1, 512, 7, 7)
mbfc_buffer_505 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_505[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_140, Operation: PRelu
// Inputs
// (512, 1, 1)
mbfc_buffer_555 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    mbfc_buffer_555[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mbfc_kernels[80] = mbfc_buffer_555;


// Outputs
// (1, 512, 7, 7)
mbfc_buffer_507 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_507[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_141, Operation: Conv
// Inputs
// (512, 1, 7, 7)
mbfc_buffer_conv_6_dw_conv_weight = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    mbfc_buffer_conv_6_dw_conv_weight[kernel] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



mbfc_kernels[81] = mbfc_buffer_conv_6_dw_conv_weight;


// Outputs
// (1, 512, 1, 1)
mbfc_buffer_508 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_508[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: BatchNormalization_142, Operation: BatchNormalization
// Inputs
// (512,)
mbfc_buffer_conv_6_dw_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[192] = mbfc_buffer_conv_6_dw_bn_weight;


// (512,)
mbfc_buffer_conv_6_dw_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[193] = mbfc_buffer_conv_6_dw_bn_bias;


// (512,)
mbfc_buffer_conv_6_dw_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[194] = mbfc_buffer_conv_6_dw_bn_running_mean;


// (512,)
mbfc_buffer_conv_6_dw_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[195] = mbfc_buffer_conv_6_dw_bn_running_var;


// Outputs
// (1, 512, 1, 1)
mbfc_buffer_509 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    mbfc_buffer_509[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Reshape_148, Operation: Reshape
// Inputs
// Outputs
// (1, 512)
mbfc_buffer_517 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: MatMul_149, Operation: MatMul
// Inputs
// (512, 512)
mbfc_buffer_557 = (fp_t*) malloc(262144 * sizeof(fp_t));



mbfc_kernels[82] = &mbfc_buffer_557;


// Outputs
// (1, 512)
mbfc_buffer_519 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: BatchNormalization_150, Operation: BatchNormalization1d
// Inputs
// (512,)
mbfc_buffer_bn_weight = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[196] = mbfc_buffer_bn_weight;


// (512,)
mbfc_buffer_bn_bias = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[197] = mbfc_buffer_bn_bias;


// (512,)
mbfc_buffer_bn_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[198] = mbfc_buffer_bn_running_mean;


// (512,)
mbfc_buffer_bn_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



mbfc_biases[199] = mbfc_buffer_bn_running_var;


// Outputs
// (1, 512)
mbfc_buffer_520 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: ReduceL2_151, Operation: ReduceL2
// Inputs
// Outputs
// (1, 1)
mbfc_buffer_521 = (fp_t*) malloc(1 * sizeof(fp_t));



// Layer: Div_152, Operation: Div
// Inputs
// Outputs
// (1, 512)
output_output = (fp_t*) malloc(512 * sizeof(fp_t));



}
