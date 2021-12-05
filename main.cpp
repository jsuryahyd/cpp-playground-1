#include <iostream>
#include "sum.h"


int main() {
    std::cout << "Hello, world!\n" ;
    std::cout << Arithmetic::sum(3,289) << std::endl;
    std::cout << strMethods::sum(strMethods::sum("Bye","World"),"\n");
    return 0;
}