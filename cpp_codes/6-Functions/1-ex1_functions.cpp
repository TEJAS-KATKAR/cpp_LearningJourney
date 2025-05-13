#include<iostream>

  void happybirthday(std::string name, int age){
  std::cout << "Happy Birthday to "<< name << '\n';
  std::cout << "Happy Birthday to "<< name << '\n';
  std::cout << "Happy Birthday dear "<< name << '\n';
  std::cout << "Happy Birthday to "<< name << '\n';
}

  int main(){
    std::string name = "Tejas";
    int age =18;

    happybirthday(name ,age);
  
    return 0;
}