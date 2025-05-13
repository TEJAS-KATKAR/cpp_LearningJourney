
#include<iostream>
int main(){
  std::string students[] = {"tejas","om","parkash","aditya"};
  int grades[] = {44, 55, 32, 41}; 

//print each one:
  std::cout << students[0] << '\n';
  std::cout << students[1] << '\n';
  std::cout << students[2] << '\n';
  std::cout << students[3] << '\n';

//for loop: 
  for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++ ){
    std::cout << students[i] <<'\n';
  }

//foreach loop: (less syntax but less flexible )  
//        use when only have to display array not to modify it.

  for(std::string a : students){
    std::cout << a << '\n';
  }
  for(int grade :grades ){
    std::cout << grade << '\n';
  }

//while loop:
int i=0, size = sizeof(students)/sizeof(students[0]);
while(i < size){
  std::cout << students[i]<< '\n';
  i++;
}
  return 0;
}
