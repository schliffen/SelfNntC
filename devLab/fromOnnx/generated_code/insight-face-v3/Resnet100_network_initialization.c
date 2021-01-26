#include " Resnet100_network_initialization.h"

void Resnet100_initialize_network() {

Resnet100_kernels = (fp_t***) malloc(137 * sizeof(fp_t**));
Resnet100_biases = (fp_t**) malloc(277 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
buffer_1942 = (fp_t**) malloc(192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 192; kernel++){
    buffer_1942[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[0] = buffer_1942;


// (64,)
buffer_1943 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[0] = buffer_1943;


// Outputs
// (1, 64, 110, 110)
buffer_1941 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1941[output] = (fp_t*) malloc(110*110 * sizeof(fp_t));
}



// Layer: PRelu_1, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 110, 110)
buffer_800 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_800[output] = (fp_t*) malloc(110*110 * sizeof(fp_t));
}



// Layer: MaxPool_2, Operation: MaxPool
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_801 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_801[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_3, Operation: BatchNormalization
// Inputs
// (64,)
buffer_layer1_0_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[1] = buffer_layer1_0_bn0_weight;


// (64,)
buffer_layer1_0_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[2] = buffer_layer1_0_bn0_bias;


// (64,)
buffer_layer1_0_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[3] = buffer_layer1_0_bn0_running_mean;


// (64,)
buffer_layer1_0_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[4] = buffer_layer1_0_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
buffer_802 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_802[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_4, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_1945 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_1945[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[1] = buffer_1945;


// (64,)
buffer_1946 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[5] = buffer_1946;


// Outputs
// (1, 64, 55, 55)
buffer_1944 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1944[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_5, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_806 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_806[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_6, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_1948 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_1948[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[2] = buffer_1948;


// (64,)
buffer_1949 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[6] = buffer_1949;


// Outputs
// (1, 64, 55, 55)
buffer_1947 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1947[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_13, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
buffer_815 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_815[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_18, Operation: Gemm
// Inputs
// (4, 64)
buffer_layer1_0_se_fc_0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



kernels[3] = &buffer_layer1_0_se_fc_0_weight;


// (4,)
buffer_layer1_0_se_fc_0_bias = (fp_t*) malloc(4 * sizeof(fp_t));



biases[7] = buffer_layer1_0_se_fc_0_bias;


// Outputs
// (1, 4)
buffer_820 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: PRelu_19, Operation: PRelu
// Inputs
// Outputs
// (1, 4)
buffer_821 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: Gemm_20, Operation: Gemm
// Inputs
// (64, 4)
buffer_layer1_0_se_fc_2_weight = (fp_t*) malloc(256 * sizeof(fp_t));



kernels[4] = &buffer_layer1_0_se_fc_2_weight;


// (64,)
buffer_layer1_0_se_fc_2_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[8] = buffer_layer1_0_se_fc_2_bias;


// Outputs
// (1, 64)
buffer_822 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Sigmoid_21, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
buffer_823 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Mul_26, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_832 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_832[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Add_27, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_833 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_833[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_28, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_835 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_835[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_29, Operation: BatchNormalization
// Inputs
// (64,)
buffer_layer1_1_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[9] = buffer_layer1_1_bn0_weight;


// (64,)
buffer_layer1_1_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[10] = buffer_layer1_1_bn0_bias;


// (64,)
buffer_layer1_1_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[11] = buffer_layer1_1_bn0_running_mean;


// (64,)
buffer_layer1_1_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[12] = buffer_layer1_1_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
buffer_836 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_836[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_30, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_1951 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_1951[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[5] = buffer_1951;


// (64,)
buffer_1952 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[13] = buffer_1952;


// Outputs
// (1, 64, 55, 55)
buffer_1950 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1950[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_31, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_840 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_840[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_32, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_1954 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_1954[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[6] = buffer_1954;


// (64,)
buffer_1955 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[14] = buffer_1955;


// Outputs
// (1, 64, 55, 55)
buffer_1953 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1953[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_39, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
buffer_849 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_849[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_44, Operation: Gemm
// Inputs
// (4, 64)
buffer_layer1_1_se_fc_0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



kernels[7] = &buffer_layer1_1_se_fc_0_weight;


// (4,)
buffer_layer1_1_se_fc_0_bias = (fp_t*) malloc(4 * sizeof(fp_t));



biases[15] = buffer_layer1_1_se_fc_0_bias;


// Outputs
// (1, 4)
buffer_854 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: PRelu_45, Operation: PRelu
// Inputs
// Outputs
// (1, 4)
buffer_855 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: Gemm_46, Operation: Gemm
// Inputs
// (64, 4)
buffer_layer1_1_se_fc_2_weight = (fp_t*) malloc(256 * sizeof(fp_t));



kernels[8] = &buffer_layer1_1_se_fc_2_weight;


// (64,)
buffer_layer1_1_se_fc_2_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[16] = buffer_layer1_1_se_fc_2_bias;


// Outputs
// (1, 64)
buffer_856 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Sigmoid_47, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
buffer_857 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Mul_52, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_866 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_866[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Add_53, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_867 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_867[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_54, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_869 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_869[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_55, Operation: BatchNormalization
// Inputs
// (64,)
buffer_layer1_2_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[17] = buffer_layer1_2_bn0_weight;


// (64,)
buffer_layer1_2_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[18] = buffer_layer1_2_bn0_bias;


// (64,)
buffer_layer1_2_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[19] = buffer_layer1_2_bn0_running_mean;


// (64,)
buffer_layer1_2_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[20] = buffer_layer1_2_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
buffer_870 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_870[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_56, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_1957 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_1957[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[9] = buffer_1957;


// (64,)
buffer_1958 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[21] = buffer_1958;


// Outputs
// (1, 64, 55, 55)
buffer_1956 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1956[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_57, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_874 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_874[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_58, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_1960 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_1960[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[10] = buffer_1960;


// (64,)
buffer_1961 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[22] = buffer_1961;


// Outputs
// (1, 64, 55, 55)
buffer_1959 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1959[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_65, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
buffer_883 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_883[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_70, Operation: Gemm
// Inputs
// (4, 64)
buffer_layer1_2_se_fc_0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



kernels[11] = &buffer_layer1_2_se_fc_0_weight;


// (4,)
buffer_layer1_2_se_fc_0_bias = (fp_t*) malloc(4 * sizeof(fp_t));



biases[23] = buffer_layer1_2_se_fc_0_bias;


// Outputs
// (1, 4)
buffer_888 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: PRelu_71, Operation: PRelu
// Inputs
// Outputs
// (1, 4)
buffer_889 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: Gemm_72, Operation: Gemm
// Inputs
// (64, 4)
buffer_layer1_2_se_fc_2_weight = (fp_t*) malloc(256 * sizeof(fp_t));



kernels[12] = &buffer_layer1_2_se_fc_2_weight;


// (64,)
buffer_layer1_2_se_fc_2_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[24] = buffer_layer1_2_se_fc_2_bias;


// Outputs
// (1, 64)
buffer_890 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Sigmoid_73, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
buffer_891 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Mul_78, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_900 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_900[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Add_79, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_901 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_901[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_80, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_903 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_903[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_81, Operation: BatchNormalization
// Inputs
// (64,)
buffer_layer2_0_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



biases[25] = buffer_layer2_0_bn0_weight;


// (64,)
buffer_layer2_0_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



biases[26] = buffer_layer2_0_bn0_bias;


// (64,)
buffer_layer2_0_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



biases[27] = buffer_layer2_0_bn0_running_mean;


// (64,)
buffer_layer2_0_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



biases[28] = buffer_layer2_0_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
buffer_904 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_904[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_82, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_1963 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_1963[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[13] = buffer_1963;


// (64,)
buffer_1964 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[29] = buffer_1964;


// Outputs
// (1, 64, 55, 55)
buffer_1962 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_1962[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_83, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
buffer_908 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_908[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_84, Operation: Conv
// Inputs
// (128, 64, 3, 3)
buffer_1966 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_1966[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[14] = buffer_1966;


// (128,)
buffer_1967 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[30] = buffer_1967;


// Outputs
// (1, 128, 28, 28)
buffer_1965 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1965[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_91, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
buffer_917 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_917[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_96, Operation: Gemm
// Inputs
// (8, 128)
buffer_layer2_0_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[15] = &buffer_layer2_0_se_fc_0_weight;


// (8,)
buffer_layer2_0_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



biases[31] = buffer_layer2_0_se_fc_0_bias;


// Outputs
// (1, 8)
buffer_922 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_97, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
buffer_923 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_98, Operation: Gemm
// Inputs
// (128, 8)
buffer_layer2_0_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[16] = &buffer_layer2_0_se_fc_2_weight;


// (128,)
buffer_layer2_0_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[32] = buffer_layer2_0_se_fc_2_bias;


// Outputs
// (1, 128)
buffer_924 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_99, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
buffer_925 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_104, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_934 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_934[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_105, Operation: Conv
// Inputs
// (128, 64, 1, 1)
buffer_1969 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_1969[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[17] = buffer_1969;


// (128,)
buffer_1970 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[33] = buffer_1970;


// Outputs
// (1, 128, 28, 28)
buffer_1968 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1968[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_106, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_937 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_937[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_107, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_939 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_939[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_108, Operation: BatchNormalization
// Inputs
// (128,)
buffer_layer2_1_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[34] = buffer_layer2_1_bn0_weight;


// (128,)
buffer_layer2_1_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[35] = buffer_layer2_1_bn0_bias;


// (128,)
buffer_layer2_1_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[36] = buffer_layer2_1_bn0_running_mean;


// (128,)
buffer_layer2_1_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[37] = buffer_layer2_1_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_940 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_940[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_109, Operation: Conv
// Inputs
// (128, 128, 3, 3)
buffer_1972 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_1972[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[18] = buffer_1972;


// (128,)
buffer_1973 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[38] = buffer_1973;


// Outputs
// (1, 128, 28, 28)
buffer_1971 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1971[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_110, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_944 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_944[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_111, Operation: Conv
// Inputs
// (128, 128, 3, 3)
buffer_1975 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_1975[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[19] = buffer_1975;


// (128,)
buffer_1976 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[39] = buffer_1976;


// Outputs
// (1, 128, 28, 28)
buffer_1974 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1974[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_118, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
buffer_953 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_953[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_123, Operation: Gemm
// Inputs
// (8, 128)
buffer_layer2_1_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[20] = &buffer_layer2_1_se_fc_0_weight;


// (8,)
buffer_layer2_1_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



biases[40] = buffer_layer2_1_se_fc_0_bias;


// Outputs
// (1, 8)
buffer_958 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_124, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
buffer_959 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_125, Operation: Gemm
// Inputs
// (128, 8)
buffer_layer2_1_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[21] = &buffer_layer2_1_se_fc_2_weight;


// (128,)
buffer_layer2_1_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[41] = buffer_layer2_1_se_fc_2_bias;


// Outputs
// (1, 128)
buffer_960 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_126, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
buffer_961 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_131, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_970 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_970[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_132, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_971 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_971[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_133, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_973 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_973[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_134, Operation: BatchNormalization
// Inputs
// (128,)
buffer_layer2_2_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[42] = buffer_layer2_2_bn0_weight;


// (128,)
buffer_layer2_2_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[43] = buffer_layer2_2_bn0_bias;


// (128,)
buffer_layer2_2_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[44] = buffer_layer2_2_bn0_running_mean;


// (128,)
buffer_layer2_2_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[45] = buffer_layer2_2_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_974 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_974[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_135, Operation: Conv
// Inputs
// (128, 128, 3, 3)
buffer_1978 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_1978[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[22] = buffer_1978;


// (128,)
buffer_1979 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[46] = buffer_1979;


// Outputs
// (1, 128, 28, 28)
buffer_1977 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1977[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_136, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_978 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_978[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_137, Operation: Conv
// Inputs
// (128, 128, 3, 3)
buffer_1981 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_1981[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[23] = buffer_1981;


// (128,)
buffer_1982 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[47] = buffer_1982;


// Outputs
// (1, 128, 28, 28)
buffer_1980 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1980[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_144, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
buffer_987 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_987[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_149, Operation: Gemm
// Inputs
// (8, 128)
buffer_layer2_2_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[24] = &buffer_layer2_2_se_fc_0_weight;


// (8,)
buffer_layer2_2_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



biases[48] = buffer_layer2_2_se_fc_0_bias;


// Outputs
// (1, 8)
buffer_992 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_150, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
buffer_993 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_151, Operation: Gemm
// Inputs
// (128, 8)
buffer_layer2_2_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[25] = &buffer_layer2_2_se_fc_2_weight;


// (128,)
buffer_layer2_2_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[49] = buffer_layer2_2_se_fc_2_bias;


// Outputs
// (1, 128)
buffer_994 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_152, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
buffer_995 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_157, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1004 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1004[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_158, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1005 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1005[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_159, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1007 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1007[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_160, Operation: BatchNormalization
// Inputs
// (128,)
buffer_layer2_3_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[50] = buffer_layer2_3_bn0_weight;


// (128,)
buffer_layer2_3_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[51] = buffer_layer2_3_bn0_bias;


// (128,)
buffer_layer2_3_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[52] = buffer_layer2_3_bn0_running_mean;


// (128,)
buffer_layer2_3_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[53] = buffer_layer2_3_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_1008 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1008[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_161, Operation: Conv
// Inputs
// (128, 128, 3, 3)
buffer_1984 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_1984[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[26] = buffer_1984;


// (128,)
buffer_1985 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[54] = buffer_1985;


// Outputs
// (1, 128, 28, 28)
buffer_1983 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1983[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_162, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1012 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1012[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_163, Operation: Conv
// Inputs
// (128, 128, 3, 3)
buffer_1987 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_1987[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[27] = buffer_1987;


// (128,)
buffer_1988 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[55] = buffer_1988;


// Outputs
// (1, 128, 28, 28)
buffer_1986 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1986[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_170, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
buffer_1021 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1021[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_175, Operation: Gemm
// Inputs
// (8, 128)
buffer_layer2_3_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[28] = &buffer_layer2_3_se_fc_0_weight;


// (8,)
buffer_layer2_3_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



biases[56] = buffer_layer2_3_se_fc_0_bias;


// Outputs
// (1, 8)
buffer_1026 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_176, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
buffer_1027 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_177, Operation: Gemm
// Inputs
// (128, 8)
buffer_layer2_3_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



kernels[29] = &buffer_layer2_3_se_fc_2_weight;


// (128,)
buffer_layer2_3_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[57] = buffer_layer2_3_se_fc_2_bias;


// Outputs
// (1, 128)
buffer_1028 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_178, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
buffer_1029 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_183, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1038 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1038[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_184, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1039 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1039[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_185, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1041 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1041[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_186, Operation: BatchNormalization
// Inputs
// (128,)
buffer_layer3_0_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



biases[58] = buffer_layer3_0_bn0_weight;


// (128,)
buffer_layer3_0_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



biases[59] = buffer_layer3_0_bn0_bias;


// (128,)
buffer_layer3_0_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



biases[60] = buffer_layer3_0_bn0_running_mean;


// (128,)
buffer_layer3_0_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



biases[61] = buffer_layer3_0_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
buffer_1042 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1042[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_187, Operation: Conv
// Inputs
// (128, 128, 3, 3)
buffer_1990 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_1990[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[30] = buffer_1990;


// (128,)
buffer_1991 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[62] = buffer_1991;


// Outputs
// (1, 128, 28, 28)
buffer_1989 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1989[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_188, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
buffer_1046 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_1046[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_189, Operation: Conv
// Inputs
// (256, 128, 3, 3)
buffer_1993 = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_1993[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[31] = buffer_1993;


// (256,)
buffer_1994 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[63] = buffer_1994;


// Outputs
// (1, 256, 14, 14)
buffer_1992 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1992[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_196, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1055 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1055[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_201, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_0_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[32] = &buffer_layer3_0_se_fc_0_weight;


// (16,)
buffer_layer3_0_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[64] = buffer_layer3_0_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1060 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_202, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1061 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_203, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_0_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[33] = &buffer_layer3_0_se_fc_2_weight;


// (256,)
buffer_layer3_0_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[65] = buffer_layer3_0_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1062 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_204, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1063 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_209, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1072 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1072[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_210, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_1996 = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_1996[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[34] = buffer_1996;


// (256,)
buffer_1997 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[66] = buffer_1997;


// Outputs
// (1, 256, 14, 14)
buffer_1995 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1995[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_211, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1075 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1075[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_212, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1077 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1077[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_213, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_1_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[67] = buffer_layer3_1_bn0_weight;


// (256,)
buffer_layer3_1_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[68] = buffer_layer3_1_bn0_bias;


// (256,)
buffer_layer3_1_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[69] = buffer_layer3_1_bn0_running_mean;


// (256,)
buffer_layer3_1_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[70] = buffer_layer3_1_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1078 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1078[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_214, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_1999 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_1999[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[35] = buffer_1999;


// (256,)
buffer_2000 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[71] = buffer_2000;


// Outputs
// (1, 256, 14, 14)
buffer_1998 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1998[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_215, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1082 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1082[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_216, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2002 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2002[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[36] = buffer_2002;


// (256,)
buffer_2003 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[72] = buffer_2003;


// Outputs
// (1, 256, 14, 14)
buffer_2001 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2001[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_223, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1091 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1091[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_228, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_1_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[37] = &buffer_layer3_1_se_fc_0_weight;


// (16,)
buffer_layer3_1_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[73] = buffer_layer3_1_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1096 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_229, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1097 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_230, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_1_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[38] = &buffer_layer3_1_se_fc_2_weight;


// (256,)
buffer_layer3_1_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[74] = buffer_layer3_1_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1098 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_231, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1099 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_236, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1108 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1108[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_237, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1109 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1109[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_238, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1111 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1111[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_239, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_2_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[75] = buffer_layer3_2_bn0_weight;


// (256,)
buffer_layer3_2_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[76] = buffer_layer3_2_bn0_bias;


// (256,)
buffer_layer3_2_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[77] = buffer_layer3_2_bn0_running_mean;


// (256,)
buffer_layer3_2_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[78] = buffer_layer3_2_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1112 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1112[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_240, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2005 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2005[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[39] = buffer_2005;


// (256,)
buffer_2006 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[79] = buffer_2006;


// Outputs
// (1, 256, 14, 14)
buffer_2004 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2004[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_241, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1116 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1116[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_242, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2008 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2008[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[40] = buffer_2008;


// (256,)
buffer_2009 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[80] = buffer_2009;


// Outputs
// (1, 256, 14, 14)
buffer_2007 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2007[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_249, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1125 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1125[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_254, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_2_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[41] = &buffer_layer3_2_se_fc_0_weight;


// (16,)
buffer_layer3_2_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[81] = buffer_layer3_2_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1130 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_255, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1131 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_256, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_2_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[42] = &buffer_layer3_2_se_fc_2_weight;


// (256,)
buffer_layer3_2_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[82] = buffer_layer3_2_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1132 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_257, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1133 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_262, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1142 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1142[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_263, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1143 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1143[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_264, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1145 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1145[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_265, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_3_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[83] = buffer_layer3_3_bn0_weight;


// (256,)
buffer_layer3_3_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[84] = buffer_layer3_3_bn0_bias;


// (256,)
buffer_layer3_3_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[85] = buffer_layer3_3_bn0_running_mean;


// (256,)
buffer_layer3_3_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[86] = buffer_layer3_3_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1146 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1146[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_266, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2011 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2011[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[43] = buffer_2011;


// (256,)
buffer_2012 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[87] = buffer_2012;


// Outputs
// (1, 256, 14, 14)
buffer_2010 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2010[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_267, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1150 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1150[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_268, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2014 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2014[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[44] = buffer_2014;


// (256,)
buffer_2015 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[88] = buffer_2015;


// Outputs
// (1, 256, 14, 14)
buffer_2013 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2013[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_275, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1159 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1159[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_280, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_3_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[45] = &buffer_layer3_3_se_fc_0_weight;


// (16,)
buffer_layer3_3_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[89] = buffer_layer3_3_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1164 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_281, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1165 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_282, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_3_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[46] = &buffer_layer3_3_se_fc_2_weight;


// (256,)
buffer_layer3_3_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[90] = buffer_layer3_3_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1166 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_283, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1167 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_288, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1176 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1176[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_289, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1177 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1177[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_290, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1179 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1179[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_291, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_4_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[91] = buffer_layer3_4_bn0_weight;


// (256,)
buffer_layer3_4_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[92] = buffer_layer3_4_bn0_bias;


// (256,)
buffer_layer3_4_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[93] = buffer_layer3_4_bn0_running_mean;


// (256,)
buffer_layer3_4_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[94] = buffer_layer3_4_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1180 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1180[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_292, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2017 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2017[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[47] = buffer_2017;


// (256,)
buffer_2018 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[95] = buffer_2018;


// Outputs
// (1, 256, 14, 14)
buffer_2016 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2016[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_293, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1184 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1184[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_294, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2020 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2020[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[48] = buffer_2020;


// (256,)
buffer_2021 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[96] = buffer_2021;


// Outputs
// (1, 256, 14, 14)
buffer_2019 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2019[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_301, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1193 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1193[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_306, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_4_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[49] = &buffer_layer3_4_se_fc_0_weight;


// (16,)
buffer_layer3_4_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[97] = buffer_layer3_4_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1198 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_307, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1199 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_308, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_4_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[50] = &buffer_layer3_4_se_fc_2_weight;


// (256,)
buffer_layer3_4_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[98] = buffer_layer3_4_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1200 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_309, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1201 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_314, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1210 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1210[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_315, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1211 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1211[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_316, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1213 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1213[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_317, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_5_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[99] = buffer_layer3_5_bn0_weight;


// (256,)
buffer_layer3_5_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[100] = buffer_layer3_5_bn0_bias;


// (256,)
buffer_layer3_5_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[101] = buffer_layer3_5_bn0_running_mean;


// (256,)
buffer_layer3_5_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[102] = buffer_layer3_5_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1214 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1214[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_318, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2023 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2023[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[51] = buffer_2023;


// (256,)
buffer_2024 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[103] = buffer_2024;


// Outputs
// (1, 256, 14, 14)
buffer_2022 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2022[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_319, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1218 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1218[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_320, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2026 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2026[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[52] = buffer_2026;


// (256,)
buffer_2027 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[104] = buffer_2027;


// Outputs
// (1, 256, 14, 14)
buffer_2025 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2025[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_327, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1227 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1227[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_332, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_5_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[53] = &buffer_layer3_5_se_fc_0_weight;


// (16,)
buffer_layer3_5_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[105] = buffer_layer3_5_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1232 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_333, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1233 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_334, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_5_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[54] = &buffer_layer3_5_se_fc_2_weight;


// (256,)
buffer_layer3_5_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[106] = buffer_layer3_5_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1234 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_335, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1235 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_340, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1244 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1244[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_341, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1245 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1245[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_342, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1247 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1247[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_343, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_6_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[107] = buffer_layer3_6_bn0_weight;


// (256,)
buffer_layer3_6_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[108] = buffer_layer3_6_bn0_bias;


// (256,)
buffer_layer3_6_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[109] = buffer_layer3_6_bn0_running_mean;


// (256,)
buffer_layer3_6_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[110] = buffer_layer3_6_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1248 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1248[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_344, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2029 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2029[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[55] = buffer_2029;


// (256,)
buffer_2030 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[111] = buffer_2030;


// Outputs
// (1, 256, 14, 14)
buffer_2028 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2028[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_345, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1252 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1252[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_346, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2032 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2032[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[56] = buffer_2032;


// (256,)
buffer_2033 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[112] = buffer_2033;


// Outputs
// (1, 256, 14, 14)
buffer_2031 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2031[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_353, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1261 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1261[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_358, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_6_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[57] = &buffer_layer3_6_se_fc_0_weight;


// (16,)
buffer_layer3_6_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[113] = buffer_layer3_6_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1266 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_359, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1267 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_360, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_6_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[58] = &buffer_layer3_6_se_fc_2_weight;


// (256,)
buffer_layer3_6_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[114] = buffer_layer3_6_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1268 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_361, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1269 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_366, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1278 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1278[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_367, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1279 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1279[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_368, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1281 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1281[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_369, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_7_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[115] = buffer_layer3_7_bn0_weight;


// (256,)
buffer_layer3_7_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[116] = buffer_layer3_7_bn0_bias;


// (256,)
buffer_layer3_7_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[117] = buffer_layer3_7_bn0_running_mean;


// (256,)
buffer_layer3_7_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[118] = buffer_layer3_7_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1282 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1282[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_370, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2035 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2035[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[59] = buffer_2035;


// (256,)
buffer_2036 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[119] = buffer_2036;


// Outputs
// (1, 256, 14, 14)
buffer_2034 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2034[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_371, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1286 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1286[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_372, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2038 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2038[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[60] = buffer_2038;


// (256,)
buffer_2039 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[120] = buffer_2039;


// Outputs
// (1, 256, 14, 14)
buffer_2037 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2037[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_379, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1295 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1295[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_384, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_7_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[61] = &buffer_layer3_7_se_fc_0_weight;


// (16,)
buffer_layer3_7_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[121] = buffer_layer3_7_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1300 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_385, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1301 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_386, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_7_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[62] = &buffer_layer3_7_se_fc_2_weight;


// (256,)
buffer_layer3_7_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[122] = buffer_layer3_7_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1302 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_387, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1303 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_392, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1312 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1312[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_393, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1313 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1313[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_394, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1315 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1315[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_395, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_8_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[123] = buffer_layer3_8_bn0_weight;


// (256,)
buffer_layer3_8_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[124] = buffer_layer3_8_bn0_bias;


// (256,)
buffer_layer3_8_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[125] = buffer_layer3_8_bn0_running_mean;


// (256,)
buffer_layer3_8_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[126] = buffer_layer3_8_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1316 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1316[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_396, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2041 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2041[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[63] = buffer_2041;


// (256,)
buffer_2042 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[127] = buffer_2042;


// Outputs
// (1, 256, 14, 14)
buffer_2040 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2040[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_397, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1320 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1320[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_398, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2044 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2044[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[64] = buffer_2044;


// (256,)
buffer_2045 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[128] = buffer_2045;


// Outputs
// (1, 256, 14, 14)
buffer_2043 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2043[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_405, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1329 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1329[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_410, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_8_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[65] = &buffer_layer3_8_se_fc_0_weight;


// (16,)
buffer_layer3_8_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[129] = buffer_layer3_8_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1334 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_411, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1335 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_412, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_8_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[66] = &buffer_layer3_8_se_fc_2_weight;


// (256,)
buffer_layer3_8_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[130] = buffer_layer3_8_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1336 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_413, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1337 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_418, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1346 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1346[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_419, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1347 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1347[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_420, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1349 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1349[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_421, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_9_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[131] = buffer_layer3_9_bn0_weight;


// (256,)
buffer_layer3_9_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[132] = buffer_layer3_9_bn0_bias;


// (256,)
buffer_layer3_9_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[133] = buffer_layer3_9_bn0_running_mean;


// (256,)
buffer_layer3_9_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[134] = buffer_layer3_9_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1350 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1350[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_422, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2047 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2047[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[67] = buffer_2047;


// (256,)
buffer_2048 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[135] = buffer_2048;


// Outputs
// (1, 256, 14, 14)
buffer_2046 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2046[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_423, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1354 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1354[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_424, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2050 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2050[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[68] = buffer_2050;


// (256,)
buffer_2051 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[136] = buffer_2051;


// Outputs
// (1, 256, 14, 14)
buffer_2049 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2049[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_431, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1363 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1363[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_436, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_9_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[69] = &buffer_layer3_9_se_fc_0_weight;


// (16,)
buffer_layer3_9_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[137] = buffer_layer3_9_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1368 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_437, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1369 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_438, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_9_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[70] = &buffer_layer3_9_se_fc_2_weight;


// (256,)
buffer_layer3_9_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[138] = buffer_layer3_9_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1370 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_439, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1371 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_444, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1380 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1380[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_445, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1381 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1381[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_446, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1383 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1383[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_447, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_10_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[139] = buffer_layer3_10_bn0_weight;


// (256,)
buffer_layer3_10_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[140] = buffer_layer3_10_bn0_bias;


// (256,)
buffer_layer3_10_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[141] = buffer_layer3_10_bn0_running_mean;


// (256,)
buffer_layer3_10_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[142] = buffer_layer3_10_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1384 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1384[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_448, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2053 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2053[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[71] = buffer_2053;


// (256,)
buffer_2054 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[143] = buffer_2054;


// Outputs
// (1, 256, 14, 14)
buffer_2052 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2052[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_449, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1388 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1388[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_450, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2056 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2056[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[72] = buffer_2056;


// (256,)
buffer_2057 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[144] = buffer_2057;


// Outputs
// (1, 256, 14, 14)
buffer_2055 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2055[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_457, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1397 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1397[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_462, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_10_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[73] = &buffer_layer3_10_se_fc_0_weight;


// (16,)
buffer_layer3_10_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[145] = buffer_layer3_10_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1402 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_463, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1403 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_464, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_10_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[74] = &buffer_layer3_10_se_fc_2_weight;


// (256,)
buffer_layer3_10_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[146] = buffer_layer3_10_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1404 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_465, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1405 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_470, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1414 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1414[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_471, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1415 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1415[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_472, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1417 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1417[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_473, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_11_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[147] = buffer_layer3_11_bn0_weight;


// (256,)
buffer_layer3_11_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[148] = buffer_layer3_11_bn0_bias;


// (256,)
buffer_layer3_11_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[149] = buffer_layer3_11_bn0_running_mean;


// (256,)
buffer_layer3_11_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[150] = buffer_layer3_11_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1418 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1418[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_474, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2059 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2059[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[75] = buffer_2059;


// (256,)
buffer_2060 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[151] = buffer_2060;


// Outputs
// (1, 256, 14, 14)
buffer_2058 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2058[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_475, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1422 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1422[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_476, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2062 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2062[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[76] = buffer_2062;


// (256,)
buffer_2063 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[152] = buffer_2063;


// Outputs
// (1, 256, 14, 14)
buffer_2061 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2061[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_483, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1431 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1431[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_488, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_11_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[77] = &buffer_layer3_11_se_fc_0_weight;


// (16,)
buffer_layer3_11_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[153] = buffer_layer3_11_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1436 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_489, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1437 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_490, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_11_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[78] = &buffer_layer3_11_se_fc_2_weight;


// (256,)
buffer_layer3_11_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[154] = buffer_layer3_11_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1438 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_491, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1439 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_496, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1448 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1448[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_497, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1449 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1449[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_498, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1451 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1451[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_499, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_12_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[155] = buffer_layer3_12_bn0_weight;


// (256,)
buffer_layer3_12_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[156] = buffer_layer3_12_bn0_bias;


// (256,)
buffer_layer3_12_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[157] = buffer_layer3_12_bn0_running_mean;


// (256,)
buffer_layer3_12_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[158] = buffer_layer3_12_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1452 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1452[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_500, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2065 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2065[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[79] = buffer_2065;


// (256,)
buffer_2066 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[159] = buffer_2066;


// Outputs
// (1, 256, 14, 14)
buffer_2064 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2064[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_501, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1456 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1456[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_502, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2068 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2068[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[80] = buffer_2068;


// (256,)
buffer_2069 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[160] = buffer_2069;


// Outputs
// (1, 256, 14, 14)
buffer_2067 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2067[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_509, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1465 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1465[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_514, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_12_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[81] = &buffer_layer3_12_se_fc_0_weight;


// (16,)
buffer_layer3_12_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[161] = buffer_layer3_12_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1470 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_515, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1471 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_516, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_12_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[82] = &buffer_layer3_12_se_fc_2_weight;


// (256,)
buffer_layer3_12_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[162] = buffer_layer3_12_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1472 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_517, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1473 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_522, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1482 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1482[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_523, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1483 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1483[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_524, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1485 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1485[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_525, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_13_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[163] = buffer_layer3_13_bn0_weight;


// (256,)
buffer_layer3_13_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[164] = buffer_layer3_13_bn0_bias;


// (256,)
buffer_layer3_13_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[165] = buffer_layer3_13_bn0_running_mean;


// (256,)
buffer_layer3_13_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[166] = buffer_layer3_13_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1486 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1486[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_526, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2071 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2071[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[83] = buffer_2071;


// (256,)
buffer_2072 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[167] = buffer_2072;


// Outputs
// (1, 256, 14, 14)
buffer_2070 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2070[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_527, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1490 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1490[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_528, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2074 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2074[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[84] = buffer_2074;


// (256,)
buffer_2075 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[168] = buffer_2075;


// Outputs
// (1, 256, 14, 14)
buffer_2073 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2073[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_535, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1499 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1499[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_540, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_13_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[85] = &buffer_layer3_13_se_fc_0_weight;


// (16,)
buffer_layer3_13_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[169] = buffer_layer3_13_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1504 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_541, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1505 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_542, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_13_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[86] = &buffer_layer3_13_se_fc_2_weight;


// (256,)
buffer_layer3_13_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[170] = buffer_layer3_13_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1506 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_543, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1507 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_548, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1516 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1516[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_549, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1517 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1517[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_550, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1519 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1519[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_551, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_14_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[171] = buffer_layer3_14_bn0_weight;


// (256,)
buffer_layer3_14_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[172] = buffer_layer3_14_bn0_bias;


// (256,)
buffer_layer3_14_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[173] = buffer_layer3_14_bn0_running_mean;


// (256,)
buffer_layer3_14_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[174] = buffer_layer3_14_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1520 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1520[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_552, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2077 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2077[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[87] = buffer_2077;


// (256,)
buffer_2078 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[175] = buffer_2078;


// Outputs
// (1, 256, 14, 14)
buffer_2076 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2076[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_553, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1524 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1524[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_554, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2080 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2080[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[88] = buffer_2080;


// (256,)
buffer_2081 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[176] = buffer_2081;


// Outputs
// (1, 256, 14, 14)
buffer_2079 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2079[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_561, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1533 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1533[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_566, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_14_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[89] = &buffer_layer3_14_se_fc_0_weight;


// (16,)
buffer_layer3_14_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[177] = buffer_layer3_14_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1538 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_567, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1539 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_568, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_14_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[90] = &buffer_layer3_14_se_fc_2_weight;


// (256,)
buffer_layer3_14_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[178] = buffer_layer3_14_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1540 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_569, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1541 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_574, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1550 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1550[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_575, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1551 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1551[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_576, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1553 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1553[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_577, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_15_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[179] = buffer_layer3_15_bn0_weight;


// (256,)
buffer_layer3_15_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[180] = buffer_layer3_15_bn0_bias;


// (256,)
buffer_layer3_15_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[181] = buffer_layer3_15_bn0_running_mean;


// (256,)
buffer_layer3_15_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[182] = buffer_layer3_15_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1554 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1554[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_578, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2083 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2083[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[91] = buffer_2083;


// (256,)
buffer_2084 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[183] = buffer_2084;


// Outputs
// (1, 256, 14, 14)
buffer_2082 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2082[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_579, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1558 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1558[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_580, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2086 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2086[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[92] = buffer_2086;


// (256,)
buffer_2087 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[184] = buffer_2087;


// Outputs
// (1, 256, 14, 14)
buffer_2085 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2085[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_587, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1567 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1567[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_592, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_15_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[93] = &buffer_layer3_15_se_fc_0_weight;


// (16,)
buffer_layer3_15_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[185] = buffer_layer3_15_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1572 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_593, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1573 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_594, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_15_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[94] = &buffer_layer3_15_se_fc_2_weight;


// (256,)
buffer_layer3_15_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[186] = buffer_layer3_15_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1574 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_595, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1575 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_600, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1584 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1584[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_601, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1585 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1585[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_602, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1587 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1587[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_603, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_16_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[187] = buffer_layer3_16_bn0_weight;


// (256,)
buffer_layer3_16_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[188] = buffer_layer3_16_bn0_bias;


// (256,)
buffer_layer3_16_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[189] = buffer_layer3_16_bn0_running_mean;


// (256,)
buffer_layer3_16_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[190] = buffer_layer3_16_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1588 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1588[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_604, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2089 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2089[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[95] = buffer_2089;


// (256,)
buffer_2090 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[191] = buffer_2090;


// Outputs
// (1, 256, 14, 14)
buffer_2088 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2088[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_605, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1592 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1592[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_606, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2092 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2092[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[96] = buffer_2092;


// (256,)
buffer_2093 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[192] = buffer_2093;


// Outputs
// (1, 256, 14, 14)
buffer_2091 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2091[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_613, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1601 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1601[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_618, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_16_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[97] = &buffer_layer3_16_se_fc_0_weight;


// (16,)
buffer_layer3_16_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[193] = buffer_layer3_16_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1606 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_619, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1607 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_620, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_16_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[98] = &buffer_layer3_16_se_fc_2_weight;


// (256,)
buffer_layer3_16_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[194] = buffer_layer3_16_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1608 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_621, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1609 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_626, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1618 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1618[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_627, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1619 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1619[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_628, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1621 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1621[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_629, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_17_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[195] = buffer_layer3_17_bn0_weight;


// (256,)
buffer_layer3_17_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[196] = buffer_layer3_17_bn0_bias;


// (256,)
buffer_layer3_17_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[197] = buffer_layer3_17_bn0_running_mean;


// (256,)
buffer_layer3_17_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[198] = buffer_layer3_17_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1622 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1622[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_630, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2095 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2095[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[99] = buffer_2095;


// (256,)
buffer_2096 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[199] = buffer_2096;


// Outputs
// (1, 256, 14, 14)
buffer_2094 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2094[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_631, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1626 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1626[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_632, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2098 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2098[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[100] = buffer_2098;


// (256,)
buffer_2099 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[200] = buffer_2099;


// Outputs
// (1, 256, 14, 14)
buffer_2097 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2097[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_639, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1635 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1635[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_644, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_17_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[101] = &buffer_layer3_17_se_fc_0_weight;


// (16,)
buffer_layer3_17_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[201] = buffer_layer3_17_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1640 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_645, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1641 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_646, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_17_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[102] = &buffer_layer3_17_se_fc_2_weight;


// (256,)
buffer_layer3_17_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[202] = buffer_layer3_17_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1642 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_647, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1643 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_652, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1652 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1652[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_653, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1653 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1653[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_654, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1655 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1655[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_655, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_18_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[203] = buffer_layer3_18_bn0_weight;


// (256,)
buffer_layer3_18_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[204] = buffer_layer3_18_bn0_bias;


// (256,)
buffer_layer3_18_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[205] = buffer_layer3_18_bn0_running_mean;


// (256,)
buffer_layer3_18_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[206] = buffer_layer3_18_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1656 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1656[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_656, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2101 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2101[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[103] = buffer_2101;


// (256,)
buffer_2102 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[207] = buffer_2102;


// Outputs
// (1, 256, 14, 14)
buffer_2100 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2100[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_657, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1660 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1660[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_658, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2104 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2104[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[104] = buffer_2104;


// (256,)
buffer_2105 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[208] = buffer_2105;


// Outputs
// (1, 256, 14, 14)
buffer_2103 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2103[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_665, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1669 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1669[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_670, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_18_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[105] = &buffer_layer3_18_se_fc_0_weight;


// (16,)
buffer_layer3_18_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[209] = buffer_layer3_18_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1674 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_671, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1675 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_672, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_18_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[106] = &buffer_layer3_18_se_fc_2_weight;


// (256,)
buffer_layer3_18_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[210] = buffer_layer3_18_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1676 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_673, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1677 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_678, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1686 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1686[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_679, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1687 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1687[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_680, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1689 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1689[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_681, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_19_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[211] = buffer_layer3_19_bn0_weight;


// (256,)
buffer_layer3_19_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[212] = buffer_layer3_19_bn0_bias;


// (256,)
buffer_layer3_19_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[213] = buffer_layer3_19_bn0_running_mean;


// (256,)
buffer_layer3_19_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[214] = buffer_layer3_19_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1690 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1690[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_682, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2107 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2107[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[107] = buffer_2107;


// (256,)
buffer_2108 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[215] = buffer_2108;


// Outputs
// (1, 256, 14, 14)
buffer_2106 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2106[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_683, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1694 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1694[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_684, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2110 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2110[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[108] = buffer_2110;


// (256,)
buffer_2111 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[216] = buffer_2111;


// Outputs
// (1, 256, 14, 14)
buffer_2109 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2109[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_691, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1703 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1703[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_696, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_19_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[109] = &buffer_layer3_19_se_fc_0_weight;


// (16,)
buffer_layer3_19_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[217] = buffer_layer3_19_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1708 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_697, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1709 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_698, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_19_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[110] = &buffer_layer3_19_se_fc_2_weight;


// (256,)
buffer_layer3_19_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[218] = buffer_layer3_19_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1710 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_699, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1711 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_704, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1720 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1720[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_705, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1721 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1721[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_706, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1723 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1723[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_707, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_20_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[219] = buffer_layer3_20_bn0_weight;


// (256,)
buffer_layer3_20_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[220] = buffer_layer3_20_bn0_bias;


// (256,)
buffer_layer3_20_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[221] = buffer_layer3_20_bn0_running_mean;


// (256,)
buffer_layer3_20_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[222] = buffer_layer3_20_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1724 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1724[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_708, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2113 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2113[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[111] = buffer_2113;


// (256,)
buffer_2114 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[223] = buffer_2114;


// Outputs
// (1, 256, 14, 14)
buffer_2112 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2112[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_709, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1728 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1728[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_710, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2116 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2116[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[112] = buffer_2116;


// (256,)
buffer_2117 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[224] = buffer_2117;


// Outputs
// (1, 256, 14, 14)
buffer_2115 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2115[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_717, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1737 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1737[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_722, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_20_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[113] = &buffer_layer3_20_se_fc_0_weight;


// (16,)
buffer_layer3_20_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[225] = buffer_layer3_20_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1742 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_723, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1743 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_724, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_20_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[114] = &buffer_layer3_20_se_fc_2_weight;


// (256,)
buffer_layer3_20_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[226] = buffer_layer3_20_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1744 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_725, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1745 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_730, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1754 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1754[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_731, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1755 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1755[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_732, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1757 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1757[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_733, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_21_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[227] = buffer_layer3_21_bn0_weight;


// (256,)
buffer_layer3_21_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[228] = buffer_layer3_21_bn0_bias;


// (256,)
buffer_layer3_21_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[229] = buffer_layer3_21_bn0_running_mean;


// (256,)
buffer_layer3_21_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[230] = buffer_layer3_21_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1758 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1758[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_734, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2119 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2119[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[115] = buffer_2119;


// (256,)
buffer_2120 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[231] = buffer_2120;


// Outputs
// (1, 256, 14, 14)
buffer_2118 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2118[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_735, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1762 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1762[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_736, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2122 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2122[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[116] = buffer_2122;


// (256,)
buffer_2123 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[232] = buffer_2123;


// Outputs
// (1, 256, 14, 14)
buffer_2121 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2121[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_743, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1771 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1771[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_748, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_21_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[117] = &buffer_layer3_21_se_fc_0_weight;


// (16,)
buffer_layer3_21_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[233] = buffer_layer3_21_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1776 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_749, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1777 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_750, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_21_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[118] = &buffer_layer3_21_se_fc_2_weight;


// (256,)
buffer_layer3_21_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[234] = buffer_layer3_21_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1778 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_751, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1779 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_756, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1788 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1788[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_757, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1789 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1789[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_758, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1791 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1791[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_759, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer3_22_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[235] = buffer_layer3_22_bn0_weight;


// (256,)
buffer_layer3_22_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[236] = buffer_layer3_22_bn0_bias;


// (256,)
buffer_layer3_22_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[237] = buffer_layer3_22_bn0_running_mean;


// (256,)
buffer_layer3_22_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[238] = buffer_layer3_22_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1792 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1792[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_760, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2125 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2125[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[119] = buffer_2125;


// (256,)
buffer_2126 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[239] = buffer_2126;


// Outputs
// (1, 256, 14, 14)
buffer_2124 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2124[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_761, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1796 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1796[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_762, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2128 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2128[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[120] = buffer_2128;


// (256,)
buffer_2129 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[240] = buffer_2129;


// Outputs
// (1, 256, 14, 14)
buffer_2127 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2127[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_769, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
buffer_1805 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1805[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_774, Operation: Gemm
// Inputs
// (16, 256)
buffer_layer3_22_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[121] = &buffer_layer3_22_se_fc_0_weight;


// (16,)
buffer_layer3_22_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



biases[241] = buffer_layer3_22_se_fc_0_bias;


// Outputs
// (1, 16)
buffer_1810 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_775, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
buffer_1811 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_776, Operation: Gemm
// Inputs
// (256, 16)
buffer_layer3_22_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



kernels[122] = &buffer_layer3_22_se_fc_2_weight;


// (256,)
buffer_layer3_22_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[242] = buffer_layer3_22_se_fc_2_bias;


// Outputs
// (1, 256)
buffer_1812 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_777, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
buffer_1813 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_782, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1822 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1822[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_783, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1823 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1823[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_784, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1825 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1825[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_785, Operation: BatchNormalization
// Inputs
// (256,)
buffer_layer4_0_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



biases[243] = buffer_layer4_0_bn0_weight;


// (256,)
buffer_layer4_0_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



biases[244] = buffer_layer4_0_bn0_bias;


// (256,)
buffer_layer4_0_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



biases[245] = buffer_layer4_0_bn0_running_mean;


// (256,)
buffer_layer4_0_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



biases[246] = buffer_layer4_0_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
buffer_1826 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1826[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_786, Operation: Conv
// Inputs
// (256, 256, 3, 3)
buffer_2131 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_2131[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[123] = buffer_2131;


// (256,)
buffer_2132 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[247] = buffer_2132;


// Outputs
// (1, 256, 14, 14)
buffer_2130 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_2130[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_787, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
buffer_1830 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_1830[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_788, Operation: Conv
// Inputs
// (512, 256, 3, 3)
buffer_2134 = (fp_t**) malloc(131072 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 131072; kernel++){
    buffer_2134[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[124] = buffer_2134;


// (512,)
buffer_2135 = (fp_t*) malloc(512 * sizeof(fp_t));



biases[248] = buffer_2135;


// Outputs
// (1, 512, 7, 7)
buffer_2133 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_2133[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_795, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
buffer_1839 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1839[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_800, Operation: Gemm
// Inputs
// (32, 512)
buffer_layer4_0_se_fc_0_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



kernels[125] = &buffer_layer4_0_se_fc_0_weight;


// (32,)
buffer_layer4_0_se_fc_0_bias = (fp_t*) malloc(32 * sizeof(fp_t));



biases[249] = buffer_layer4_0_se_fc_0_bias;


// Outputs
// (1, 32)
buffer_1844 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: PRelu_801, Operation: PRelu
// Inputs
// Outputs
// (1, 32)
buffer_1845 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: Gemm_802, Operation: Gemm
// Inputs
// (512, 32)
buffer_layer4_0_se_fc_2_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



kernels[126] = &buffer_layer4_0_se_fc_2_weight;


// (512,)
buffer_layer4_0_se_fc_2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[250] = buffer_layer4_0_se_fc_2_bias;


// Outputs
// (1, 512)
buffer_1846 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Sigmoid_803, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
buffer_1847 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Mul_808, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1856 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1856[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_809, Operation: Conv
// Inputs
// (512, 256, 1, 1)
buffer_2137 = (fp_t**) malloc(131072 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 131072; kernel++){
    buffer_2137[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[127] = buffer_2137;


// (512,)
buffer_2138 = (fp_t*) malloc(512 * sizeof(fp_t));



biases[251] = buffer_2138;


// Outputs
// (1, 512, 7, 7)
buffer_2136 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_2136[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_810, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1859 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1859[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_811, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1861 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1861[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_812, Operation: BatchNormalization
// Inputs
// (512,)
buffer_layer4_1_bn0_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[252] = buffer_layer4_1_bn0_weight;


// (512,)
buffer_layer4_1_bn0_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[253] = buffer_layer4_1_bn0_bias;


// (512,)
buffer_layer4_1_bn0_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[254] = buffer_layer4_1_bn0_running_mean;


// (512,)
buffer_layer4_1_bn0_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[255] = buffer_layer4_1_bn0_running_var;


// Outputs
// (1, 512, 7, 7)
buffer_1862 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1862[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_813, Operation: Conv
// Inputs
// (512, 512, 3, 3)
buffer_2140 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    buffer_2140[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[128] = buffer_2140;


// (512,)
buffer_2141 = (fp_t*) malloc(512 * sizeof(fp_t));



biases[256] = buffer_2141;


// Outputs
// (1, 512, 7, 7)
buffer_2139 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_2139[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_814, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1866 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1866[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_815, Operation: Conv
// Inputs
// (512, 512, 3, 3)
buffer_2143 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    buffer_2143[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[129] = buffer_2143;


// (512,)
buffer_2144 = (fp_t*) malloc(512 * sizeof(fp_t));



biases[257] = buffer_2144;


// Outputs
// (1, 512, 7, 7)
buffer_2142 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_2142[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_822, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
buffer_1875 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1875[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_827, Operation: Gemm
// Inputs
// (32, 512)
buffer_layer4_1_se_fc_0_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



kernels[130] = &buffer_layer4_1_se_fc_0_weight;


// (32,)
buffer_layer4_1_se_fc_0_bias = (fp_t*) malloc(32 * sizeof(fp_t));



biases[258] = buffer_layer4_1_se_fc_0_bias;


// Outputs
// (1, 32)
buffer_1880 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: PRelu_828, Operation: PRelu
// Inputs
// Outputs
// (1, 32)
buffer_1881 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: Gemm_829, Operation: Gemm
// Inputs
// (512, 32)
buffer_layer4_1_se_fc_2_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



kernels[131] = &buffer_layer4_1_se_fc_2_weight;


// (512,)
buffer_layer4_1_se_fc_2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[259] = buffer_layer4_1_se_fc_2_bias;


// Outputs
// (1, 512)
buffer_1882 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Sigmoid_830, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
buffer_1883 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Mul_835, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1892 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1892[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_836, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1893 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1893[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_837, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1895 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1895[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_838, Operation: BatchNormalization
// Inputs
// (512,)
buffer_layer4_2_bn0_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[260] = buffer_layer4_2_bn0_weight;


// (512,)
buffer_layer4_2_bn0_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[261] = buffer_layer4_2_bn0_bias;


// (512,)
buffer_layer4_2_bn0_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[262] = buffer_layer4_2_bn0_running_mean;


// (512,)
buffer_layer4_2_bn0_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[263] = buffer_layer4_2_bn0_running_var;


// Outputs
// (1, 512, 7, 7)
buffer_1896 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1896[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_839, Operation: Conv
// Inputs
// (512, 512, 3, 3)
buffer_2146 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    buffer_2146[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[132] = buffer_2146;


// (512,)
buffer_2147 = (fp_t*) malloc(512 * sizeof(fp_t));



biases[264] = buffer_2147;


// Outputs
// (1, 512, 7, 7)
buffer_2145 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_2145[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_840, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1900 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1900[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_841, Operation: Conv
// Inputs
// (512, 512, 3, 3)
buffer_2149 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    buffer_2149[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[133] = buffer_2149;


// (512,)
buffer_2150 = (fp_t*) malloc(512 * sizeof(fp_t));



biases[265] = buffer_2150;


// Outputs
// (1, 512, 7, 7)
buffer_2148 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_2148[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_848, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
buffer_1909 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1909[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_853, Operation: Gemm
// Inputs
// (32, 512)
buffer_layer4_2_se_fc_0_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



kernels[134] = &buffer_layer4_2_se_fc_0_weight;


// (32,)
buffer_layer4_2_se_fc_0_bias = (fp_t*) malloc(32 * sizeof(fp_t));



biases[266] = buffer_layer4_2_se_fc_0_bias;


// Outputs
// (1, 32)
buffer_1914 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: PRelu_854, Operation: PRelu
// Inputs
// Outputs
// (1, 32)
buffer_1915 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: Gemm_855, Operation: Gemm
// Inputs
// (512, 32)
buffer_layer4_2_se_fc_2_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



kernels[135] = &buffer_layer4_2_se_fc_2_weight;


// (512,)
buffer_layer4_2_se_fc_2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[267] = buffer_layer4_2_se_fc_2_bias;


// Outputs
// (1, 512)
buffer_1916 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Sigmoid_856, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
buffer_1917 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Mul_861, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1926 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1926[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_862, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1927 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1927[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_863, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
buffer_1929 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1929[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_864, Operation: BatchNormalization
// Inputs
// (512,)
buffer_bn2_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[268] = buffer_bn2_weight;


// (512,)
buffer_bn2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[269] = buffer_bn2_bias;


// (512,)
buffer_bn2_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[270] = buffer_bn2_running_mean;


// (512,)
buffer_bn2_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[271] = buffer_bn2_running_var;


// Outputs
// (1, 512, 7, 7)
buffer_1930 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    buffer_1930[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Gemm_871, Operation: Gemm
// Inputs
// (512, 25088)
buffer_fc_weight = (fp_t*) malloc(12845056 * sizeof(fp_t));



kernels[136] = &buffer_fc_weight;


// (512,)
buffer_fc_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[272] = buffer_fc_bias;


// Outputs
// (1, 512)
buffer_1939 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: BatchNormalization_872, Operation: BatchNormalization1d
// Inputs
// (512,)
buffer_bn3_weight = (fp_t*) malloc(512 * sizeof(fp_t));



biases[273] = buffer_bn3_weight;


// (512,)
buffer_bn3_bias = (fp_t*) malloc(512 * sizeof(fp_t));



biases[274] = buffer_bn3_bias;


// (512,)
buffer_bn3_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



biases[275] = buffer_bn3_running_mean;


// (512,)
buffer_bn3_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



biases[276] = buffer_bn3_running_var;


// Outputs
// (1, 512)
output_output = (fp_t*) malloc(512 * sizeof(fp_t));



}
