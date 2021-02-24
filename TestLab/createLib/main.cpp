#include <iostream>
#include "include/area.h"
#include "include/circum.h"
int main() {

    double x=2.3, y=5.0004;

    area are;
    circum cir;
    std::cout<<"area: " << are.rectabgle(x,y) << std::endl;
    std::cout<<"circle: " << cir.circle(x) << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
