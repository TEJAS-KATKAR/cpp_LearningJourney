//--------------------------POINTERS------------------------------------------------------
//pointers = variable that stores a memory addrress of another variable.
//           sometimes it's easier to work with an address

// & address of oprator
// * dereference opperator

#include<iostream>

int main(){
  std::string name = "Tejas";
  int age = 18;

  std::string *pname = &name;
  int *page = &age;

  std::cout << *pname <<'\n';
  std::cout << *page <<'\n';
  return 0;
}