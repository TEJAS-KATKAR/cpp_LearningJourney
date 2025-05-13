#include<iostream>
int main(){
  char vowels[5]; 

//for loop: 

  for(int i = 0; i < 5; i++ ){ //input
    std::cin >> vowels[i];
  }

  for(int i = 0; i < 5;i++){  // output
    std::cout << vowels[i] << " ";
  }

//foreach loop: (less syntax but less flexible )  
//        use when only have to display array not to modify it.

  for(char &a : vowels ){
    std::cin >> a ;
  }
  for(int i=0; i<5; i++){
    std::cout << vowels[i]<<" ";
  }

  return 0;
}