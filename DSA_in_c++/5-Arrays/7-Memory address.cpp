//--------------------------Memory address--------------------------
//memory address = a location in memnor where data is stored 
// a memory address can accessed with & (address-of operator)

#include<iostream>
int main(){
  std::string name ="Tejas";
  int age = 18;
  bool student = true;

  std::cout << &name <<'\n';
  std::cout << &age <<'\n';
  std::cout << &student <<'\n';

  return 0;
}