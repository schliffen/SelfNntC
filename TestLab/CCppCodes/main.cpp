#include <stdio.h>

extern "C" {
    #include "testinclude/BN1dtest.h"
    #include "testinclude/normtest.h"
    #include "testinclude/divtest.h"
}

int main() {

    printf("Test initialized ... !\n");

//    float normerror = test_norm_naive_1();

    int32_t bn1derror = test_batch_normalization_naive_1();

//    int32_t diverror = test_div_by_scalar();


    printf("BN 1d div test result: %d \n ", bn1derror);


    printf("Finished ... !\n");



    return 0;
}
