#include <iostream>

void whatever(){
   const char* args[3] = {"a","b","c32"};
  size_t count = sizeof args / sizeof *args;

    std::cout <<count << "\n" ;
    std::cout << args  <<" ==== " << sizeof args << "\n";
    std::cout << *args[2] <<" ==== "  << sizeof *args[2] << "\n";
    std::cout << args[2] <<" ==== "  << sizeof args[2] << "\n";
}

void doSomething(const char* args[],size_t count){
  for(int i=0;i<count;i++){
    std::cout << *args[i] <<"\n";
    std::cout << args[i] <<"\n";
  }
}

int main() {
const char* args[3] = {"a","b","c32"};
  size_t count = sizeof args / sizeof *args;

  whatever();
  doSomething(args,count);
  
    return 0;
}