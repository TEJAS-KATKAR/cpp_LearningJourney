#include<iostream>
int main(){
  int array[10];
  int size= sizeof(array)/sizeof(array[0]);
  int sum=0,num;

  for(int i=0;i<size; i++){
    std::cin >> num;

  if(num == -1){
    break;
  }
  else{
    array[i] =num; 
    sum +=num;
  }
  }
  std::cout << sum << '\n';
  return 0;
}