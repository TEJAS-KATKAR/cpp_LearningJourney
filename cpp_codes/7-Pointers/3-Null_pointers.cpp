#include<iostream>
int main(){
  //-------------------------------if address was not assigned.
  int *pointer = nullptr;
  
  if(pointer == nullptr){
    std::cout << "address was not assigned!\n";
  }
  else{
    std::cout << "address was assigned!\n";
  }
  return 0;
}