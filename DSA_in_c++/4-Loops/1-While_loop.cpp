/*********trick for using loops-
   use while loop when you know the perfect condition for using it;   while( ){}
   use do while loop when you have to work loop atleast one times;    do{} while()
   use for loop if you know the exact times the loop have to work;    for(i ==1; i<=5; i++){}
*/
//-------------------------LOOPS(While loop)------------------------------
#include<iostream>
int main(){
  std::string name;

  while(name.empty()){
    std::cout <<"Enter your name: ";
    std::getline(std::cin, name);
  }
  std::cout << "Hello " << name ;
  return 0;
}