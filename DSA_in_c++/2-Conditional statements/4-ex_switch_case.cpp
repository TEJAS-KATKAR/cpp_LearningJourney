#include<iostream>
#include<cctype>
int main(){
  char grade;
  std::cout << "what is your grades"<<'\n';
  std::cin >> grade;
  grade = toupper(grade);
  switch(grade){
  case 'A':
    std::cout << "You did great";
    break;
  case 'B':
    std::cout << "You did good";
    break;
  case 'C':
    std::cout << "You did ok";
    break;
  case 'D':
    std::cout << "You did worst";
    break;
  case 'F':
    std::cout << "You are failed";
    break;
    default:
    std::cout << "Please only enter letters from (A-F)";
  }
  return 0;
}