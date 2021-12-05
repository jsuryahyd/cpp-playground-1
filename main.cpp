#include <iostream>

int dangerousOperation(int &a){
  // std::cout << a << "<--->" << &a << "\n";
  //some random logic
  if(a > 30){
    a = a - 5;
  } else if(a > 20){
    a = a - 3;
  }else {
    a = a - 2;
  }
  return a;
}

int fakeAge(int a){
  //some random logic
  if(a > 30){
    a = a - 5;
  } else if(a > 20){
    a = a - 3;
  }else {
    a = a - 2;
  }
  return a;
}
int main() {
  int age = 16;
  int* ageAddr = &age;
  // int ageAddr = &age; //invalid
  std::cout << "value is " << age << " it is stored at " << ageAddr << "\n here, " << &age << " is the address in your RAM" << "\n";

  std::cout << "real age is " << age << "\n";
  std::cout << "fake age is " << fakeAge(age)<< "\n";
  std::cout << "but remember, by real age is still, " << age<< "\n"; 
std::cout << "=======================\n";

std::cout << "real age is " << age << "\n";
  std::cout << "fake age is " << dangerousOperation(age)<< "\n";
  std::cout << "but remember, by real age is still, " << age<< " (wait, what?)\n"; 

  return 0;
}



