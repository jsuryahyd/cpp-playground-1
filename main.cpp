#include <iostream>
#include "sum.h"
using namespace strMethods;

int main() {
    std::cout << "Hello, world!\n" ;
    std::cout << Arithmetic::sum(3,289) << std::endl;
    std::cout << sum(strMethods::sum("Bye","World"),"\n");
    return 0;
}