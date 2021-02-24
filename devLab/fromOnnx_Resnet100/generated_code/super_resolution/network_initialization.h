#ifndef NETWORK_INITIALIZATION_H
#define NETWORK_INITIALIZATION_H
#include <stdlib.h>
#include <stdint.h>
#include "ai-cnn/parameters.h"

void initialize_network();

fp_t*** kernels;
fp_t** biases;
// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
fp_t **buffer_conv1_conv_weight;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_334;


// Layer: BatchNormalization_1, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_conv1_bn_weight;
// (64,)
fp_t *buffer_conv1_bn_bias;
// (64,)
fp_t *buffer_conv1_bn_running_mean;
// (64,)
fp_t *buffer_conv1_bn_running_var;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_335;


// Layer: PRelu_2, Operation: PRelu
// Inputs
// (64, 1, 1)
fp_t **buffer_523;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_337;


// Layer: Conv_3, Operation: Conv
// Inputs
// (64, 1, 3, 3)
fp_t **buffer_conv2_dw_conv_weight;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_338;


// Layer: BatchNormalization_4, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_conv2_dw_bn_weight;
// (64,)
fp_t *buffer_conv2_dw_bn_bias;
// (64,)
fp_t *buffer_conv2_dw_bn_running_mean;
// (64,)
fp_t *buffer_conv2_dw_bn_running_var;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_339;


// Layer: PRelu_5, Operation: PRelu
// Inputs
// (64, 1, 1)
fp_t **buffer_524;
// Outputs
// (1, 64, 56, 56)
fp_t **buffer_341;


// Layer: Conv_6, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **buffer_conv_23_conv_conv_weight;
// Outputs
// (1, 128, 56, 56)
fp_t **buffer_342;


// Layer: BatchNormalization_7, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_23_conv_bn_weight;
// (128,)
fp_t *buffer_conv_23_conv_bn_bias;
// (128,)
fp_t *buffer_conv_23_conv_bn_running_mean;
// (128,)
fp_t *buffer_conv_23_conv_bn_running_var;
// Outputs
// (1, 128, 56, 56)
fp_t **buffer_343;


// Layer: PRelu_8, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_525;
// Outputs
// (1, 128, 56, 56)
fp_t **buffer_345;


// Layer: Conv_9, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_conv_23_conv_dw_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_346;


// Layer: BatchNormalization_10, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_23_conv_dw_bn_weight;
// (128,)
fp_t *buffer_conv_23_conv_dw_bn_bias;
// (128,)
fp_t *buffer_conv_23_conv_dw_bn_running_mean;
// (128,)
fp_t *buffer_conv_23_conv_dw_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_347;


// Layer: PRelu_11, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_526;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_349;


// Layer: Conv_12, Operation: Conv
// Inputs
// (64, 128, 1, 1)
fp_t **buffer_conv_23_project_conv_weight;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_350;


// Layer: BatchNormalization_13, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_conv_23_project_bn_weight;
// (64,)
fp_t *buffer_conv_23_project_bn_bias;
// (64,)
fp_t *buffer_conv_23_project_bn_running_mean;
// (64,)
fp_t *buffer_conv_23_project_bn_running_var;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_351;


// Layer: Conv_14, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **buffer_conv_3_model_0_conv_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_352;


// Layer: BatchNormalization_15, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_0_conv_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_0_conv_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_0_conv_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_0_conv_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_353;


// Layer: PRelu_16, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_527;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_355;


// Layer: Conv_17, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_conv_3_model_0_conv_dw_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_356;


// Layer: BatchNormalization_18, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_0_conv_dw_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_0_conv_dw_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_0_conv_dw_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_0_conv_dw_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_357;


// Layer: PRelu_19, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_528;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_359;


// Layer: Conv_20, Operation: Conv
// Inputs
// (64, 128, 1, 1)
fp_t **buffer_conv_3_model_0_project_conv_weight;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_360;


// Layer: BatchNormalization_21, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_conv_3_model_0_project_bn_weight;
// (64,)
fp_t *buffer_conv_3_model_0_project_bn_bias;
// (64,)
fp_t *buffer_conv_3_model_0_project_bn_running_mean;
// (64,)
fp_t *buffer_conv_3_model_0_project_bn_running_var;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_361;


// Layer: Add_22, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_362;


// Layer: Conv_23, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **buffer_conv_3_model_1_conv_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_363;


// Layer: BatchNormalization_24, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_1_conv_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_1_conv_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_1_conv_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_1_conv_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_364;


// Layer: PRelu_25, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_529;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_366;


// Layer: Conv_26, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_conv_3_model_1_conv_dw_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_367;


// Layer: BatchNormalization_27, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_1_conv_dw_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_1_conv_dw_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_1_conv_dw_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_1_conv_dw_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_368;


// Layer: PRelu_28, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_530;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_370;


// Layer: Conv_29, Operation: Conv
// Inputs
// (64, 128, 1, 1)
fp_t **buffer_conv_3_model_1_project_conv_weight;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_371;


// Layer: BatchNormalization_30, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_conv_3_model_1_project_bn_weight;
// (64,)
fp_t *buffer_conv_3_model_1_project_bn_bias;
// (64,)
fp_t *buffer_conv_3_model_1_project_bn_running_mean;
// (64,)
fp_t *buffer_conv_3_model_1_project_bn_running_var;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_372;


// Layer: Add_31, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_373;


// Layer: Conv_32, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **buffer_conv_3_model_2_conv_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_374;


// Layer: BatchNormalization_33, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_2_conv_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_2_conv_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_2_conv_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_2_conv_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_375;


// Layer: PRelu_34, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_531;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_377;


// Layer: Conv_35, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_conv_3_model_2_conv_dw_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_378;


// Layer: BatchNormalization_36, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_2_conv_dw_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_2_conv_dw_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_2_conv_dw_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_2_conv_dw_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_379;


// Layer: PRelu_37, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_532;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_381;


// Layer: Conv_38, Operation: Conv
// Inputs
// (64, 128, 1, 1)
fp_t **buffer_conv_3_model_2_project_conv_weight;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_382;


// Layer: BatchNormalization_39, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_conv_3_model_2_project_bn_weight;
// (64,)
fp_t *buffer_conv_3_model_2_project_bn_bias;
// (64,)
fp_t *buffer_conv_3_model_2_project_bn_running_mean;
// (64,)
fp_t *buffer_conv_3_model_2_project_bn_running_var;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_383;


// Layer: Add_40, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_384;


// Layer: Conv_41, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **buffer_conv_3_model_3_conv_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_385;


// Layer: BatchNormalization_42, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_3_conv_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_3_conv_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_3_conv_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_3_conv_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_386;


// Layer: PRelu_43, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_533;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_388;


// Layer: Conv_44, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_conv_3_model_3_conv_dw_conv_weight;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_389;


// Layer: BatchNormalization_45, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_3_model_3_conv_dw_bn_weight;
// (128,)
fp_t *buffer_conv_3_model_3_conv_dw_bn_bias;
// (128,)
fp_t *buffer_conv_3_model_3_conv_dw_bn_running_mean;
// (128,)
fp_t *buffer_conv_3_model_3_conv_dw_bn_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_390;


// Layer: PRelu_46, Operation: PRelu
// Inputs
// (128, 1, 1)
fp_t **buffer_534;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_392;


// Layer: Conv_47, Operation: Conv
// Inputs
// (64, 128, 1, 1)
fp_t **buffer_conv_3_model_3_project_conv_weight;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_393;


// Layer: BatchNormalization_48, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_conv_3_model_3_project_bn_weight;
// (64,)
fp_t *buffer_conv_3_model_3_project_bn_bias;
// (64,)
fp_t *buffer_conv_3_model_3_project_bn_running_mean;
// (64,)
fp_t *buffer_conv_3_model_3_project_bn_running_var;
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_394;


// Layer: Add_49, Operation: Add
// Inputs
// Outputs
// (1, 64, 28, 28)
fp_t **buffer_395;


// Layer: Conv_50, Operation: Conv
// Inputs
// (256, 64, 1, 1)
fp_t **buffer_conv_34_conv_conv_weight;
// Outputs
// (1, 256, 28, 28)
fp_t **buffer_396;


// Layer: BatchNormalization_51, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_34_conv_bn_weight;
// (256,)
fp_t *buffer_conv_34_conv_bn_bias;
// (256,)
fp_t *buffer_conv_34_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_34_conv_bn_running_var;
// Outputs
// (1, 256, 28, 28)
fp_t **buffer_397;


// Layer: PRelu_52, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_535;
// Outputs
// (1, 256, 28, 28)
fp_t **buffer_399;


// Layer: Conv_53, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_34_conv_dw_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_400;


// Layer: BatchNormalization_54, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_34_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_34_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_34_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_34_conv_dw_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_401;


// Layer: PRelu_55, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_536;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_403;


// Layer: Conv_56, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_34_project_conv_weight;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_404;


// Layer: BatchNormalization_57, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_34_project_bn_weight;
// (128,)
fp_t *buffer_conv_34_project_bn_bias;
// (128,)
fp_t *buffer_conv_34_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_34_project_bn_running_var;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_405;


// Layer: Conv_58, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_4_model_0_conv_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_406;


// Layer: BatchNormalization_59, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_0_conv_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_0_conv_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_0_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_0_conv_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_407;


// Layer: PRelu_60, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_537;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_409;


// Layer: Conv_61, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_4_model_0_conv_dw_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_410;


// Layer: BatchNormalization_62, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_0_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_0_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_0_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_0_conv_dw_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_411;


// Layer: PRelu_63, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_538;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_413;


// Layer: Conv_64, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_4_model_0_project_conv_weight;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_414;


// Layer: BatchNormalization_65, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_4_model_0_project_bn_weight;
// (128,)
fp_t *buffer_conv_4_model_0_project_bn_bias;
// (128,)
fp_t *buffer_conv_4_model_0_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_4_model_0_project_bn_running_var;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_415;


// Layer: Add_66, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_416;


// Layer: Conv_67, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_4_model_1_conv_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_417;


// Layer: BatchNormalization_68, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_1_conv_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_1_conv_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_1_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_1_conv_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_418;


// Layer: PRelu_69, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_539;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_420;


// Layer: Conv_70, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_4_model_1_conv_dw_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_421;


// Layer: BatchNormalization_71, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_1_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_1_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_1_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_1_conv_dw_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_422;


// Layer: PRelu_72, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_540;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_424;


// Layer: Conv_73, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_4_model_1_project_conv_weight;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_425;


// Layer: BatchNormalization_74, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_4_model_1_project_bn_weight;
// (128,)
fp_t *buffer_conv_4_model_1_project_bn_bias;
// (128,)
fp_t *buffer_conv_4_model_1_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_4_model_1_project_bn_running_var;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_426;


// Layer: Add_75, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_427;


// Layer: Conv_76, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_4_model_2_conv_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_428;


// Layer: BatchNormalization_77, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_2_conv_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_2_conv_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_2_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_2_conv_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_429;


// Layer: PRelu_78, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_541;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_431;


// Layer: Conv_79, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_4_model_2_conv_dw_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_432;


// Layer: BatchNormalization_80, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_2_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_2_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_2_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_2_conv_dw_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_433;


// Layer: PRelu_81, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_542;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_435;


// Layer: Conv_82, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_4_model_2_project_conv_weight;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_436;


// Layer: BatchNormalization_83, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_4_model_2_project_bn_weight;
// (128,)
fp_t *buffer_conv_4_model_2_project_bn_bias;
// (128,)
fp_t *buffer_conv_4_model_2_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_4_model_2_project_bn_running_var;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_437;


// Layer: Add_84, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_438;


// Layer: Conv_85, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_4_model_3_conv_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_439;


// Layer: BatchNormalization_86, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_3_conv_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_3_conv_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_3_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_3_conv_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_440;


// Layer: PRelu_87, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_543;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_442;


// Layer: Conv_88, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_4_model_3_conv_dw_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_443;


// Layer: BatchNormalization_89, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_3_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_3_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_3_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_3_conv_dw_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_444;


// Layer: PRelu_90, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_544;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_446;


// Layer: Conv_91, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_4_model_3_project_conv_weight;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_447;


// Layer: BatchNormalization_92, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_4_model_3_project_bn_weight;
// (128,)
fp_t *buffer_conv_4_model_3_project_bn_bias;
// (128,)
fp_t *buffer_conv_4_model_3_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_4_model_3_project_bn_running_var;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_448;


// Layer: Add_93, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_449;


// Layer: Conv_94, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_4_model_4_conv_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_450;


// Layer: BatchNormalization_95, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_4_conv_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_4_conv_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_4_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_4_conv_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_451;


// Layer: PRelu_96, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_545;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_453;


// Layer: Conv_97, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_4_model_4_conv_dw_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_454;


// Layer: BatchNormalization_98, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_4_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_4_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_4_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_4_conv_dw_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_455;


// Layer: PRelu_99, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_546;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_457;


// Layer: Conv_100, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_4_model_4_project_conv_weight;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_458;


// Layer: BatchNormalization_101, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_4_model_4_project_bn_weight;
// (128,)
fp_t *buffer_conv_4_model_4_project_bn_bias;
// (128,)
fp_t *buffer_conv_4_model_4_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_4_model_4_project_bn_running_var;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_459;


// Layer: Add_102, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_460;


// Layer: Conv_103, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_4_model_5_conv_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_461;


// Layer: BatchNormalization_104, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_5_conv_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_5_conv_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_5_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_5_conv_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_462;


// Layer: PRelu_105, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_547;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_464;


// Layer: Conv_106, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_4_model_5_conv_dw_conv_weight;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_465;


// Layer: BatchNormalization_107, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_4_model_5_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_4_model_5_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_4_model_5_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_4_model_5_conv_dw_bn_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_466;


// Layer: PRelu_108, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_548;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_468;


// Layer: Conv_109, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_4_model_5_project_conv_weight;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_469;


// Layer: BatchNormalization_110, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_4_model_5_project_bn_weight;
// (128,)
fp_t *buffer_conv_4_model_5_project_bn_bias;
// (128,)
fp_t *buffer_conv_4_model_5_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_4_model_5_project_bn_running_var;
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_470;


// Layer: Add_111, Operation: Add
// Inputs
// Outputs
// (1, 128, 14, 14)
fp_t **buffer_471;


// Layer: Conv_112, Operation: Conv
// Inputs
// (512, 128, 1, 1)
fp_t **buffer_conv_45_conv_conv_weight;
// Outputs
// (1, 512, 14, 14)
fp_t **buffer_472;


// Layer: BatchNormalization_113, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_conv_45_conv_bn_weight;
// (512,)
fp_t *buffer_conv_45_conv_bn_bias;
// (512,)
fp_t *buffer_conv_45_conv_bn_running_mean;
// (512,)
fp_t *buffer_conv_45_conv_bn_running_var;
// Outputs
// (1, 512, 14, 14)
fp_t **buffer_473;


// Layer: PRelu_114, Operation: PRelu
// Inputs
// (512, 1, 1)
fp_t **buffer_549;
// Outputs
// (1, 512, 14, 14)
fp_t **buffer_475;


// Layer: Conv_115, Operation: Conv
// Inputs
// (512, 1, 3, 3)
fp_t **buffer_conv_45_conv_dw_conv_weight;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_476;


// Layer: BatchNormalization_116, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_conv_45_conv_dw_bn_weight;
// (512,)
fp_t *buffer_conv_45_conv_dw_bn_bias;
// (512,)
fp_t *buffer_conv_45_conv_dw_bn_running_mean;
// (512,)
fp_t *buffer_conv_45_conv_dw_bn_running_var;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_477;


// Layer: PRelu_117, Operation: PRelu
// Inputs
// (512, 1, 1)
fp_t **buffer_550;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_479;


// Layer: Conv_118, Operation: Conv
// Inputs
// (128, 512, 1, 1)
fp_t **buffer_conv_45_project_conv_weight;
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_480;


// Layer: BatchNormalization_119, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_45_project_bn_weight;
// (128,)
fp_t *buffer_conv_45_project_bn_bias;
// (128,)
fp_t *buffer_conv_45_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_45_project_bn_running_var;
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_481;


// Layer: Conv_120, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_5_model_0_conv_conv_weight;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_482;


// Layer: BatchNormalization_121, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_5_model_0_conv_bn_weight;
// (256,)
fp_t *buffer_conv_5_model_0_conv_bn_bias;
// (256,)
fp_t *buffer_conv_5_model_0_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_5_model_0_conv_bn_running_var;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_483;


// Layer: PRelu_122, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_551;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_485;


// Layer: Conv_123, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_5_model_0_conv_dw_conv_weight;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_486;


// Layer: BatchNormalization_124, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_5_model_0_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_5_model_0_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_5_model_0_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_5_model_0_conv_dw_bn_running_var;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_487;


// Layer: PRelu_125, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_552;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_489;


// Layer: Conv_126, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_5_model_0_project_conv_weight;
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_490;


// Layer: BatchNormalization_127, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_5_model_0_project_bn_weight;
// (128,)
fp_t *buffer_conv_5_model_0_project_bn_bias;
// (128,)
fp_t *buffer_conv_5_model_0_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_5_model_0_project_bn_running_var;
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_491;


// Layer: Add_128, Operation: Add
// Inputs
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_492;


// Layer: Conv_129, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_conv_5_model_1_conv_conv_weight;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_493;


// Layer: BatchNormalization_130, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_5_model_1_conv_bn_weight;
// (256,)
fp_t *buffer_conv_5_model_1_conv_bn_bias;
// (256,)
fp_t *buffer_conv_5_model_1_conv_bn_running_mean;
// (256,)
fp_t *buffer_conv_5_model_1_conv_bn_running_var;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_494;


// Layer: PRelu_131, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_553;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_496;


// Layer: Conv_132, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_conv_5_model_1_conv_dw_conv_weight;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_497;


// Layer: BatchNormalization_133, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_conv_5_model_1_conv_dw_bn_weight;
// (256,)
fp_t *buffer_conv_5_model_1_conv_dw_bn_bias;
// (256,)
fp_t *buffer_conv_5_model_1_conv_dw_bn_running_mean;
// (256,)
fp_t *buffer_conv_5_model_1_conv_dw_bn_running_var;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_498;


// Layer: PRelu_134, Operation: PRelu
// Inputs
// (256, 1, 1)
fp_t **buffer_554;
// Outputs
// (1, 256, 7, 7)
fp_t **buffer_500;


// Layer: Conv_135, Operation: Conv
// Inputs
// (128, 256, 1, 1)
fp_t **buffer_conv_5_model_1_project_conv_weight;
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_501;


// Layer: BatchNormalization_136, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_conv_5_model_1_project_bn_weight;
// (128,)
fp_t *buffer_conv_5_model_1_project_bn_bias;
// (128,)
fp_t *buffer_conv_5_model_1_project_bn_running_mean;
// (128,)
fp_t *buffer_conv_5_model_1_project_bn_running_var;
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_502;


// Layer: Add_137, Operation: Add
// Inputs
// Outputs
// (1, 128, 7, 7)
fp_t **buffer_503;


// Layer: Conv_138, Operation: Conv
// Inputs
// (512, 128, 1, 1)
fp_t **buffer_conv_6_sep_conv_weight;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_504;


// Layer: BatchNormalization_139, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_conv_6_sep_bn_weight;
// (512,)
fp_t *buffer_conv_6_sep_bn_bias;
// (512,)
fp_t *buffer_conv_6_sep_bn_running_mean;
// (512,)
fp_t *buffer_conv_6_sep_bn_running_var;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_505;


// Layer: PRelu_140, Operation: PRelu
// Inputs
// (512, 1, 1)
fp_t **buffer_555;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_507;


// Layer: Conv_141, Operation: Conv
// Inputs
// (512, 1, 7, 7)
fp_t **buffer_conv_6_dw_conv_weight;
// Outputs
// (1, 512, 1, 1)
fp_t **buffer_508;


// Layer: BatchNormalization_142, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_conv_6_dw_bn_weight;
// (512,)
fp_t *buffer_conv_6_dw_bn_bias;
// (512,)
fp_t *buffer_conv_6_dw_bn_running_mean;
// (512,)
fp_t *buffer_conv_6_dw_bn_running_var;
// Outputs
// (1, 512, 1, 1)
fp_t **buffer_509;


// Layer: Reshape_148, Operation: Reshape
// Inputs
// Outputs
// (1, 512)
fp_t *buffer_517;


// Layer: MatMul_149, Operation: MatMul
// Inputs
// (512, 512)
fp_t *buffer_557;
// Outputs
// (1, 512)
fp_t *buffer_519;


// Layer: BatchNormalization_150, Operation: BatchNormalization1d
// Inputs
// (512,)
fp_t *buffer_bn_weight;
// (512,)
fp_t *buffer_bn_bias;
// (512,)
fp_t *buffer_bn_running_mean;
// (512,)
fp_t *buffer_bn_running_var;
// Outputs
// (1, 512)
fp_t *buffer_520;


// Layer: ReduceL2_151, Operation: ReduceL2
// Inputs
// Outputs
// (1, 1)
fp_t *buffer_521;


// Layer: Div_152, Operation: Div
// Inputs
// Outputs
// (1, 512)
fp_t *output_output;


#endif //NETWORK_INITIALIZATION_H
