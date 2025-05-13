//size of array: each element in an array contain :-
//***int = 4bytes,char = 1byte, double = 8bytes.***
//therefore for getting the length of the array we have to divide
//sizeof array /by first element = length of the array.
#include<iostream>
int main(){
  char grades[] = {'A','B','C','D','E','F'};
  int numbers[] = {1,2,3,4,5,6,7,8};


  std::cout << sizeof(grades) << "bytes\n"; //output = 6 bytes
  std::cout << sizeof(grades)/sizeof(grades[0]) <<'\n';//....IMP for counting characters in bracket.

  std::cout << sizeof(numbers) << "bytes\n"; //output = 32 bytes
  std::cout << sizeof(numbers)/sizeof(numbers[0]);
  return 0;
}
