#include<iostream>
int main(){
  int number ;
  std::cout << "Enter a number" << '\n';
  std::cin >> number ;
  if( number % 2 == 0){
    std::cout << "The number is even" << '\n';
  }
  else{
    std::cout << "The number is odd" << '\n';
  }
  return 0;
}