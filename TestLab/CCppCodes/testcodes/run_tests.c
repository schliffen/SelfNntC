#include <stdio.h>
#include <assert.h>

#include "layers/test_pooling.h"
#include "layers/test_activation_function.h"
#include "layers/test_fully_connected.h"
#include "layers/test_convolution.h"
#include "layers/test_batch_normalization.h"
#include "layers/test_concatenate.h"

void printSucessFailure(const char* operation, int32_t failed, int32_t num_tests) {
  printf("%s: %d/%d tests for %s passed\n",
         failed == 0 ? "Success":"Failure", num_tests-failed, num_tests, operation);
}

// assumes that all testing functions return a nonnegative value when they fail
int32_t main() {

    #define separator "------------------------------------------------------------\n"
    int32_t return_value = 0;

    printf(separator);
    printf("Testing: pooling operations...\n");
    int32_t pooling_failed = 0;
    int32_t num_pooling_tests = 9;
    pooling_failed += test_max_pooling1d();
    pooling_failed += test_max_pooling1d_padding();
    pooling_failed += test_max_pooling2d();
    pooling_failed += test_max_pooling2d_padding();

    pooling_failed += test_avg_pooling1d();
    pooling_failed += test_avg_pooling1d_padding();
    pooling_failed += test_avg_pooling2d();
    pooling_failed += test_avg_pooling2d_padding();

    pooling_failed += test_global_average_pooling2d();
    pooling_failed += test_global_max_pooling2d();
    printSucessFailure("pooling operations", pooling_failed,num_pooling_tests);
    return_value += pooling_failed;

    printf(separator);
    printf("Testing: activation functions...\n");
    int32_t activation_functions_failed = 0;
    int32_t num_activation_functions_tests = 6;
    activation_functions_failed += test_relu_naive();
    activation_functions_failed += test_leaky_relu_naive();
    activation_functions_failed += test_parametrized_relu_naive();
    activation_functions_failed += test_sigmoid_naive();
    activation_functions_failed += test_softmax_naive();
    activation_functions_failed += test_local_response_normalization_naive();
    printSucessFailure("activation functions", activation_functions_failed, num_activation_functions_tests);
    return_value += activation_functions_failed;

    printf(separator);
    printf("Testing: fully connected layer...\n");
    int32_t fully_connected_failed = 0;
    int32_t num_fully_connected_tests = 1;
    fully_connected_failed = test_fully_connected();
    printSucessFailure("fully connected layer", fully_connected_failed,num_fully_connected_tests);
    return_value += fully_connected_failed;

    printf(separator);
    printf("Testing: convolutions...\n");
    int32_t convolution_failed = 0;
    int32_t num_convolution_tests = 10;
    convolution_failed += test_convolution1d_naive();
    convolution_failed += test_convolution2d_naive_1();
    convolution_failed += test_convolution2d_naive_2();
    convolution_failed += test_convolution2d_naive_3();
    convolution_failed += test_convolution2d_naive_4();
    convolution_failed += test_convolution2d_naive_5();
    convolution_failed += test_add_channel2d_naive();
    convolution_failed += test_convolution2d_naive_6();
    convolution_failed += test_convolution2d_naive_7();
    convolution_failed += test_convolution2d_naive_8();
    printSucessFailure("convolutions", convolution_failed, num_convolution_tests);
    return_value += convolution_failed;

    printf(separator);
    printf("Testing: batch normalization layer...\n");
    int32_t batch_normalization_failed = 0;
    int32_t num_batch_normalization_tests = 2;
    batch_normalization_failed += test_batch_normalization_naive_1();
    batch_normalization_failed += test_batch_normalization_naive_2();
    printSucessFailure("batch normalization layer", batch_normalization_failed, num_batch_normalization_tests);
    return_value += batch_normalization_failed;

    printf(separator);
    printf("Testing: concatenations...\n");
    int32_t concatenation_failed = 0;
    int32_t num_concatenation_tests = 5;
    concatenation_failed += test_concatenate_2D_1();
    concatenation_failed += test_concatenate_2D_2();
    concatenation_failed += test_concatenate_naive_dim_0();
    concatenation_failed += test_concatenate_naive_dim_1();
    concatenation_failed += test_concatenate_naive_dim_2();
    
    printSucessFailure("concatenations", concatenation_failed, num_concatenation_tests);
    return_value += concatenation_failed;

    return  return_value;

    #undef separator
}
