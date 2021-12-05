#include <iostream>
#include <vector>

void vectors(){
  std::vector<int> myVec; 
  myVec.push_back(4);
  myVec.push_back(10);
  
  for(auto i=myVec.begin();i<myVec.end();i++){
    std::cout << *i << '\n';
  }
}