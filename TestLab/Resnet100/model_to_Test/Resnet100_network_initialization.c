#include "Resnet100_network_initialization.h"

void Resnet100_initialize_network() {
    Resnet100_kernels = (fp_t***) malloc(137 * sizeof(fp_t**));
    Resnet100_biases = (fp_t**) malloc(277 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (64, 3, 3, 3)
Resnet100_buffer_1942 = (fp_t**) malloc(192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 192; kernel++){
    Resnet100_buffer_1942[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[0] = Resnet100_buffer_1942;


// (64,)
Resnet100_buffer_1943 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[0] = Resnet100_buffer_1943;


// Outputs
// (1, 64, 110, 110)
Resnet100_buffer_1941 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1941[output] = (fp_t*) malloc(110*110 * sizeof(fp_t));
}



// Layer: PRelu_1, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 110, 110)
Resnet100_buffer_800 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_800[output] = (fp_t*) malloc(110*110 * sizeof(fp_t));
}



// Layer: MaxPool_2, Operation: MaxPool
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_801 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_801[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_3, Operation: BatchNormalization
// Inputs
// (64,)
Resnet100_buffer_layer1_0_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[1] = Resnet100_buffer_layer1_0_bn0_weight;


// (64,)
Resnet100_buffer_layer1_0_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[2] = Resnet100_buffer_layer1_0_bn0_bias;


// (64,)
Resnet100_buffer_layer1_0_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[3] = Resnet100_buffer_layer1_0_bn0_running_mean;


// (64,)
Resnet100_buffer_layer1_0_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[4] = Resnet100_buffer_layer1_0_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_802 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_802[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_4, Operation: Conv
// Inputs
// (64, 64, 3, 3)
Resnet100_buffer_1945 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    Resnet100_buffer_1945[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[1] = Resnet100_buffer_1945;


// (64,)
Resnet100_buffer_1946 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[5] = Resnet100_buffer_1946;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_1944 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1944[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_5, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_806 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_806[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_6, Operation: Conv
// Inputs
// (64, 64, 3, 3)
Resnet100_buffer_1948 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    Resnet100_buffer_1948[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[2] = Resnet100_buffer_1948;


// (64,)
Resnet100_buffer_1949 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[6] = Resnet100_buffer_1949;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_1947 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1947[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_13, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
Resnet100_buffer_815 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_815[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_18, Operation: Gemm
// Inputs
// (4, 64)
Resnet100_buffer_layer1_0_se_fc_0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_kernels[3] = &Resnet100_buffer_layer1_0_se_fc_0_weight;


// (4,)
Resnet100_buffer_layer1_0_se_fc_0_bias = (fp_t*) malloc(4 * sizeof(fp_t));



Resnet100_biases[7] = Resnet100_buffer_layer1_0_se_fc_0_bias;


// Outputs
// (1, 4)
Resnet100_buffer_820 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: PRelu_19, Operation: PRelu
// Inputs
// Outputs
// (1, 4)
Resnet100_buffer_821 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: Gemm_20, Operation: Gemm
// Inputs
// (64, 4)
Resnet100_buffer_layer1_0_se_fc_2_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_kernels[4] = &Resnet100_buffer_layer1_0_se_fc_2_weight;


// (64,)
Resnet100_buffer_layer1_0_se_fc_2_bias = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[8] = Resnet100_buffer_layer1_0_se_fc_2_bias;


// Outputs
// (1, 64)
Resnet100_buffer_822 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Sigmoid_21, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
Resnet100_buffer_823 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Mul_26, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_832 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_832[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Add_27, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_833 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_833[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_28, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_835 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_835[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_29, Operation: BatchNormalization
// Inputs
// (64,)
Resnet100_buffer_layer1_1_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[9] = Resnet100_buffer_layer1_1_bn0_weight;


// (64,)
Resnet100_buffer_layer1_1_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[10] = Resnet100_buffer_layer1_1_bn0_bias;


// (64,)
Resnet100_buffer_layer1_1_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[11] = Resnet100_buffer_layer1_1_bn0_running_mean;


// (64,)
Resnet100_buffer_layer1_1_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[12] = Resnet100_buffer_layer1_1_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_836 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_836[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_30, Operation: Conv
// Inputs
// (64, 64, 3, 3)
Resnet100_buffer_1951 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    Resnet100_buffer_1951[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[5] = Resnet100_buffer_1951;


// (64,)
Resnet100_buffer_1952 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[13] = Resnet100_buffer_1952;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_1950 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1950[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_31, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_840 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_840[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_32, Operation: Conv
// Inputs
// (64, 64, 3, 3)
Resnet100_buffer_1954 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    Resnet100_buffer_1954[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[6] = Resnet100_buffer_1954;


// (64,)
Resnet100_buffer_1955 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[14] = Resnet100_buffer_1955;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_1953 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1953[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_39, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
Resnet100_buffer_849 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_849[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_44, Operation: Gemm
// Inputs
// (4, 64)
Resnet100_buffer_layer1_1_se_fc_0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_kernels[7] = &Resnet100_buffer_layer1_1_se_fc_0_weight;


// (4,)
Resnet100_buffer_layer1_1_se_fc_0_bias = (fp_t*) malloc(4 * sizeof(fp_t));



Resnet100_biases[15] = Resnet100_buffer_layer1_1_se_fc_0_bias;


// Outputs
// (1, 4)
Resnet100_buffer_854 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: PRelu_45, Operation: PRelu
// Inputs
// Outputs
// (1, 4)
Resnet100_buffer_855 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: Gemm_46, Operation: Gemm
// Inputs
// (64, 4)
Resnet100_buffer_layer1_1_se_fc_2_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_kernels[8] = &Resnet100_buffer_layer1_1_se_fc_2_weight;


// (64,)
Resnet100_buffer_layer1_1_se_fc_2_bias = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[16] = Resnet100_buffer_layer1_1_se_fc_2_bias;


// Outputs
// (1, 64)
Resnet100_buffer_856 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Sigmoid_47, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
Resnet100_buffer_857 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Mul_52, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_866 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_866[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Add_53, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_867 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_867[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_54, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_869 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_869[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_55, Operation: BatchNormalization
// Inputs
// (64,)
Resnet100_buffer_layer1_2_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[17] = Resnet100_buffer_layer1_2_bn0_weight;


// (64,)
Resnet100_buffer_layer1_2_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[18] = Resnet100_buffer_layer1_2_bn0_bias;


// (64,)
Resnet100_buffer_layer1_2_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[19] = Resnet100_buffer_layer1_2_bn0_running_mean;


// (64,)
Resnet100_buffer_layer1_2_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[20] = Resnet100_buffer_layer1_2_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_870 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_870[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_56, Operation: Conv
// Inputs
// (64, 64, 3, 3)
Resnet100_buffer_1957 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    Resnet100_buffer_1957[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[9] = Resnet100_buffer_1957;


// (64,)
Resnet100_buffer_1958 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[21] = Resnet100_buffer_1958;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_1956 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1956[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_57, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_874 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_874[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_58, Operation: Conv
// Inputs
// (64, 64, 3, 3)
Resnet100_buffer_1960 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    Resnet100_buffer_1960[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[10] = Resnet100_buffer_1960;


// (64,)
Resnet100_buffer_1961 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[22] = Resnet100_buffer_1961;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_1959 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1959[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_65, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 64, 1, 1)
Resnet100_buffer_883 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_883[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_70, Operation: Gemm
// Inputs
// (4, 64)
Resnet100_buffer_layer1_2_se_fc_0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_kernels[11] = &Resnet100_buffer_layer1_2_se_fc_0_weight;


// (4,)
Resnet100_buffer_layer1_2_se_fc_0_bias = (fp_t*) malloc(4 * sizeof(fp_t));



Resnet100_biases[23] = Resnet100_buffer_layer1_2_se_fc_0_bias;


// Outputs
// (1, 4)
Resnet100_buffer_888 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: PRelu_71, Operation: PRelu
// Inputs
// Outputs
// (1, 4)
Resnet100_buffer_889 = (fp_t*) malloc(4 * sizeof(fp_t));



// Layer: Gemm_72, Operation: Gemm
// Inputs
// (64, 4)
Resnet100_buffer_layer1_2_se_fc_2_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_kernels[12] = &Resnet100_buffer_layer1_2_se_fc_2_weight;


// (64,)
Resnet100_buffer_layer1_2_se_fc_2_bias = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[24] = Resnet100_buffer_layer1_2_se_fc_2_bias;


// Outputs
// (1, 64)
Resnet100_buffer_890 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Sigmoid_73, Operation: Sigmoid
// Inputs
// Outputs
// (1, 64)
Resnet100_buffer_891 = (fp_t*) malloc(64 * sizeof(fp_t));



// Layer: Mul_78, Operation: Mul
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_900 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_900[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Add_79, Operation: Add
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_901 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_901[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_80, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_903 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_903[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: BatchNormalization_81, Operation: BatchNormalization
// Inputs
// (64,)
Resnet100_buffer_layer2_0_bn0_weight = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[25] = Resnet100_buffer_layer2_0_bn0_weight;


// (64,)
Resnet100_buffer_layer2_0_bn0_bias = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[26] = Resnet100_buffer_layer2_0_bn0_bias;


// (64,)
Resnet100_buffer_layer2_0_bn0_running_mean = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[27] = Resnet100_buffer_layer2_0_bn0_running_mean;


// (64,)
Resnet100_buffer_layer2_0_bn0_running_var = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[28] = Resnet100_buffer_layer2_0_bn0_running_var;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_904 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_904[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_82, Operation: Conv
// Inputs
// (64, 64, 3, 3)
Resnet100_buffer_1963 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    Resnet100_buffer_1963[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[13] = Resnet100_buffer_1963;


// (64,)
Resnet100_buffer_1964 = (fp_t*) malloc(64 * sizeof(fp_t));



Resnet100_biases[29] = Resnet100_buffer_1964;


// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_1962 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_1962[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: PRelu_83, Operation: PRelu
// Inputs
// Outputs
// (1, 64, 55, 55)
Resnet100_buffer_908 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    Resnet100_buffer_908[output] = (fp_t*) malloc(55*55 * sizeof(fp_t));
}



// Layer: Conv_84, Operation: Conv
// Inputs
// (128, 64, 3, 3)
Resnet100_buffer_1966 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    Resnet100_buffer_1966[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[14] = Resnet100_buffer_1966;


// (128,)
Resnet100_buffer_1967 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[30] = Resnet100_buffer_1967;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1965 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1965[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_91, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
Resnet100_buffer_917 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_917[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_96, Operation: Gemm
// Inputs
// (8, 128)
Resnet100_buffer_layer2_0_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[15] = &Resnet100_buffer_layer2_0_se_fc_0_weight;


// (8,)
Resnet100_buffer_layer2_0_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



Resnet100_biases[31] = Resnet100_buffer_layer2_0_se_fc_0_bias;


// Outputs
// (1, 8)
Resnet100_buffer_922 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_97, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
Resnet100_buffer_923 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_98, Operation: Gemm
// Inputs
// (128, 8)
Resnet100_buffer_layer2_0_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[16] = &Resnet100_buffer_layer2_0_se_fc_2_weight;


// (128,)
Resnet100_buffer_layer2_0_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[32] = Resnet100_buffer_layer2_0_se_fc_2_bias;


// Outputs
// (1, 128)
Resnet100_buffer_924 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_99, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
Resnet100_buffer_925 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_104, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_934 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_934[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_105, Operation: Conv
// Inputs
// (128, 64, 1, 1)
Resnet100_buffer_1969 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    Resnet100_buffer_1969[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



Resnet100_kernels[17] = Resnet100_buffer_1969;


// (128,)
Resnet100_buffer_1970 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[33] = Resnet100_buffer_1970;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1968 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1968[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_106, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_937 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_937[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_107, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_939 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_939[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_108, Operation: BatchNormalization
// Inputs
// (128,)
Resnet100_buffer_layer2_1_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[34] = Resnet100_buffer_layer2_1_bn0_weight;


// (128,)
Resnet100_buffer_layer2_1_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[35] = Resnet100_buffer_layer2_1_bn0_bias;


// (128,)
Resnet100_buffer_layer2_1_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[36] = Resnet100_buffer_layer2_1_bn0_running_mean;


// (128,)
Resnet100_buffer_layer2_1_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[37] = Resnet100_buffer_layer2_1_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_940 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_940[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_109, Operation: Conv
// Inputs
// (128, 128, 3, 3)
Resnet100_buffer_1972 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    Resnet100_buffer_1972[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[18] = Resnet100_buffer_1972;


// (128,)
Resnet100_buffer_1973 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[38] = Resnet100_buffer_1973;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1971 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1971[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_110, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_944 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_944[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_111, Operation: Conv
// Inputs
// (128, 128, 3, 3)
Resnet100_buffer_1975 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    Resnet100_buffer_1975[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[19] = Resnet100_buffer_1975;


// (128,)
Resnet100_buffer_1976 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[39] = Resnet100_buffer_1976;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1974 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1974[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_118, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
Resnet100_buffer_953 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_953[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_123, Operation: Gemm
// Inputs
// (8, 128)
Resnet100_buffer_layer2_1_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[20] = &Resnet100_buffer_layer2_1_se_fc_0_weight;


// (8,)
Resnet100_buffer_layer2_1_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



Resnet100_biases[40] = Resnet100_buffer_layer2_1_se_fc_0_bias;


// Outputs
// (1, 8)
Resnet100_buffer_958 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_124, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
Resnet100_buffer_959 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_125, Operation: Gemm
// Inputs
// (128, 8)
Resnet100_buffer_layer2_1_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[21] = &Resnet100_buffer_layer2_1_se_fc_2_weight;


// (128,)
Resnet100_buffer_layer2_1_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[41] = Resnet100_buffer_layer2_1_se_fc_2_bias;


// Outputs
// (1, 128)
Resnet100_buffer_960 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_126, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
Resnet100_buffer_961 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_131, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_970 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_970[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_132, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_971 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_971[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_133, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_973 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_973[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_134, Operation: BatchNormalization
// Inputs
// (128,)
Resnet100_buffer_layer2_2_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[42] = Resnet100_buffer_layer2_2_bn0_weight;


// (128,)
Resnet100_buffer_layer2_2_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[43] = Resnet100_buffer_layer2_2_bn0_bias;


// (128,)
Resnet100_buffer_layer2_2_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[44] = Resnet100_buffer_layer2_2_bn0_running_mean;


// (128,)
Resnet100_buffer_layer2_2_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[45] = Resnet100_buffer_layer2_2_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_974 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_974[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_135, Operation: Conv
// Inputs
// (128, 128, 3, 3)
Resnet100_buffer_1978 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    Resnet100_buffer_1978[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[22] = Resnet100_buffer_1978;


// (128,)
Resnet100_buffer_1979 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[46] = Resnet100_buffer_1979;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1977 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1977[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_136, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_978 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_978[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_137, Operation: Conv
// Inputs
// (128, 128, 3, 3)
Resnet100_buffer_1981 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    Resnet100_buffer_1981[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[23] = Resnet100_buffer_1981;


// (128,)
Resnet100_buffer_1982 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[47] = Resnet100_buffer_1982;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1980 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1980[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_144, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
Resnet100_buffer_987 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_987[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_149, Operation: Gemm
// Inputs
// (8, 128)
Resnet100_buffer_layer2_2_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[24] = &Resnet100_buffer_layer2_2_se_fc_0_weight;


// (8,)
Resnet100_buffer_layer2_2_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



Resnet100_biases[48] = Resnet100_buffer_layer2_2_se_fc_0_bias;


// Outputs
// (1, 8)
Resnet100_buffer_992 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_150, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
Resnet100_buffer_993 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_151, Operation: Gemm
// Inputs
// (128, 8)
Resnet100_buffer_layer2_2_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[25] = &Resnet100_buffer_layer2_2_se_fc_2_weight;


// (128,)
Resnet100_buffer_layer2_2_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[49] = Resnet100_buffer_layer2_2_se_fc_2_bias;


// Outputs
// (1, 128)
Resnet100_buffer_994 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_152, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
Resnet100_buffer_995 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_157, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1004 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1004[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_158, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1005 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1005[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_159, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1007 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1007[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_160, Operation: BatchNormalization
// Inputs
// (128,)
Resnet100_buffer_layer2_3_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[50] = Resnet100_buffer_layer2_3_bn0_weight;


// (128,)
Resnet100_buffer_layer2_3_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[51] = Resnet100_buffer_layer2_3_bn0_bias;


// (128,)
Resnet100_buffer_layer2_3_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[52] = Resnet100_buffer_layer2_3_bn0_running_mean;


// (128,)
Resnet100_buffer_layer2_3_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[53] = Resnet100_buffer_layer2_3_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1008 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1008[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_161, Operation: Conv
// Inputs
// (128, 128, 3, 3)
Resnet100_buffer_1984 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    Resnet100_buffer_1984[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[26] = Resnet100_buffer_1984;


// (128,)
Resnet100_buffer_1985 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[54] = Resnet100_buffer_1985;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1983 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1983[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_162, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1012 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1012[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_163, Operation: Conv
// Inputs
// (128, 128, 3, 3)
Resnet100_buffer_1987 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    Resnet100_buffer_1987[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[27] = Resnet100_buffer_1987;


// (128,)
Resnet100_buffer_1988 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[55] = Resnet100_buffer_1988;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1986 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1986[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_170, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 128, 1, 1)
Resnet100_buffer_1021 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1021[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_175, Operation: Gemm
// Inputs
// (8, 128)
Resnet100_buffer_layer2_3_se_fc_0_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[28] = &Resnet100_buffer_layer2_3_se_fc_0_weight;


// (8,)
Resnet100_buffer_layer2_3_se_fc_0_bias = (fp_t*) malloc(8 * sizeof(fp_t));



Resnet100_biases[56] = Resnet100_buffer_layer2_3_se_fc_0_bias;


// Outputs
// (1, 8)
Resnet100_buffer_1026 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: PRelu_176, Operation: PRelu
// Inputs
// Outputs
// (1, 8)
Resnet100_buffer_1027 = (fp_t*) malloc(8 * sizeof(fp_t));



// Layer: Gemm_177, Operation: Gemm
// Inputs
// (128, 8)
Resnet100_buffer_layer2_3_se_fc_2_weight = (fp_t*) malloc(1024 * sizeof(fp_t));



Resnet100_kernels[29] = &Resnet100_buffer_layer2_3_se_fc_2_weight;


// (128,)
Resnet100_buffer_layer2_3_se_fc_2_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[57] = Resnet100_buffer_layer2_3_se_fc_2_bias;


// Outputs
// (1, 128)
Resnet100_buffer_1028 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Sigmoid_178, Operation: Sigmoid
// Inputs
// Outputs
// (1, 128)
Resnet100_buffer_1029 = (fp_t*) malloc(128 * sizeof(fp_t));



// Layer: Mul_183, Operation: Mul
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1038 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1038[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Add_184, Operation: Add
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1039 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1039[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_185, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1041 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1041[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: BatchNormalization_186, Operation: BatchNormalization
// Inputs
// (128,)
Resnet100_buffer_layer3_0_bn0_weight = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[58] = Resnet100_buffer_layer3_0_bn0_weight;


// (128,)
Resnet100_buffer_layer3_0_bn0_bias = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[59] = Resnet100_buffer_layer3_0_bn0_bias;


// (128,)
Resnet100_buffer_layer3_0_bn0_running_mean = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[60] = Resnet100_buffer_layer3_0_bn0_running_mean;


// (128,)
Resnet100_buffer_layer3_0_bn0_running_var = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[61] = Resnet100_buffer_layer3_0_bn0_running_var;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1042 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1042[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_187, Operation: Conv
// Inputs
// (128, 128, 3, 3)
Resnet100_buffer_1990 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    Resnet100_buffer_1990[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[30] = Resnet100_buffer_1990;


// (128,)
Resnet100_buffer_1991 = (fp_t*) malloc(128 * sizeof(fp_t));



Resnet100_biases[62] = Resnet100_buffer_1991;


// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1989 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1989[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: PRelu_188, Operation: PRelu
// Inputs
// Outputs
// (1, 128, 28, 28)
Resnet100_buffer_1046 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    Resnet100_buffer_1046[output] = (fp_t*) malloc(28*28 * sizeof(fp_t));
}



// Layer: Conv_189, Operation: Conv
// Inputs
// (256, 128, 3, 3)
Resnet100_buffer_1993 = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    Resnet100_buffer_1993[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[31] = Resnet100_buffer_1993;


// (256,)
Resnet100_buffer_1994 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[63] = Resnet100_buffer_1994;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1992 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1992[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_196, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1055 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1055[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_201, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_0_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[32] = &Resnet100_buffer_layer3_0_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_0_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[64] = Resnet100_buffer_layer3_0_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1060 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_202, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1061 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_203, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_0_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[33] = &Resnet100_buffer_layer3_0_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_0_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[65] = Resnet100_buffer_layer3_0_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1062 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_204, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1063 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_209, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1072 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1072[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_210, Operation: Conv
// Inputs
// (256, 128, 1, 1)
Resnet100_buffer_1996 = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    Resnet100_buffer_1996[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



Resnet100_kernels[34] = Resnet100_buffer_1996;


// (256,)
Resnet100_buffer_1997 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[66] = Resnet100_buffer_1997;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1995 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1995[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_211, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1075 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1075[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_212, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1077 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1077[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_213, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_1_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[67] = Resnet100_buffer_layer3_1_bn0_weight;


// (256,)
Resnet100_buffer_layer3_1_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[68] = Resnet100_buffer_layer3_1_bn0_bias;


// (256,)
Resnet100_buffer_layer3_1_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[69] = Resnet100_buffer_layer3_1_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_1_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[70] = Resnet100_buffer_layer3_1_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1078 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1078[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_214, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_1999 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_1999[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[35] = Resnet100_buffer_1999;


// (256,)
Resnet100_buffer_2000 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[71] = Resnet100_buffer_2000;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1998 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1998[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_215, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1082 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1082[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_216, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2002 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2002[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[36] = Resnet100_buffer_2002;


// (256,)
Resnet100_buffer_2003 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[72] = Resnet100_buffer_2003;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2001 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2001[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_223, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1091 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1091[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_228, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_1_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[37] = &Resnet100_buffer_layer3_1_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_1_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[73] = Resnet100_buffer_layer3_1_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1096 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_229, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1097 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_230, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_1_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[38] = &Resnet100_buffer_layer3_1_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_1_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[74] = Resnet100_buffer_layer3_1_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1098 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_231, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1099 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_236, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1108 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1108[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_237, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1109 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1109[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_238, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1111 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1111[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_239, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_2_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[75] = Resnet100_buffer_layer3_2_bn0_weight;


// (256,)
Resnet100_buffer_layer3_2_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[76] = Resnet100_buffer_layer3_2_bn0_bias;


// (256,)
Resnet100_buffer_layer3_2_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[77] = Resnet100_buffer_layer3_2_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_2_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[78] = Resnet100_buffer_layer3_2_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1112 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1112[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_240, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2005 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2005[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[39] = Resnet100_buffer_2005;


// (256,)
Resnet100_buffer_2006 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[79] = Resnet100_buffer_2006;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2004 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2004[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_241, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1116 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1116[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_242, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2008 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2008[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[40] = Resnet100_buffer_2008;


// (256,)
Resnet100_buffer_2009 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[80] = Resnet100_buffer_2009;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2007 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2007[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_249, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1125 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1125[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_254, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_2_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[41] = &Resnet100_buffer_layer3_2_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_2_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[81] = Resnet100_buffer_layer3_2_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1130 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_255, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1131 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_256, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_2_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[42] = &Resnet100_buffer_layer3_2_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_2_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[82] = Resnet100_buffer_layer3_2_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1132 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_257, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1133 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_262, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1142 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1142[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_263, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1143 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1143[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_264, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1145 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1145[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_265, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_3_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[83] = Resnet100_buffer_layer3_3_bn0_weight;


// (256,)
Resnet100_buffer_layer3_3_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[84] = Resnet100_buffer_layer3_3_bn0_bias;


// (256,)
Resnet100_buffer_layer3_3_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[85] = Resnet100_buffer_layer3_3_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_3_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[86] = Resnet100_buffer_layer3_3_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1146 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1146[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_266, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2011 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2011[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[43] = Resnet100_buffer_2011;


// (256,)
Resnet100_buffer_2012 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[87] = Resnet100_buffer_2012;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2010 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2010[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_267, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1150 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1150[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_268, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2014 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2014[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[44] = Resnet100_buffer_2014;


// (256,)
Resnet100_buffer_2015 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[88] = Resnet100_buffer_2015;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2013 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2013[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_275, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1159 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1159[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_280, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_3_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[45] = &Resnet100_buffer_layer3_3_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_3_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[89] = Resnet100_buffer_layer3_3_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1164 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_281, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1165 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_282, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_3_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[46] = &Resnet100_buffer_layer3_3_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_3_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[90] = Resnet100_buffer_layer3_3_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1166 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_283, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1167 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_288, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1176 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1176[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_289, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1177 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1177[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_290, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1179 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1179[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_291, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_4_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[91] = Resnet100_buffer_layer3_4_bn0_weight;


// (256,)
Resnet100_buffer_layer3_4_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[92] = Resnet100_buffer_layer3_4_bn0_bias;


// (256,)
Resnet100_buffer_layer3_4_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[93] = Resnet100_buffer_layer3_4_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_4_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[94] = Resnet100_buffer_layer3_4_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1180 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1180[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_292, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2017 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2017[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[47] = Resnet100_buffer_2017;


// (256,)
Resnet100_buffer_2018 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[95] = Resnet100_buffer_2018;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2016 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2016[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_293, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1184 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1184[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_294, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2020 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2020[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[48] = Resnet100_buffer_2020;


// (256,)
Resnet100_buffer_2021 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[96] = Resnet100_buffer_2021;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2019 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2019[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_301, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1193 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1193[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_306, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_4_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[49] = &Resnet100_buffer_layer3_4_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_4_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[97] = Resnet100_buffer_layer3_4_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1198 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_307, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1199 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_308, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_4_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[50] = &Resnet100_buffer_layer3_4_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_4_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[98] = Resnet100_buffer_layer3_4_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1200 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_309, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1201 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_314, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1210 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1210[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_315, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1211 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1211[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_316, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1213 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1213[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_317, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_5_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[99] = Resnet100_buffer_layer3_5_bn0_weight;


// (256,)
Resnet100_buffer_layer3_5_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[100] = Resnet100_buffer_layer3_5_bn0_bias;


// (256,)
Resnet100_buffer_layer3_5_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[101] = Resnet100_buffer_layer3_5_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_5_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[102] = Resnet100_buffer_layer3_5_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1214 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1214[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_318, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2023 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2023[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[51] = Resnet100_buffer_2023;


// (256,)
Resnet100_buffer_2024 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[103] = Resnet100_buffer_2024;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2022 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2022[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_319, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1218 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1218[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_320, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2026 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2026[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[52] = Resnet100_buffer_2026;


// (256,)
Resnet100_buffer_2027 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[104] = Resnet100_buffer_2027;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2025 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2025[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_327, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1227 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1227[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_332, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_5_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[53] = &Resnet100_buffer_layer3_5_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_5_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[105] = Resnet100_buffer_layer3_5_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1232 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_333, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1233 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_334, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_5_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[54] = &Resnet100_buffer_layer3_5_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_5_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[106] = Resnet100_buffer_layer3_5_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1234 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_335, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1235 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_340, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1244 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1244[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_341, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1245 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1245[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_342, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1247 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1247[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_343, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_6_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[107] = Resnet100_buffer_layer3_6_bn0_weight;


// (256,)
Resnet100_buffer_layer3_6_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[108] = Resnet100_buffer_layer3_6_bn0_bias;


// (256,)
Resnet100_buffer_layer3_6_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[109] = Resnet100_buffer_layer3_6_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_6_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[110] = Resnet100_buffer_layer3_6_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1248 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1248[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_344, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2029 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2029[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[55] = Resnet100_buffer_2029;


// (256,)
Resnet100_buffer_2030 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[111] = Resnet100_buffer_2030;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2028 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2028[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_345, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1252 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1252[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_346, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2032 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2032[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[56] = Resnet100_buffer_2032;


// (256,)
Resnet100_buffer_2033 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[112] = Resnet100_buffer_2033;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2031 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2031[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_353, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1261 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1261[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_358, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_6_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[57] = &Resnet100_buffer_layer3_6_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_6_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[113] = Resnet100_buffer_layer3_6_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1266 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_359, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1267 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_360, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_6_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[58] = &Resnet100_buffer_layer3_6_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_6_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[114] = Resnet100_buffer_layer3_6_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1268 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_361, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1269 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_366, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1278 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1278[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_367, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1279 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1279[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_368, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1281 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1281[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_369, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_7_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[115] = Resnet100_buffer_layer3_7_bn0_weight;


// (256,)
Resnet100_buffer_layer3_7_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[116] = Resnet100_buffer_layer3_7_bn0_bias;


// (256,)
Resnet100_buffer_layer3_7_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[117] = Resnet100_buffer_layer3_7_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_7_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[118] = Resnet100_buffer_layer3_7_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1282 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1282[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_370, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2035 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2035[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[59] = Resnet100_buffer_2035;


// (256,)
Resnet100_buffer_2036 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[119] = Resnet100_buffer_2036;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2034 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2034[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_371, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1286 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1286[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_372, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2038 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2038[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[60] = Resnet100_buffer_2038;


// (256,)
Resnet100_buffer_2039 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[120] = Resnet100_buffer_2039;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2037 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2037[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_379, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1295 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1295[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_384, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_7_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[61] = &Resnet100_buffer_layer3_7_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_7_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[121] = Resnet100_buffer_layer3_7_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1300 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_385, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1301 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_386, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_7_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[62] = &Resnet100_buffer_layer3_7_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_7_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[122] = Resnet100_buffer_layer3_7_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1302 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_387, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1303 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_392, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1312 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1312[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_393, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1313 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1313[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_394, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1315 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1315[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_395, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_8_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[123] = Resnet100_buffer_layer3_8_bn0_weight;


// (256,)
Resnet100_buffer_layer3_8_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[124] = Resnet100_buffer_layer3_8_bn0_bias;


// (256,)
Resnet100_buffer_layer3_8_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[125] = Resnet100_buffer_layer3_8_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_8_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[126] = Resnet100_buffer_layer3_8_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1316 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1316[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_396, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2041 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2041[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[63] = Resnet100_buffer_2041;


// (256,)
Resnet100_buffer_2042 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[127] = Resnet100_buffer_2042;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2040 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2040[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_397, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1320 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1320[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_398, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2044 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2044[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[64] = Resnet100_buffer_2044;


// (256,)
Resnet100_buffer_2045 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[128] = Resnet100_buffer_2045;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2043 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2043[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_405, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1329 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1329[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_410, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_8_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[65] = &Resnet100_buffer_layer3_8_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_8_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[129] = Resnet100_buffer_layer3_8_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1334 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_411, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1335 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_412, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_8_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[66] = &Resnet100_buffer_layer3_8_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_8_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[130] = Resnet100_buffer_layer3_8_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1336 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_413, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1337 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_418, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1346 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1346[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_419, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1347 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1347[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_420, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1349 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1349[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_421, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_9_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[131] = Resnet100_buffer_layer3_9_bn0_weight;


// (256,)
Resnet100_buffer_layer3_9_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[132] = Resnet100_buffer_layer3_9_bn0_bias;


// (256,)
Resnet100_buffer_layer3_9_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[133] = Resnet100_buffer_layer3_9_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_9_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[134] = Resnet100_buffer_layer3_9_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1350 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1350[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_422, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2047 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2047[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[67] = Resnet100_buffer_2047;


// (256,)
Resnet100_buffer_2048 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[135] = Resnet100_buffer_2048;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2046 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2046[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_423, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1354 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1354[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_424, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2050 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2050[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[68] = Resnet100_buffer_2050;


// (256,)
Resnet100_buffer_2051 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[136] = Resnet100_buffer_2051;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2049 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2049[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_431, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1363 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1363[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_436, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_9_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[69] = &Resnet100_buffer_layer3_9_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_9_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[137] = Resnet100_buffer_layer3_9_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1368 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_437, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1369 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_438, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_9_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[70] = &Resnet100_buffer_layer3_9_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_9_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[138] = Resnet100_buffer_layer3_9_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1370 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_439, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1371 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_444, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1380 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1380[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_445, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1381 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1381[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_446, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1383 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1383[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_447, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_10_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[139] = Resnet100_buffer_layer3_10_bn0_weight;


// (256,)
Resnet100_buffer_layer3_10_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[140] = Resnet100_buffer_layer3_10_bn0_bias;


// (256,)
Resnet100_buffer_layer3_10_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[141] = Resnet100_buffer_layer3_10_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_10_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[142] = Resnet100_buffer_layer3_10_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1384 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1384[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_448, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2053 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2053[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[71] = Resnet100_buffer_2053;


// (256,)
Resnet100_buffer_2054 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[143] = Resnet100_buffer_2054;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2052 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2052[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_449, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1388 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1388[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_450, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2056 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2056[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[72] = Resnet100_buffer_2056;


// (256,)
Resnet100_buffer_2057 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[144] = Resnet100_buffer_2057;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2055 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2055[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_457, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1397 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1397[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_462, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_10_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[73] = &Resnet100_buffer_layer3_10_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_10_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[145] = Resnet100_buffer_layer3_10_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1402 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_463, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1403 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_464, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_10_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[74] = &Resnet100_buffer_layer3_10_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_10_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[146] = Resnet100_buffer_layer3_10_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1404 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_465, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1405 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_470, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1414 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1414[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_471, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1415 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1415[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_472, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1417 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1417[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_473, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_11_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[147] = Resnet100_buffer_layer3_11_bn0_weight;


// (256,)
Resnet100_buffer_layer3_11_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[148] = Resnet100_buffer_layer3_11_bn0_bias;


// (256,)
Resnet100_buffer_layer3_11_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[149] = Resnet100_buffer_layer3_11_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_11_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[150] = Resnet100_buffer_layer3_11_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1418 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1418[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_474, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2059 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2059[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[75] = Resnet100_buffer_2059;


// (256,)
Resnet100_buffer_2060 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[151] = Resnet100_buffer_2060;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2058 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2058[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_475, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1422 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1422[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_476, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2062 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2062[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[76] = Resnet100_buffer_2062;


// (256,)
Resnet100_buffer_2063 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[152] = Resnet100_buffer_2063;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2061 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2061[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_483, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1431 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1431[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_488, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_11_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[77] = &Resnet100_buffer_layer3_11_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_11_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[153] = Resnet100_buffer_layer3_11_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1436 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_489, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1437 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_490, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_11_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[78] = &Resnet100_buffer_layer3_11_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_11_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[154] = Resnet100_buffer_layer3_11_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1438 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_491, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1439 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_496, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1448 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1448[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_497, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1449 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1449[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_498, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1451 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1451[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_499, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_12_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[155] = Resnet100_buffer_layer3_12_bn0_weight;


// (256,)
Resnet100_buffer_layer3_12_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[156] = Resnet100_buffer_layer3_12_bn0_bias;


// (256,)
Resnet100_buffer_layer3_12_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[157] = Resnet100_buffer_layer3_12_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_12_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[158] = Resnet100_buffer_layer3_12_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1452 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1452[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_500, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2065 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2065[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[79] = Resnet100_buffer_2065;


// (256,)
Resnet100_buffer_2066 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[159] = Resnet100_buffer_2066;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2064 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2064[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_501, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1456 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1456[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_502, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2068 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2068[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[80] = Resnet100_buffer_2068;


// (256,)
Resnet100_buffer_2069 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[160] = Resnet100_buffer_2069;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2067 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2067[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_509, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1465 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1465[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_514, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_12_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[81] = &Resnet100_buffer_layer3_12_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_12_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[161] = Resnet100_buffer_layer3_12_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1470 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_515, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1471 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_516, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_12_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[82] = &Resnet100_buffer_layer3_12_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_12_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[162] = Resnet100_buffer_layer3_12_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1472 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_517, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1473 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_522, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1482 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1482[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_523, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1483 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1483[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_524, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1485 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1485[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_525, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_13_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[163] = Resnet100_buffer_layer3_13_bn0_weight;


// (256,)
Resnet100_buffer_layer3_13_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[164] = Resnet100_buffer_layer3_13_bn0_bias;


// (256,)
Resnet100_buffer_layer3_13_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[165] = Resnet100_buffer_layer3_13_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_13_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[166] = Resnet100_buffer_layer3_13_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1486 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1486[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_526, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2071 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2071[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[83] = Resnet100_buffer_2071;


// (256,)
Resnet100_buffer_2072 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[167] = Resnet100_buffer_2072;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2070 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2070[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_527, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1490 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1490[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_528, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2074 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2074[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[84] = Resnet100_buffer_2074;


// (256,)
Resnet100_buffer_2075 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[168] = Resnet100_buffer_2075;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2073 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2073[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_535, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1499 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1499[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_540, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_13_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[85] = &Resnet100_buffer_layer3_13_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_13_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[169] = Resnet100_buffer_layer3_13_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1504 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_541, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1505 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_542, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_13_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[86] = &Resnet100_buffer_layer3_13_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_13_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[170] = Resnet100_buffer_layer3_13_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1506 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_543, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1507 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_548, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1516 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1516[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_549, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1517 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1517[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_550, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1519 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1519[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_551, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_14_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[171] = Resnet100_buffer_layer3_14_bn0_weight;


// (256,)
Resnet100_buffer_layer3_14_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[172] = Resnet100_buffer_layer3_14_bn0_bias;


// (256,)
Resnet100_buffer_layer3_14_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[173] = Resnet100_buffer_layer3_14_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_14_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[174] = Resnet100_buffer_layer3_14_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1520 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1520[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_552, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2077 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2077[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[87] = Resnet100_buffer_2077;


// (256,)
Resnet100_buffer_2078 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[175] = Resnet100_buffer_2078;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2076 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2076[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_553, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1524 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1524[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_554, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2080 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2080[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[88] = Resnet100_buffer_2080;


// (256,)
Resnet100_buffer_2081 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[176] = Resnet100_buffer_2081;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2079 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2079[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_561, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1533 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1533[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_566, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_14_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[89] = &Resnet100_buffer_layer3_14_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_14_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[177] = Resnet100_buffer_layer3_14_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1538 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_567, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1539 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_568, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_14_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[90] = &Resnet100_buffer_layer3_14_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_14_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[178] = Resnet100_buffer_layer3_14_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1540 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_569, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1541 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_574, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1550 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1550[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_575, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1551 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1551[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_576, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1553 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1553[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_577, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_15_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[179] = Resnet100_buffer_layer3_15_bn0_weight;


// (256,)
Resnet100_buffer_layer3_15_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[180] = Resnet100_buffer_layer3_15_bn0_bias;


// (256,)
Resnet100_buffer_layer3_15_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[181] = Resnet100_buffer_layer3_15_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_15_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[182] = Resnet100_buffer_layer3_15_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1554 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1554[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_578, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2083 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2083[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[91] = Resnet100_buffer_2083;


// (256,)
Resnet100_buffer_2084 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[183] = Resnet100_buffer_2084;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2082 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2082[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_579, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1558 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1558[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_580, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2086 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2086[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[92] = Resnet100_buffer_2086;


// (256,)
Resnet100_buffer_2087 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[184] = Resnet100_buffer_2087;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2085 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2085[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_587, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1567 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1567[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_592, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_15_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[93] = &Resnet100_buffer_layer3_15_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_15_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[185] = Resnet100_buffer_layer3_15_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1572 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_593, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1573 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_594, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_15_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[94] = &Resnet100_buffer_layer3_15_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_15_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[186] = Resnet100_buffer_layer3_15_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1574 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_595, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1575 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_600, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1584 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1584[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_601, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1585 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1585[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_602, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1587 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1587[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_603, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_16_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[187] = Resnet100_buffer_layer3_16_bn0_weight;


// (256,)
Resnet100_buffer_layer3_16_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[188] = Resnet100_buffer_layer3_16_bn0_bias;


// (256,)
Resnet100_buffer_layer3_16_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[189] = Resnet100_buffer_layer3_16_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_16_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[190] = Resnet100_buffer_layer3_16_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1588 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1588[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_604, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2089 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2089[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[95] = Resnet100_buffer_2089;


// (256,)
Resnet100_buffer_2090 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[191] = Resnet100_buffer_2090;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2088 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2088[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_605, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1592 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1592[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_606, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2092 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2092[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[96] = Resnet100_buffer_2092;


// (256,)
Resnet100_buffer_2093 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[192] = Resnet100_buffer_2093;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2091 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2091[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_613, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1601 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1601[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_618, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_16_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[97] = &Resnet100_buffer_layer3_16_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_16_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[193] = Resnet100_buffer_layer3_16_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1606 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_619, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1607 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_620, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_16_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[98] = &Resnet100_buffer_layer3_16_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_16_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[194] = Resnet100_buffer_layer3_16_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1608 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_621, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1609 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_626, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1618 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1618[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_627, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1619 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1619[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_628, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1621 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1621[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_629, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_17_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[195] = Resnet100_buffer_layer3_17_bn0_weight;


// (256,)
Resnet100_buffer_layer3_17_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[196] = Resnet100_buffer_layer3_17_bn0_bias;


// (256,)
Resnet100_buffer_layer3_17_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[197] = Resnet100_buffer_layer3_17_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_17_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[198] = Resnet100_buffer_layer3_17_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1622 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1622[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_630, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2095 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2095[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[99] = Resnet100_buffer_2095;


// (256,)
Resnet100_buffer_2096 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[199] = Resnet100_buffer_2096;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2094 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2094[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_631, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1626 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1626[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_632, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2098 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2098[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[100] = Resnet100_buffer_2098;


// (256,)
Resnet100_buffer_2099 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[200] = Resnet100_buffer_2099;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2097 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2097[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_639, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1635 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1635[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_644, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_17_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[101] = &Resnet100_buffer_layer3_17_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_17_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[201] = Resnet100_buffer_layer3_17_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1640 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_645, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1641 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_646, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_17_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[102] = &Resnet100_buffer_layer3_17_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_17_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[202] = Resnet100_buffer_layer3_17_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1642 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_647, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1643 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_652, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1652 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1652[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_653, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1653 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1653[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_654, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1655 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1655[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_655, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_18_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[203] = Resnet100_buffer_layer3_18_bn0_weight;


// (256,)
Resnet100_buffer_layer3_18_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[204] = Resnet100_buffer_layer3_18_bn0_bias;


// (256,)
Resnet100_buffer_layer3_18_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[205] = Resnet100_buffer_layer3_18_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_18_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[206] = Resnet100_buffer_layer3_18_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1656 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1656[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_656, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2101 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2101[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[103] = Resnet100_buffer_2101;


// (256,)
Resnet100_buffer_2102 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[207] = Resnet100_buffer_2102;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2100 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2100[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_657, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1660 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1660[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_658, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2104 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2104[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[104] = Resnet100_buffer_2104;


// (256,)
Resnet100_buffer_2105 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[208] = Resnet100_buffer_2105;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2103 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2103[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_665, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1669 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1669[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_670, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_18_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[105] = &Resnet100_buffer_layer3_18_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_18_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[209] = Resnet100_buffer_layer3_18_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1674 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_671, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1675 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_672, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_18_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[106] = &Resnet100_buffer_layer3_18_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_18_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[210] = Resnet100_buffer_layer3_18_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1676 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_673, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1677 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_678, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1686 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1686[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_679, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1687 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1687[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_680, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1689 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1689[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_681, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_19_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[211] = Resnet100_buffer_layer3_19_bn0_weight;


// (256,)
Resnet100_buffer_layer3_19_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[212] = Resnet100_buffer_layer3_19_bn0_bias;


// (256,)
Resnet100_buffer_layer3_19_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[213] = Resnet100_buffer_layer3_19_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_19_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[214] = Resnet100_buffer_layer3_19_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1690 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1690[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_682, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2107 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2107[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[107] = Resnet100_buffer_2107;


// (256,)
Resnet100_buffer_2108 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[215] = Resnet100_buffer_2108;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2106 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2106[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_683, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1694 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1694[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_684, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2110 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2110[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[108] = Resnet100_buffer_2110;


// (256,)
Resnet100_buffer_2111 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[216] = Resnet100_buffer_2111;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2109 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2109[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_691, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1703 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1703[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_696, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_19_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[109] = &Resnet100_buffer_layer3_19_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_19_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[217] = Resnet100_buffer_layer3_19_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1708 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_697, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1709 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_698, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_19_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[110] = &Resnet100_buffer_layer3_19_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_19_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[218] = Resnet100_buffer_layer3_19_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1710 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_699, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1711 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_704, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1720 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1720[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_705, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1721 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1721[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_706, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1723 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1723[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_707, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_20_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[219] = Resnet100_buffer_layer3_20_bn0_weight;


// (256,)
Resnet100_buffer_layer3_20_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[220] = Resnet100_buffer_layer3_20_bn0_bias;


// (256,)
Resnet100_buffer_layer3_20_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[221] = Resnet100_buffer_layer3_20_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_20_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[222] = Resnet100_buffer_layer3_20_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1724 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1724[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_708, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2113 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2113[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[111] = Resnet100_buffer_2113;


// (256,)
Resnet100_buffer_2114 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[223] = Resnet100_buffer_2114;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2112 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2112[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_709, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1728 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1728[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_710, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2116 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2116[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[112] = Resnet100_buffer_2116;


// (256,)
Resnet100_buffer_2117 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[224] = Resnet100_buffer_2117;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2115 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2115[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_717, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1737 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1737[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_722, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_20_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[113] = &Resnet100_buffer_layer3_20_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_20_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[225] = Resnet100_buffer_layer3_20_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1742 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_723, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1743 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_724, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_20_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[114] = &Resnet100_buffer_layer3_20_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_20_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[226] = Resnet100_buffer_layer3_20_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1744 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_725, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1745 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_730, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1754 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1754[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_731, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1755 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1755[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_732, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1757 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1757[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_733, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_21_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[227] = Resnet100_buffer_layer3_21_bn0_weight;


// (256,)
Resnet100_buffer_layer3_21_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[228] = Resnet100_buffer_layer3_21_bn0_bias;


// (256,)
Resnet100_buffer_layer3_21_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[229] = Resnet100_buffer_layer3_21_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_21_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[230] = Resnet100_buffer_layer3_21_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1758 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1758[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_734, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2119 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2119[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[115] = Resnet100_buffer_2119;


// (256,)
Resnet100_buffer_2120 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[231] = Resnet100_buffer_2120;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2118 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2118[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_735, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1762 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1762[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_736, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2122 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2122[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[116] = Resnet100_buffer_2122;


// (256,)
Resnet100_buffer_2123 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[232] = Resnet100_buffer_2123;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2121 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2121[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_743, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1771 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1771[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_748, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_21_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[117] = &Resnet100_buffer_layer3_21_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_21_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[233] = Resnet100_buffer_layer3_21_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1776 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_749, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1777 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_750, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_21_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[118] = &Resnet100_buffer_layer3_21_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_21_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[234] = Resnet100_buffer_layer3_21_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1778 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_751, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1779 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_756, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1788 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1788[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_757, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1789 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1789[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_758, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1791 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1791[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_759, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer3_22_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[235] = Resnet100_buffer_layer3_22_bn0_weight;


// (256,)
Resnet100_buffer_layer3_22_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[236] = Resnet100_buffer_layer3_22_bn0_bias;


// (256,)
Resnet100_buffer_layer3_22_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[237] = Resnet100_buffer_layer3_22_bn0_running_mean;


// (256,)
Resnet100_buffer_layer3_22_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[238] = Resnet100_buffer_layer3_22_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1792 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1792[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_760, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2125 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2125[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[119] = Resnet100_buffer_2125;


// (256,)
Resnet100_buffer_2126 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[239] = Resnet100_buffer_2126;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2124 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2124[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_761, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1796 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1796[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_762, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2128 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2128[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[120] = Resnet100_buffer_2128;


// (256,)
Resnet100_buffer_2129 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[240] = Resnet100_buffer_2129;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2127 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2127[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_769, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 256, 1, 1)
Resnet100_buffer_1805 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1805[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_774, Operation: Gemm
// Inputs
// (16, 256)
Resnet100_buffer_layer3_22_se_fc_0_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[121] = &Resnet100_buffer_layer3_22_se_fc_0_weight;


// (16,)
Resnet100_buffer_layer3_22_se_fc_0_bias = (fp_t*) malloc(16 * sizeof(fp_t));



Resnet100_biases[241] = Resnet100_buffer_layer3_22_se_fc_0_bias;


// Outputs
// (1, 16)
Resnet100_buffer_1810 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: PRelu_775, Operation: PRelu
// Inputs
// Outputs
// (1, 16)
Resnet100_buffer_1811 = (fp_t*) malloc(16 * sizeof(fp_t));



// Layer: Gemm_776, Operation: Gemm
// Inputs
// (256, 16)
Resnet100_buffer_layer3_22_se_fc_2_weight = (fp_t*) malloc(4096 * sizeof(fp_t));



Resnet100_kernels[122] = &Resnet100_buffer_layer3_22_se_fc_2_weight;


// (256,)
Resnet100_buffer_layer3_22_se_fc_2_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[242] = Resnet100_buffer_layer3_22_se_fc_2_bias;


// Outputs
// (1, 256)
Resnet100_buffer_1812 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Sigmoid_777, Operation: Sigmoid
// Inputs
// Outputs
// (1, 256)
Resnet100_buffer_1813 = (fp_t*) malloc(256 * sizeof(fp_t));



// Layer: Mul_782, Operation: Mul
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1822 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1822[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Add_783, Operation: Add
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1823 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1823[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_784, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1825 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1825[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: BatchNormalization_785, Operation: BatchNormalization
// Inputs
// (256,)
Resnet100_buffer_layer4_0_bn0_weight = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[243] = Resnet100_buffer_layer4_0_bn0_weight;


// (256,)
Resnet100_buffer_layer4_0_bn0_bias = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[244] = Resnet100_buffer_layer4_0_bn0_bias;


// (256,)
Resnet100_buffer_layer4_0_bn0_running_mean = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[245] = Resnet100_buffer_layer4_0_bn0_running_mean;


// (256,)
Resnet100_buffer_layer4_0_bn0_running_var = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[246] = Resnet100_buffer_layer4_0_bn0_running_var;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1826 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1826[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_786, Operation: Conv
// Inputs
// (256, 256, 3, 3)
Resnet100_buffer_2131 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    Resnet100_buffer_2131[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[123] = Resnet100_buffer_2131;


// (256,)
Resnet100_buffer_2132 = (fp_t*) malloc(256 * sizeof(fp_t));



Resnet100_biases[247] = Resnet100_buffer_2132;


// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_2130 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_2130[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: PRelu_787, Operation: PRelu
// Inputs
// Outputs
// (1, 256, 14, 14)
Resnet100_buffer_1830 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    Resnet100_buffer_1830[output] = (fp_t*) malloc(14*14 * sizeof(fp_t));
}



// Layer: Conv_788, Operation: Conv
// Inputs
// (512, 256, 3, 3)
Resnet100_buffer_2134 = (fp_t**) malloc(131072 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 131072; kernel++){
    Resnet100_buffer_2134[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[124] = Resnet100_buffer_2134;


// (512,)
Resnet100_buffer_2135 = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[248] = Resnet100_buffer_2135;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_2133 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_2133[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_795, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
Resnet100_buffer_1839 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1839[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_800, Operation: Gemm
// Inputs
// (32, 512)
Resnet100_buffer_layer4_0_se_fc_0_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



Resnet100_kernels[125] = &Resnet100_buffer_layer4_0_se_fc_0_weight;


// (32,)
Resnet100_buffer_layer4_0_se_fc_0_bias = (fp_t*) malloc(32 * sizeof(fp_t));



Resnet100_biases[249] = Resnet100_buffer_layer4_0_se_fc_0_bias;


// Outputs
// (1, 32)
Resnet100_buffer_1844 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: PRelu_801, Operation: PRelu
// Inputs
// Outputs
// (1, 32)
Resnet100_buffer_1845 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: Gemm_802, Operation: Gemm
// Inputs
// (512, 32)
Resnet100_buffer_layer4_0_se_fc_2_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



Resnet100_kernels[126] = &Resnet100_buffer_layer4_0_se_fc_2_weight;


// (512,)
Resnet100_buffer_layer4_0_se_fc_2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[250] = Resnet100_buffer_layer4_0_se_fc_2_bias;


// Outputs
// (1, 512)
Resnet100_buffer_1846 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Sigmoid_803, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
Resnet100_buffer_1847 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Mul_808, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1856 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1856[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_809, Operation: Conv
// Inputs
// (512, 256, 1, 1)
Resnet100_buffer_2137 = (fp_t**) malloc(131072 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 131072; kernel++){
    Resnet100_buffer_2137[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



Resnet100_kernels[127] = Resnet100_buffer_2137;


// (512,)
Resnet100_buffer_2138 = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[251] = Resnet100_buffer_2138;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_2136 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_2136[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_810, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1859 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1859[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_811, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1861 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1861[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_812, Operation: BatchNormalization
// Inputs
// (512,)
Resnet100_buffer_layer4_1_bn0_weight = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[252] = Resnet100_buffer_layer4_1_bn0_weight;


// (512,)
Resnet100_buffer_layer4_1_bn0_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[253] = Resnet100_buffer_layer4_1_bn0_bias;


// (512,)
Resnet100_buffer_layer4_1_bn0_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[254] = Resnet100_buffer_layer4_1_bn0_running_mean;


// (512,)
Resnet100_buffer_layer4_1_bn0_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[255] = Resnet100_buffer_layer4_1_bn0_running_var;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1862 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1862[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_813, Operation: Conv
// Inputs
// (512, 512, 3, 3)
Resnet100_buffer_2140 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    Resnet100_buffer_2140[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[128] = Resnet100_buffer_2140;


// (512,)
Resnet100_buffer_2141 = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[256] = Resnet100_buffer_2141;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_2139 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_2139[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_814, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1866 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1866[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_815, Operation: Conv
// Inputs
// (512, 512, 3, 3)
Resnet100_buffer_2143 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    Resnet100_buffer_2143[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[129] = Resnet100_buffer_2143;


// (512,)
Resnet100_buffer_2144 = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[257] = Resnet100_buffer_2144;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_2142 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_2142[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_822, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
Resnet100_buffer_1875 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1875[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_827, Operation: Gemm
// Inputs
// (32, 512)
Resnet100_buffer_layer4_1_se_fc_0_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



Resnet100_kernels[130] = &Resnet100_buffer_layer4_1_se_fc_0_weight;


// (32,)
Resnet100_buffer_layer4_1_se_fc_0_bias = (fp_t*) malloc(32 * sizeof(fp_t));



Resnet100_biases[258] = Resnet100_buffer_layer4_1_se_fc_0_bias;


// Outputs
// (1, 32)
Resnet100_buffer_1880 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: PRelu_828, Operation: PRelu
// Inputs
// Outputs
// (1, 32)
Resnet100_buffer_1881 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: Gemm_829, Operation: Gemm
// Inputs
// (512, 32)
Resnet100_buffer_layer4_1_se_fc_2_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



Resnet100_kernels[131] = &Resnet100_buffer_layer4_1_se_fc_2_weight;


// (512,)
Resnet100_buffer_layer4_1_se_fc_2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[259] = Resnet100_buffer_layer4_1_se_fc_2_bias;


// Outputs
// (1, 512)
Resnet100_buffer_1882 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Sigmoid_830, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
Resnet100_buffer_1883 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Mul_835, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1892 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1892[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_836, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1893 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1893[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_837, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1895 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1895[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_838, Operation: BatchNormalization
// Inputs
// (512,)
Resnet100_buffer_layer4_2_bn0_weight = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[260] = Resnet100_buffer_layer4_2_bn0_weight;


// (512,)
Resnet100_buffer_layer4_2_bn0_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[261] = Resnet100_buffer_layer4_2_bn0_bias;


// (512,)
Resnet100_buffer_layer4_2_bn0_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[262] = Resnet100_buffer_layer4_2_bn0_running_mean;


// (512,)
Resnet100_buffer_layer4_2_bn0_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[263] = Resnet100_buffer_layer4_2_bn0_running_var;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1896 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1896[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_839, Operation: Conv
// Inputs
// (512, 512, 3, 3)
Resnet100_buffer_2146 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    Resnet100_buffer_2146[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[132] = Resnet100_buffer_2146;


// (512,)
Resnet100_buffer_2147 = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[264] = Resnet100_buffer_2147;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_2145 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_2145[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_840, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1900 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1900[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Conv_841, Operation: Conv
// Inputs
// (512, 512, 3, 3)
Resnet100_buffer_2149 = (fp_t**) malloc(262144 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 262144; kernel++){
    Resnet100_buffer_2149[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



Resnet100_kernels[133] = Resnet100_buffer_2149;


// (512,)
Resnet100_buffer_2150 = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[265] = Resnet100_buffer_2150;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_2148 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_2148[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: GlobalAveragePool_848, Operation: GlobalAveragePool
// Inputs
// Outputs
// (1, 512, 1, 1)
Resnet100_buffer_1909 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1909[output] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



// Layer: Gemm_853, Operation: Gemm
// Inputs
// (32, 512)
Resnet100_buffer_layer4_2_se_fc_0_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



Resnet100_kernels[134] = &Resnet100_buffer_layer4_2_se_fc_0_weight;


// (32,)
Resnet100_buffer_layer4_2_se_fc_0_bias = (fp_t*) malloc(32 * sizeof(fp_t));



Resnet100_biases[266] = Resnet100_buffer_layer4_2_se_fc_0_bias;


// Outputs
// (1, 32)
Resnet100_buffer_1914 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: PRelu_854, Operation: PRelu
// Inputs
// Outputs
// (1, 32)
Resnet100_buffer_1915 = (fp_t*) malloc(32 * sizeof(fp_t));



// Layer: Gemm_855, Operation: Gemm
// Inputs
// (512, 32)
Resnet100_buffer_layer4_2_se_fc_2_weight = (fp_t*) malloc(16384 * sizeof(fp_t));



Resnet100_kernels[135] = &Resnet100_buffer_layer4_2_se_fc_2_weight;


// (512,)
Resnet100_buffer_layer4_2_se_fc_2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[267] = Resnet100_buffer_layer4_2_se_fc_2_bias;


// Outputs
// (1, 512)
Resnet100_buffer_1916 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Sigmoid_856, Operation: Sigmoid
// Inputs
// Outputs
// (1, 512)
Resnet100_buffer_1917 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: Mul_861, Operation: Mul
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1926 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1926[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Add_862, Operation: Add
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1927 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1927[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: PRelu_863, Operation: PRelu
// Inputs
// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1929 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1929[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: BatchNormalization_864, Operation: BatchNormalization
// Inputs
// (512,)
Resnet100_buffer_bn2_weight = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[268] = Resnet100_buffer_bn2_weight;


// (512,)
Resnet100_buffer_bn2_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[269] = Resnet100_buffer_bn2_bias;


// (512,)
Resnet100_buffer_bn2_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[270] = Resnet100_buffer_bn2_running_mean;


// (512,)
Resnet100_buffer_bn2_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[271] = Resnet100_buffer_bn2_running_var;


// Outputs
// (1, 512, 7, 7)
Resnet100_buffer_1930 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t output = 0; output < 512; output++){
    Resnet100_buffer_1930[output] = (fp_t*) malloc(7*7 * sizeof(fp_t));
}



// Layer: Gemm_871, Operation: Gemm
// Inputs
// (512, 25088)
Resnet100_buffer_fc_weight = (fp_t*) malloc(12845056 * sizeof(fp_t));



Resnet100_kernels[136] = &Resnet100_buffer_fc_weight;


// (512,)
Resnet100_buffer_fc_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[272] = Resnet100_buffer_fc_bias;


// Outputs
// (1, 512)
Resnet100_buffer_1939 = (fp_t*) malloc(512 * sizeof(fp_t));



// Layer: BatchNormalization_872, Operation: BatchNormalization1d
// Inputs
// (512,)
Resnet100_buffer_bn3_weight = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[273] = Resnet100_buffer_bn3_weight;


// (512,)
Resnet100_buffer_bn3_bias = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[274] = Resnet100_buffer_bn3_bias;


// (512,)
Resnet100_buffer_bn3_running_mean = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[275] = Resnet100_buffer_bn3_running_mean;


// (512,)
Resnet100_buffer_bn3_running_var = (fp_t*) malloc(512 * sizeof(fp_t));



Resnet100_biases[276] = Resnet100_buffer_bn3_running_var;


// Outputs
// (1, 512)
    Resnet100_output_output = (fp_t*) malloc(512 * sizeof(fp_t));



}
