#include <iostream>
#include <vector>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
  //typedef = reserved keyword ussed to create an additional name
  //          (alias) for another data type.
  //          New identifier for an existing type
  //          Helps with readability and reduces typos
  //          use when there is a clear benefit
  //          Replaced with 'using'.

  text_t firstname = "Tejas";
  number_t age = 21;

  std::cout << firstname << '\n';
  std::cout << age << '\n';

  return 0;
}