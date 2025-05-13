#include<iostream>
//................................we can't use this for full name because it contains white space.
int main(){
  std::string name;
  std::string age;

  std::cout << "What is your name?" << '\n';
  std::cin >> name;
  std::cout << "Hellow " << name << '\n';
  std::cout << "so what's yout age?"<< age << '\n';
  std::cin >> age;
  std::cout << "ohh!, you are "<< age << " years old..."<< '\n';
  return 0;
}