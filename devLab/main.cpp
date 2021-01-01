#include <iostream>
//

extern "C" {
#include "include/tutils.h"
#include "include/test_activation_function.h"
};

int main() {
    std::cout << "Begin testing ....!" << std::endl;


    int32_t error[2];
    test_relu_naive( error);
    //error++;
    std::cout<< "Relu comp Error: " << error[0]  << std::endl;
    //error++;
    std::cout<< " my array: "<< error[1] << std::endl;

    printtest1();


    return 0;
}
