//--------------condition ? expression1 : expression2;--------------------

#include<iostream>
int main(){
  int number ;
  std::cout << "Enter a number" << '\n';
  std::cin >> number ;
  number % 2 == 0 ? std::cout << "The number is even" << '\n' : std::cout << "The number is odd" << '\n';
  return 0;
}