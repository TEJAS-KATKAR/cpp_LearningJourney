//........................use this for full name containing white spaces.
#include<iostream>
int main(){
  std::string name;
  std::string age;
//.......................we have to add getline for white spaces. but it also have problems,
//.......................when we add getline below any cin than thats problem. so add (std::ws,),
//.......................that removes any any spaces and whitespaces before any user input;

  std::cout << "What is your full name?" << '\n';
  std::getline(std::cin, name);
  std::cout << "Hellow " << name << '\n';

  std::cout << "so what's yout age?"<< age << '\n';
  std::cin >> age;
  std::cout << "ohh!, you are "<< age << " years old..."<< '\n';
  return 0 ;
}
