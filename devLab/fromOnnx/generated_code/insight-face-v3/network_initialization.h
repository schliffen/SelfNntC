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
fp_t **buffer_1942;
// (64,)
fp_t *buffer_1943;
// Outputs
// (1, 64, 110, 110)
fp_t **buffer_1941;


// Layer: PRelu_1, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2151;
// Outputs
// (1, 64, 110, 110)
fp_t **buffer_800;


// Layer: MaxPool_2, Operation: MaxPool
// Inputs
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_801;


// Layer: BatchNormalization_3, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_layer1_0_bn0_weight;
// (64,)
fp_t *buffer_layer1_0_bn0_bias;
// (64,)
fp_t *buffer_layer1_0_bn0_running_mean;
// (64,)
fp_t *buffer_layer1_0_bn0_running_var;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_802;


// Layer: Conv_4, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_1945;
// (64,)
fp_t *buffer_1946;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_1944;


// Layer: PRelu_5, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2152;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_806;


// Layer: Conv_6, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_1948;
// (64,)
fp_t *buffer_1949;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_1947;


// Layer: GlobalAveragePool_13, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
fp_t **buffer_815;


// Layer: Gemm_18, Operation: Gemm
// Inputs
// (4, 64)
fp_t *buffer_layer1_0_se_fc_0_weight;
// (4,)
fp_t *buffer_layer1_0_se_fc_0_bias;
// Outputs
// (1, 4)
fp_t *buffer_820;


// Layer: PRelu_19, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer1_0_se_fc_1_weight;
// Outputs
// (1, 4)
fp_t *buffer_821;


// Layer: Gemm_20, Operation: Gemm
// Inputs
// (64, 4)
fp_t *buffer_layer1_0_se_fc_2_weight;
// (64,)
fp_t *buffer_layer1_0_se_fc_2_bias;
// Outputs
// (1, 64)
fp_t *buffer_822;


// Layer: Sigmoid_21, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
fp_t *buffer_823;


// Layer: Mul_26, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_832;


// Layer: Add_27, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_833;


// Layer: PRelu_28, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2155;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_835;


// Layer: BatchNormalization_29, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_layer1_1_bn0_weight;
// (64,)
fp_t *buffer_layer1_1_bn0_bias;
// (64,)
fp_t *buffer_layer1_1_bn0_running_mean;
// (64,)
fp_t *buffer_layer1_1_bn0_running_var;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_836;


// Layer: Conv_30, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_1951;
// (64,)
fp_t *buffer_1952;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_1950;


// Layer: PRelu_31, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2156;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_840;


// Layer: Conv_32, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_1954;
// (64,)
fp_t *buffer_1955;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_1953;


// Layer: GlobalAveragePool_39, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
fp_t **buffer_849;


// Layer: Gemm_44, Operation: Gemm
// Inputs
// (4, 64)
fp_t *buffer_layer1_1_se_fc_0_weight;
// (4,)
fp_t *buffer_layer1_1_se_fc_0_bias;
// Outputs
// (1, 4)
fp_t *buffer_854;


// Layer: PRelu_45, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer1_1_se_fc_1_weight;
// Outputs
// (1, 4)
fp_t *buffer_855;


// Layer: Gemm_46, Operation: Gemm
// Inputs
// (64, 4)
fp_t *buffer_layer1_1_se_fc_2_weight;
// (64,)
fp_t *buffer_layer1_1_se_fc_2_bias;
// Outputs
// (1, 64)
fp_t *buffer_856;


// Layer: Sigmoid_47, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
fp_t *buffer_857;


// Layer: Mul_52, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_866;


// Layer: Add_53, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_867;


// Layer: PRelu_54, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2159;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_869;


// Layer: BatchNormalization_55, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_layer1_2_bn0_weight;
// (64,)
fp_t *buffer_layer1_2_bn0_bias;
// (64,)
fp_t *buffer_layer1_2_bn0_running_mean;
// (64,)
fp_t *buffer_layer1_2_bn0_running_var;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_870;


// Layer: Conv_56, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_1957;
// (64,)
fp_t *buffer_1958;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_1956;


// Layer: PRelu_57, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2160;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_874;


// Layer: Conv_58, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_1960;
// (64,)
fp_t *buffer_1961;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_1959;


// Layer: GlobalAveragePool_65, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
fp_t **buffer_883;


// Layer: Gemm_70, Operation: Gemm
// Inputs
// (4, 64)
fp_t *buffer_layer1_2_se_fc_0_weight;
// (4,)
fp_t *buffer_layer1_2_se_fc_0_bias;
// Outputs
// (1, 4)
fp_t *buffer_888;


// Layer: PRelu_71, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer1_2_se_fc_1_weight;
// Outputs
// (1, 4)
fp_t *buffer_889;


// Layer: Gemm_72, Operation: Gemm
// Inputs
// (64, 4)
fp_t *buffer_layer1_2_se_fc_2_weight;
// (64,)
fp_t *buffer_layer1_2_se_fc_2_bias;
// Outputs
// (1, 64)
fp_t *buffer_890;


// Layer: Sigmoid_73, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
fp_t *buffer_891;


// Layer: Mul_78, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_900;


// Layer: Add_79, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_901;


// Layer: PRelu_80, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2163;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_903;


// Layer: BatchNormalization_81, Operation: BatchNormalization
// Inputs
// (64,)
fp_t *buffer_layer2_0_bn0_weight;
// (64,)
fp_t *buffer_layer2_0_bn0_bias;
// (64,)
fp_t *buffer_layer2_0_bn0_running_mean;
// (64,)
fp_t *buffer_layer2_0_bn0_running_var;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_904;


// Layer: Conv_82, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_1963;
// (64,)
fp_t *buffer_1964;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_1962;


// Layer: PRelu_83, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2164;
// Outputs
// (1, 64, 55, 55)
fp_t **buffer_908;


// Layer: Conv_84, Operation: Conv
// Inputs
// (128, 64, 3, 3)
fp_t **buffer_1966;
// (128,)
fp_t *buffer_1967;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1965;


// Layer: GlobalAveragePool_91, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
fp_t **buffer_917;


// Layer: Gemm_96, Operation: Gemm
// Inputs
// (8, 128)
fp_t *buffer_layer2_0_se_fc_0_weight;
// (8,)
fp_t *buffer_layer2_0_se_fc_0_bias;
// Outputs
// (1, 8)
fp_t *buffer_922;


// Layer: PRelu_97, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer2_0_se_fc_1_weight;
// Outputs
// (1, 8)
fp_t *buffer_923;


// Layer: Gemm_98, Operation: Gemm
// Inputs
// (128, 8)
fp_t *buffer_layer2_0_se_fc_2_weight;
// (128,)
fp_t *buffer_layer2_0_se_fc_2_bias;
// Outputs
// (1, 128)
fp_t *buffer_924;


// Layer: Sigmoid_99, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
fp_t *buffer_925;


// Layer: Mul_104, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_934;


// Layer: Conv_105, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **buffer_1969;
// (128,)
fp_t *buffer_1970;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1968;


// Layer: Add_106, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_937;


// Layer: PRelu_107, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2167;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_939;


// Layer: BatchNormalization_108, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_layer2_1_bn0_weight;
// (128,)
fp_t *buffer_layer2_1_bn0_bias;
// (128,)
fp_t *buffer_layer2_1_bn0_running_mean;
// (128,)
fp_t *buffer_layer2_1_bn0_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_940;


// Layer: Conv_109, Operation: Conv
// Inputs
// (128, 128, 3, 3)
fp_t **buffer_1972;
// (128,)
fp_t *buffer_1973;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1971;


// Layer: PRelu_110, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2168;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_944;


// Layer: Conv_111, Operation: Conv
// Inputs
// (128, 128, 3, 3)
fp_t **buffer_1975;
// (128,)
fp_t *buffer_1976;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1974;


// Layer: GlobalAveragePool_118, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
fp_t **buffer_953;


// Layer: Gemm_123, Operation: Gemm
// Inputs
// (8, 128)
fp_t *buffer_layer2_1_se_fc_0_weight;
// (8,)
fp_t *buffer_layer2_1_se_fc_0_bias;
// Outputs
// (1, 8)
fp_t *buffer_958;


// Layer: PRelu_124, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer2_1_se_fc_1_weight;
// Outputs
// (1, 8)
fp_t *buffer_959;


// Layer: Gemm_125, Operation: Gemm
// Inputs
// (128, 8)
fp_t *buffer_layer2_1_se_fc_2_weight;
// (128,)
fp_t *buffer_layer2_1_se_fc_2_bias;
// Outputs
// (1, 128)
fp_t *buffer_960;


// Layer: Sigmoid_126, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
fp_t *buffer_961;


// Layer: Mul_131, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_970;


// Layer: Add_132, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_971;


// Layer: PRelu_133, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2171;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_973;


// Layer: BatchNormalization_134, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_layer2_2_bn0_weight;
// (128,)
fp_t *buffer_layer2_2_bn0_bias;
// (128,)
fp_t *buffer_layer2_2_bn0_running_mean;
// (128,)
fp_t *buffer_layer2_2_bn0_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_974;


// Layer: Conv_135, Operation: Conv
// Inputs
// (128, 128, 3, 3)
fp_t **buffer_1978;
// (128,)
fp_t *buffer_1979;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1977;


// Layer: PRelu_136, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2172;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_978;


// Layer: Conv_137, Operation: Conv
// Inputs
// (128, 128, 3, 3)
fp_t **buffer_1981;
// (128,)
fp_t *buffer_1982;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1980;


// Layer: GlobalAveragePool_144, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
fp_t **buffer_987;


// Layer: Gemm_149, Operation: Gemm
// Inputs
// (8, 128)
fp_t *buffer_layer2_2_se_fc_0_weight;
// (8,)
fp_t *buffer_layer2_2_se_fc_0_bias;
// Outputs
// (1, 8)
fp_t *buffer_992;


// Layer: PRelu_150, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer2_2_se_fc_1_weight;
// Outputs
// (1, 8)
fp_t *buffer_993;


// Layer: Gemm_151, Operation: Gemm
// Inputs
// (128, 8)
fp_t *buffer_layer2_2_se_fc_2_weight;
// (128,)
fp_t *buffer_layer2_2_se_fc_2_bias;
// Outputs
// (1, 128)
fp_t *buffer_994;


// Layer: Sigmoid_152, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
fp_t *buffer_995;


// Layer: Mul_157, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1004;


// Layer: Add_158, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1005;


// Layer: PRelu_159, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2175;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1007;


// Layer: BatchNormalization_160, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_layer2_3_bn0_weight;
// (128,)
fp_t *buffer_layer2_3_bn0_bias;
// (128,)
fp_t *buffer_layer2_3_bn0_running_mean;
// (128,)
fp_t *buffer_layer2_3_bn0_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1008;


// Layer: Conv_161, Operation: Conv
// Inputs
// (128, 128, 3, 3)
fp_t **buffer_1984;
// (128,)
fp_t *buffer_1985;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1983;


// Layer: PRelu_162, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2176;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1012;


// Layer: Conv_163, Operation: Conv
// Inputs
// (128, 128, 3, 3)
fp_t **buffer_1987;
// (128,)
fp_t *buffer_1988;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1986;


// Layer: GlobalAveragePool_170, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
fp_t **buffer_1021;


// Layer: Gemm_175, Operation: Gemm
// Inputs
// (8, 128)
fp_t *buffer_layer2_3_se_fc_0_weight;
// (8,)
fp_t *buffer_layer2_3_se_fc_0_bias;
// Outputs
// (1, 8)
fp_t *buffer_1026;


// Layer: PRelu_176, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer2_3_se_fc_1_weight;
// Outputs
// (1, 8)
fp_t *buffer_1027;


// Layer: Gemm_177, Operation: Gemm
// Inputs
// (128, 8)
fp_t *buffer_layer2_3_se_fc_2_weight;
// (128,)
fp_t *buffer_layer2_3_se_fc_2_bias;
// Outputs
// (1, 128)
fp_t *buffer_1028;


// Layer: Sigmoid_178, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
fp_t *buffer_1029;


// Layer: Mul_183, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1038;


// Layer: Add_184, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1039;


// Layer: PRelu_185, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2179;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1041;


// Layer: BatchNormalization_186, Operation: BatchNormalization
// Inputs
// (128,)
fp_t *buffer_layer3_0_bn0_weight;
// (128,)
fp_t *buffer_layer3_0_bn0_bias;
// (128,)
fp_t *buffer_layer3_0_bn0_running_mean;
// (128,)
fp_t *buffer_layer3_0_bn0_running_var;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1042;


// Layer: Conv_187, Operation: Conv
// Inputs
// (128, 128, 3, 3)
fp_t **buffer_1990;
// (128,)
fp_t *buffer_1991;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1989;


// Layer: PRelu_188, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2180;
// Outputs
// (1, 128, 28, 28)
fp_t **buffer_1046;


// Layer: Conv_189, Operation: Conv
// Inputs
// (256, 128, 3, 3)
fp_t **buffer_1993;
// (256,)
fp_t *buffer_1994;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1992;


// Layer: GlobalAveragePool_196, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1055;


// Layer: Gemm_201, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_0_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_0_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1060;


// Layer: PRelu_202, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_0_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1061;


// Layer: Gemm_203, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_0_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_0_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1062;


// Layer: Sigmoid_204, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1063;


// Layer: Mul_209, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1072;


// Layer: Conv_210, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_1996;
// (256,)
fp_t *buffer_1997;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1995;


// Layer: Add_211, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1075;


// Layer: PRelu_212, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2183;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1077;


// Layer: BatchNormalization_213, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_1_bn0_weight;
// (256,)
fp_t *buffer_layer3_1_bn0_bias;
// (256,)
fp_t *buffer_layer3_1_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_1_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1078;


// Layer: Conv_214, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_1999;
// (256,)
fp_t *buffer_2000;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1998;


// Layer: PRelu_215, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2184;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1082;


// Layer: Conv_216, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2002;
// (256,)
fp_t *buffer_2003;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2001;


// Layer: GlobalAveragePool_223, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1091;


// Layer: Gemm_228, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_1_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_1_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1096;


// Layer: PRelu_229, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_1_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1097;


// Layer: Gemm_230, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_1_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_1_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1098;


// Layer: Sigmoid_231, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1099;


// Layer: Mul_236, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1108;


// Layer: Add_237, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1109;


// Layer: PRelu_238, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2187;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1111;


// Layer: BatchNormalization_239, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_2_bn0_weight;
// (256,)
fp_t *buffer_layer3_2_bn0_bias;
// (256,)
fp_t *buffer_layer3_2_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_2_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1112;


// Layer: Conv_240, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2005;
// (256,)
fp_t *buffer_2006;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2004;


// Layer: PRelu_241, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2188;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1116;


// Layer: Conv_242, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2008;
// (256,)
fp_t *buffer_2009;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2007;


// Layer: GlobalAveragePool_249, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1125;


// Layer: Gemm_254, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_2_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_2_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1130;


// Layer: PRelu_255, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_2_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1131;


// Layer: Gemm_256, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_2_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_2_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1132;


// Layer: Sigmoid_257, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1133;


// Layer: Mul_262, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1142;


// Layer: Add_263, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1143;


// Layer: PRelu_264, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2191;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1145;


// Layer: BatchNormalization_265, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_3_bn0_weight;
// (256,)
fp_t *buffer_layer3_3_bn0_bias;
// (256,)
fp_t *buffer_layer3_3_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_3_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1146;


// Layer: Conv_266, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2011;
// (256,)
fp_t *buffer_2012;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2010;


// Layer: PRelu_267, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2192;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1150;


// Layer: Conv_268, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2014;
// (256,)
fp_t *buffer_2015;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2013;


// Layer: GlobalAveragePool_275, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1159;


// Layer: Gemm_280, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_3_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_3_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1164;


// Layer: PRelu_281, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_3_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1165;


// Layer: Gemm_282, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_3_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_3_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1166;


// Layer: Sigmoid_283, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1167;


// Layer: Mul_288, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1176;


// Layer: Add_289, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1177;


// Layer: PRelu_290, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2195;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1179;


// Layer: BatchNormalization_291, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_4_bn0_weight;
// (256,)
fp_t *buffer_layer3_4_bn0_bias;
// (256,)
fp_t *buffer_layer3_4_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_4_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1180;


// Layer: Conv_292, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2017;
// (256,)
fp_t *buffer_2018;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2016;


// Layer: PRelu_293, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2196;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1184;


// Layer: Conv_294, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2020;
// (256,)
fp_t *buffer_2021;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2019;


// Layer: GlobalAveragePool_301, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1193;


// Layer: Gemm_306, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_4_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_4_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1198;


// Layer: PRelu_307, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_4_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1199;


// Layer: Gemm_308, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_4_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_4_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1200;


// Layer: Sigmoid_309, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1201;


// Layer: Mul_314, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1210;


// Layer: Add_315, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1211;


// Layer: PRelu_316, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2199;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1213;


// Layer: BatchNormalization_317, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_5_bn0_weight;
// (256,)
fp_t *buffer_layer3_5_bn0_bias;
// (256,)
fp_t *buffer_layer3_5_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_5_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1214;


// Layer: Conv_318, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2023;
// (256,)
fp_t *buffer_2024;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2022;


// Layer: PRelu_319, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2200;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1218;


// Layer: Conv_320, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2026;
// (256,)
fp_t *buffer_2027;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2025;


// Layer: GlobalAveragePool_327, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1227;


// Layer: Gemm_332, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_5_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_5_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1232;


// Layer: PRelu_333, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_5_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1233;


// Layer: Gemm_334, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_5_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_5_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1234;


// Layer: Sigmoid_335, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1235;


// Layer: Mul_340, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1244;


// Layer: Add_341, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1245;


// Layer: PRelu_342, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2203;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1247;


// Layer: BatchNormalization_343, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_6_bn0_weight;
// (256,)
fp_t *buffer_layer3_6_bn0_bias;
// (256,)
fp_t *buffer_layer3_6_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_6_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1248;


// Layer: Conv_344, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2029;
// (256,)
fp_t *buffer_2030;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2028;


// Layer: PRelu_345, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2204;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1252;


// Layer: Conv_346, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2032;
// (256,)
fp_t *buffer_2033;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2031;


// Layer: GlobalAveragePool_353, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1261;


// Layer: Gemm_358, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_6_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_6_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1266;


// Layer: PRelu_359, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_6_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1267;


// Layer: Gemm_360, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_6_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_6_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1268;


// Layer: Sigmoid_361, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1269;


// Layer: Mul_366, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1278;


// Layer: Add_367, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1279;


// Layer: PRelu_368, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2207;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1281;


// Layer: BatchNormalization_369, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_7_bn0_weight;
// (256,)
fp_t *buffer_layer3_7_bn0_bias;
// (256,)
fp_t *buffer_layer3_7_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_7_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1282;


// Layer: Conv_370, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2035;
// (256,)
fp_t *buffer_2036;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2034;


// Layer: PRelu_371, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2208;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1286;


// Layer: Conv_372, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2038;
// (256,)
fp_t *buffer_2039;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2037;


// Layer: GlobalAveragePool_379, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1295;


// Layer: Gemm_384, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_7_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_7_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1300;


// Layer: PRelu_385, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_7_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1301;


// Layer: Gemm_386, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_7_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_7_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1302;


// Layer: Sigmoid_387, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1303;


// Layer: Mul_392, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1312;


// Layer: Add_393, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1313;


// Layer: PRelu_394, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2211;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1315;


// Layer: BatchNormalization_395, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_8_bn0_weight;
// (256,)
fp_t *buffer_layer3_8_bn0_bias;
// (256,)
fp_t *buffer_layer3_8_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_8_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1316;


// Layer: Conv_396, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2041;
// (256,)
fp_t *buffer_2042;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2040;


// Layer: PRelu_397, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2212;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1320;


// Layer: Conv_398, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2044;
// (256,)
fp_t *buffer_2045;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2043;


// Layer: GlobalAveragePool_405, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1329;


// Layer: Gemm_410, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_8_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_8_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1334;


// Layer: PRelu_411, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_8_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1335;


// Layer: Gemm_412, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_8_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_8_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1336;


// Layer: Sigmoid_413, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1337;


// Layer: Mul_418, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1346;


// Layer: Add_419, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1347;


// Layer: PRelu_420, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2215;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1349;


// Layer: BatchNormalization_421, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_9_bn0_weight;
// (256,)
fp_t *buffer_layer3_9_bn0_bias;
// (256,)
fp_t *buffer_layer3_9_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_9_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1350;


// Layer: Conv_422, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2047;
// (256,)
fp_t *buffer_2048;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2046;


// Layer: PRelu_423, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2216;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1354;


// Layer: Conv_424, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2050;
// (256,)
fp_t *buffer_2051;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2049;


// Layer: GlobalAveragePool_431, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1363;


// Layer: Gemm_436, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_9_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_9_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1368;


// Layer: PRelu_437, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_9_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1369;


// Layer: Gemm_438, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_9_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_9_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1370;


// Layer: Sigmoid_439, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1371;


// Layer: Mul_444, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1380;


// Layer: Add_445, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1381;


// Layer: PRelu_446, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2219;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1383;


// Layer: BatchNormalization_447, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_10_bn0_weight;
// (256,)
fp_t *buffer_layer3_10_bn0_bias;
// (256,)
fp_t *buffer_layer3_10_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_10_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1384;


// Layer: Conv_448, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2053;
// (256,)
fp_t *buffer_2054;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2052;


// Layer: PRelu_449, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2220;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1388;


// Layer: Conv_450, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2056;
// (256,)
fp_t *buffer_2057;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2055;


// Layer: GlobalAveragePool_457, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1397;


// Layer: Gemm_462, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_10_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_10_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1402;


// Layer: PRelu_463, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_10_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1403;


// Layer: Gemm_464, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_10_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_10_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1404;


// Layer: Sigmoid_465, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1405;


// Layer: Mul_470, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1414;


// Layer: Add_471, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1415;


// Layer: PRelu_472, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2223;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1417;


// Layer: BatchNormalization_473, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_11_bn0_weight;
// (256,)
fp_t *buffer_layer3_11_bn0_bias;
// (256,)
fp_t *buffer_layer3_11_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_11_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1418;


// Layer: Conv_474, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2059;
// (256,)
fp_t *buffer_2060;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2058;


// Layer: PRelu_475, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2224;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1422;


// Layer: Conv_476, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2062;
// (256,)
fp_t *buffer_2063;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2061;


// Layer: GlobalAveragePool_483, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1431;


// Layer: Gemm_488, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_11_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_11_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1436;


// Layer: PRelu_489, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_11_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1437;


// Layer: Gemm_490, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_11_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_11_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1438;


// Layer: Sigmoid_491, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1439;


// Layer: Mul_496, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1448;


// Layer: Add_497, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1449;


// Layer: PRelu_498, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2227;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1451;


// Layer: BatchNormalization_499, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_12_bn0_weight;
// (256,)
fp_t *buffer_layer3_12_bn0_bias;
// (256,)
fp_t *buffer_layer3_12_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_12_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1452;


// Layer: Conv_500, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2065;
// (256,)
fp_t *buffer_2066;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2064;


// Layer: PRelu_501, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2228;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1456;


// Layer: Conv_502, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2068;
// (256,)
fp_t *buffer_2069;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2067;


// Layer: GlobalAveragePool_509, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1465;


// Layer: Gemm_514, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_12_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_12_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1470;


// Layer: PRelu_515, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_12_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1471;


// Layer: Gemm_516, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_12_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_12_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1472;


// Layer: Sigmoid_517, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1473;


// Layer: Mul_522, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1482;


// Layer: Add_523, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1483;


// Layer: PRelu_524, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2231;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1485;


// Layer: BatchNormalization_525, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_13_bn0_weight;
// (256,)
fp_t *buffer_layer3_13_bn0_bias;
// (256,)
fp_t *buffer_layer3_13_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_13_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1486;


// Layer: Conv_526, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2071;
// (256,)
fp_t *buffer_2072;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2070;


// Layer: PRelu_527, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2232;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1490;


// Layer: Conv_528, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2074;
// (256,)
fp_t *buffer_2075;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2073;


// Layer: GlobalAveragePool_535, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1499;


// Layer: Gemm_540, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_13_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_13_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1504;


// Layer: PRelu_541, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_13_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1505;


// Layer: Gemm_542, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_13_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_13_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1506;


// Layer: Sigmoid_543, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1507;


// Layer: Mul_548, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1516;


// Layer: Add_549, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1517;


// Layer: PRelu_550, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2235;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1519;


// Layer: BatchNormalization_551, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_14_bn0_weight;
// (256,)
fp_t *buffer_layer3_14_bn0_bias;
// (256,)
fp_t *buffer_layer3_14_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_14_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1520;


// Layer: Conv_552, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2077;
// (256,)
fp_t *buffer_2078;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2076;


// Layer: PRelu_553, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2236;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1524;


// Layer: Conv_554, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2080;
// (256,)
fp_t *buffer_2081;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2079;


// Layer: GlobalAveragePool_561, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1533;


// Layer: Gemm_566, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_14_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_14_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1538;


// Layer: PRelu_567, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_14_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1539;


// Layer: Gemm_568, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_14_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_14_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1540;


// Layer: Sigmoid_569, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1541;


// Layer: Mul_574, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1550;


// Layer: Add_575, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1551;


// Layer: PRelu_576, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2239;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1553;


// Layer: BatchNormalization_577, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_15_bn0_weight;
// (256,)
fp_t *buffer_layer3_15_bn0_bias;
// (256,)
fp_t *buffer_layer3_15_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_15_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1554;


// Layer: Conv_578, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2083;
// (256,)
fp_t *buffer_2084;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2082;


// Layer: PRelu_579, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2240;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1558;


// Layer: Conv_580, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2086;
// (256,)
fp_t *buffer_2087;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2085;


// Layer: GlobalAveragePool_587, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1567;


// Layer: Gemm_592, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_15_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_15_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1572;


// Layer: PRelu_593, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_15_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1573;


// Layer: Gemm_594, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_15_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_15_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1574;


// Layer: Sigmoid_595, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1575;


// Layer: Mul_600, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1584;


// Layer: Add_601, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1585;


// Layer: PRelu_602, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2243;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1587;


// Layer: BatchNormalization_603, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_16_bn0_weight;
// (256,)
fp_t *buffer_layer3_16_bn0_bias;
// (256,)
fp_t *buffer_layer3_16_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_16_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1588;


// Layer: Conv_604, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2089;
// (256,)
fp_t *buffer_2090;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2088;


// Layer: PRelu_605, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2244;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1592;


// Layer: Conv_606, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2092;
// (256,)
fp_t *buffer_2093;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2091;


// Layer: GlobalAveragePool_613, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1601;


// Layer: Gemm_618, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_16_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_16_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1606;


// Layer: PRelu_619, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_16_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1607;


// Layer: Gemm_620, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_16_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_16_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1608;


// Layer: Sigmoid_621, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1609;


// Layer: Mul_626, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1618;


// Layer: Add_627, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1619;


// Layer: PRelu_628, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2247;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1621;


// Layer: BatchNormalization_629, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_17_bn0_weight;
// (256,)
fp_t *buffer_layer3_17_bn0_bias;
// (256,)
fp_t *buffer_layer3_17_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_17_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1622;


// Layer: Conv_630, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2095;
// (256,)
fp_t *buffer_2096;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2094;


// Layer: PRelu_631, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2248;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1626;


// Layer: Conv_632, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2098;
// (256,)
fp_t *buffer_2099;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2097;


// Layer: GlobalAveragePool_639, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1635;


// Layer: Gemm_644, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_17_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_17_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1640;


// Layer: PRelu_645, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_17_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1641;


// Layer: Gemm_646, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_17_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_17_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1642;


// Layer: Sigmoid_647, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1643;


// Layer: Mul_652, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1652;


// Layer: Add_653, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1653;


// Layer: PRelu_654, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2251;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1655;


// Layer: BatchNormalization_655, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_18_bn0_weight;
// (256,)
fp_t *buffer_layer3_18_bn0_bias;
// (256,)
fp_t *buffer_layer3_18_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_18_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1656;


// Layer: Conv_656, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2101;
// (256,)
fp_t *buffer_2102;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2100;


// Layer: PRelu_657, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2252;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1660;


// Layer: Conv_658, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2104;
// (256,)
fp_t *buffer_2105;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2103;


// Layer: GlobalAveragePool_665, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1669;


// Layer: Gemm_670, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_18_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_18_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1674;


// Layer: PRelu_671, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_18_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1675;


// Layer: Gemm_672, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_18_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_18_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1676;


// Layer: Sigmoid_673, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1677;


// Layer: Mul_678, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1686;


// Layer: Add_679, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1687;


// Layer: PRelu_680, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2255;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1689;


// Layer: BatchNormalization_681, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_19_bn0_weight;
// (256,)
fp_t *buffer_layer3_19_bn0_bias;
// (256,)
fp_t *buffer_layer3_19_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_19_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1690;


// Layer: Conv_682, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2107;
// (256,)
fp_t *buffer_2108;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2106;


// Layer: PRelu_683, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2256;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1694;


// Layer: Conv_684, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2110;
// (256,)
fp_t *buffer_2111;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2109;


// Layer: GlobalAveragePool_691, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1703;


// Layer: Gemm_696, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_19_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_19_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1708;


// Layer: PRelu_697, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_19_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1709;


// Layer: Gemm_698, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_19_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_19_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1710;


// Layer: Sigmoid_699, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1711;


// Layer: Mul_704, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1720;


// Layer: Add_705, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1721;


// Layer: PRelu_706, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2259;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1723;


// Layer: BatchNormalization_707, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_20_bn0_weight;
// (256,)
fp_t *buffer_layer3_20_bn0_bias;
// (256,)
fp_t *buffer_layer3_20_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_20_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1724;


// Layer: Conv_708, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2113;
// (256,)
fp_t *buffer_2114;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2112;


// Layer: PRelu_709, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2260;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1728;


// Layer: Conv_710, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2116;
// (256,)
fp_t *buffer_2117;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2115;


// Layer: GlobalAveragePool_717, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1737;


// Layer: Gemm_722, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_20_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_20_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1742;


// Layer: PRelu_723, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_20_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1743;


// Layer: Gemm_724, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_20_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_20_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1744;


// Layer: Sigmoid_725, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1745;


// Layer: Mul_730, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1754;


// Layer: Add_731, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1755;


// Layer: PRelu_732, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2263;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1757;


// Layer: BatchNormalization_733, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_21_bn0_weight;
// (256,)
fp_t *buffer_layer3_21_bn0_bias;
// (256,)
fp_t *buffer_layer3_21_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_21_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1758;


// Layer: Conv_734, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2119;
// (256,)
fp_t *buffer_2120;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2118;


// Layer: PRelu_735, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2264;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1762;


// Layer: Conv_736, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2122;
// (256,)
fp_t *buffer_2123;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2121;


// Layer: GlobalAveragePool_743, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1771;


// Layer: Gemm_748, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_21_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_21_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1776;


// Layer: PRelu_749, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_21_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1777;


// Layer: Gemm_750, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_21_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_21_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1778;


// Layer: Sigmoid_751, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1779;


// Layer: Mul_756, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1788;


// Layer: Add_757, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1789;


// Layer: PRelu_758, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2267;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1791;


// Layer: BatchNormalization_759, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer3_22_bn0_weight;
// (256,)
fp_t *buffer_layer3_22_bn0_bias;
// (256,)
fp_t *buffer_layer3_22_bn0_running_mean;
// (256,)
fp_t *buffer_layer3_22_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1792;


// Layer: Conv_760, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2125;
// (256,)
fp_t *buffer_2126;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2124;


// Layer: PRelu_761, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2268;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1796;


// Layer: Conv_762, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2128;
// (256,)
fp_t *buffer_2129;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2127;


// Layer: GlobalAveragePool_769, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
fp_t **buffer_1805;


// Layer: Gemm_774, Operation: Gemm
// Inputs
// (16, 256)
fp_t *buffer_layer3_22_se_fc_0_weight;
// (16,)
fp_t *buffer_layer3_22_se_fc_0_bias;
// Outputs
// (1, 16)
fp_t *buffer_1810;


// Layer: PRelu_775, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer3_22_se_fc_1_weight;
// Outputs
// (1, 16)
fp_t *buffer_1811;


// Layer: Gemm_776, Operation: Gemm
// Inputs
// (256, 16)
fp_t *buffer_layer3_22_se_fc_2_weight;
// (256,)
fp_t *buffer_layer3_22_se_fc_2_bias;
// Outputs
// (1, 256)
fp_t *buffer_1812;


// Layer: Sigmoid_777, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
fp_t *buffer_1813;


// Layer: Mul_782, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1822;


// Layer: Add_783, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1823;


// Layer: PRelu_784, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2271;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1825;


// Layer: BatchNormalization_785, Operation: BatchNormalization
// Inputs
// (256,)
fp_t *buffer_layer4_0_bn0_weight;
// (256,)
fp_t *buffer_layer4_0_bn0_bias;
// (256,)
fp_t *buffer_layer4_0_bn0_running_mean;
// (256,)
fp_t *buffer_layer4_0_bn0_running_var;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1826;


// Layer: Conv_786, Operation: Conv
// Inputs
// (256, 256, 3, 3)
fp_t **buffer_2131;
// (256,)
fp_t *buffer_2132;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_2130;


// Layer: PRelu_787, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2272;
// Outputs
// (1, 256, 14, 14)
fp_t **buffer_1830;


// Layer: Conv_788, Operation: Conv
// Inputs
// (512, 256, 3, 3)
fp_t **buffer_2134;
// (512,)
fp_t *buffer_2135;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_2133;


// Layer: GlobalAveragePool_795, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
fp_t **buffer_1839;


// Layer: Gemm_800, Operation: Gemm
// Inputs
// (32, 512)
fp_t *buffer_layer4_0_se_fc_0_weight;
// (32,)
fp_t *buffer_layer4_0_se_fc_0_bias;
// Outputs
// (1, 32)
fp_t *buffer_1844;


// Layer: PRelu_801, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer4_0_se_fc_1_weight;
// Outputs
// (1, 32)
fp_t *buffer_1845;


// Layer: Gemm_802, Operation: Gemm
// Inputs
// (512, 32)
fp_t *buffer_layer4_0_se_fc_2_weight;
// (512,)
fp_t *buffer_layer4_0_se_fc_2_bias;
// Outputs
// (1, 512)
fp_t *buffer_1846;


// Layer: Sigmoid_803, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
fp_t *buffer_1847;


// Layer: Mul_808, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1856;


// Layer: Conv_809, Operation: Conv
// Inputs
// (512, 256, 1, 1)
fp_t **buffer_2137;
// (512,)
fp_t *buffer_2138;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_2136;


// Layer: Add_810, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1859;


// Layer: PRelu_811, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2275;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1861;


// Layer: BatchNormalization_812, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_layer4_1_bn0_weight;
// (512,)
fp_t *buffer_layer4_1_bn0_bias;
// (512,)
fp_t *buffer_layer4_1_bn0_running_mean;
// (512,)
fp_t *buffer_layer4_1_bn0_running_var;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1862;


// Layer: Conv_813, Operation: Conv
// Inputs
// (512, 512, 3, 3)
fp_t **buffer_2140;
// (512,)
fp_t *buffer_2141;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_2139;


// Layer: PRelu_814, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2276;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1866;


// Layer: Conv_815, Operation: Conv
// Inputs
// (512, 512, 3, 3)
fp_t **buffer_2143;
// (512,)
fp_t *buffer_2144;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_2142;


// Layer: GlobalAveragePool_822, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
fp_t **buffer_1875;


// Layer: Gemm_827, Operation: Gemm
// Inputs
// (32, 512)
fp_t *buffer_layer4_1_se_fc_0_weight;
// (32,)
fp_t *buffer_layer4_1_se_fc_0_bias;
// Outputs
// (1, 32)
fp_t *buffer_1880;


// Layer: PRelu_828, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer4_1_se_fc_1_weight;
// Outputs
// (1, 32)
fp_t *buffer_1881;


// Layer: Gemm_829, Operation: Gemm
// Inputs
// (512, 32)
fp_t *buffer_layer4_1_se_fc_2_weight;
// (512,)
fp_t *buffer_layer4_1_se_fc_2_bias;
// Outputs
// (1, 512)
fp_t *buffer_1882;


// Layer: Sigmoid_830, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
fp_t *buffer_1883;


// Layer: Mul_835, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1892;


// Layer: Add_836, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1893;


// Layer: PRelu_837, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2279;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1895;


// Layer: BatchNormalization_838, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_layer4_2_bn0_weight;
// (512,)
fp_t *buffer_layer4_2_bn0_bias;
// (512,)
fp_t *buffer_layer4_2_bn0_running_mean;
// (512,)
fp_t *buffer_layer4_2_bn0_running_var;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1896;


// Layer: Conv_839, Operation: Conv
// Inputs
// (512, 512, 3, 3)
fp_t **buffer_2146;
// (512,)
fp_t *buffer_2147;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_2145;


// Layer: PRelu_840, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2280;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1900;


// Layer: Conv_841, Operation: Conv
// Inputs
// (512, 512, 3, 3)
fp_t **buffer_2149;
// (512,)
fp_t *buffer_2150;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_2148;


// Layer: GlobalAveragePool_848, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
fp_t **buffer_1909;


// Layer: Gemm_853, Operation: Gemm
// Inputs
// (32, 512)
fp_t *buffer_layer4_2_se_fc_0_weight;
// (32,)
fp_t *buffer_layer4_2_se_fc_0_bias;
// Outputs
// (1, 32)
fp_t *buffer_1914;


// Layer: PRelu_854, Operation: PRelu
// Inputs
// (1,)
fp_t *buffer_layer4_2_se_fc_1_weight;
// Outputs
// (1, 32)
fp_t *buffer_1915;


// Layer: Gemm_855, Operation: Gemm
// Inputs
// (512, 32)
fp_t *buffer_layer4_2_se_fc_2_weight;
// (512,)
fp_t *buffer_layer4_2_se_fc_2_bias;
// Outputs
// (1, 512)
fp_t *buffer_1916;


// Layer: Sigmoid_856, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
fp_t *buffer_1917;


// Layer: Mul_861, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1926;


// Layer: Add_862, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1927;


// Layer: PRelu_863, Operation: PRelu
// Inputs
// (1, 1, 1)
fp_t **buffer_2283;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1929;


// Layer: BatchNormalization_864, Operation: BatchNormalization
// Inputs
// (512,)
fp_t *buffer_bn2_weight;
// (512,)
fp_t *buffer_bn2_bias;
// (512,)
fp_t *buffer_bn2_running_mean;
// (512,)
fp_t *buffer_bn2_running_var;
// Outputs
// (1, 512, 7, 7)
fp_t **buffer_1930;


// Layer: Gemm_871, Operation: Gemm
// Inputs
// (512, 25088)
fp_t *buffer_fc_weight;
// (512,)
fp_t *buffer_fc_bias;
// Outputs
// (1, 512)
fp_t *buffer_1939;


// Layer: BatchNormalization_872, Operation: BatchNormalization1d
// Inputs
// (512,)
fp_t *buffer_bn3_weight;
// (512,)
fp_t *buffer_bn3_bias;
// (512,)
fp_t *buffer_bn3_running_mean;
// (512,)
fp_t *buffer_bn3_running_var;
// Outputs
// (1, 512)
fp_t *output_output;


#endif //NETWORK_INITIALIZATION_H
