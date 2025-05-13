#include<iostream>
int main(){
  std::cout << "hello world"<< '\n';
  std::cout << "let's learn some basics"<< '\n';
//------------------------------------------------------------------
  //integer (whole number)
  int age = 21;
  int year = 2023;
  int days = 7;

  //double (number including decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temprature = 35.1;

  //single character 
  char grade = 'A';
  char initial = 'C';
  char currency = '$';

  //boolean (true and false)
  bool student =false;
  bool power = true;
  bool farsale =true;

  //string (object that reperesents a sequence of text)
  std::string name = "Tejas";
  std::string day = "friday";
  std::string food = "pizza";
  
  std::cout << "My name is "<< name << '\n';
  std::cout << "I am "<< age << "years old\n";
  //--------------------------------------------------------------
  //constant---
  const double pi = 3.14159;
  const double speed_of_light = 299792458;
  const double width = 1920;
  const double height = 1080;
  return 0;
}