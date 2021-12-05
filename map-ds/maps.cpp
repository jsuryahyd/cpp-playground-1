#include <iostream>
#include <map>
#include <string>

struct MyStruct{
  std::string name;
  int age;
};


void maps(){
  std::map<std::string,std::string> myMap;
  myMap["designation"] = "LE";
  std::cout << myMap["designation"]<<"\n";

  MyStruct myData =  MyStruct{"Surya",30};
  std::cout << "My name is " << myData.name << " and my age is " << myData.age << std::endl;


  MyStruct yourData = MyStruct{};//doesnot create a memory addrsess yet(?)

}


