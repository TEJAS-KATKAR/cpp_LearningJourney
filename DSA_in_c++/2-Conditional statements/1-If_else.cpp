#include<iostream>
int main(){
  int age;
  std::cout << "what is your age?" << '\n';
  std::cin >> age;
  if(age >= 18){
    std::cout << "you are good to go";
  }
  else if( age < 0 ){
    std:: cout << "you are not ever born yet('^^)";
  }
  else{
    std:: cout << "You are not old enough to enter";
  }
  return 0;
}