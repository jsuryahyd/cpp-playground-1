#include <iostream>

#include "vectors.h"
#include "map-ds/maps.h"

void dynamicVariable(){
    auto whatever = 1.2;
  whatever = 1;//valid
  // whatever = "A";//wrong
  std::cout << whatever ; 
}

int main() {
    //  dynamicVariable();
    // vectors();
    maps();
    return 0;
}



