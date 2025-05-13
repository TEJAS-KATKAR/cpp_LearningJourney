//*****[Tips:-inshort oops are struct with more functions and constructors made oops easy and short.]***
/*Topic 1 :- classes and objects._________________________________

Objet = objects are entities in the real world. (ex. Phone, Book, Dog)
class = class is like a "blue-prints" of these entities.
*/
/*Access Modifiers:-
private:- data & methods accessible inside class.
public:- data & methods accessible to everyone.
protected:- data & methods accessible inside class & to its derived class.
*/
/*
#include<iostream>
  class Human{ 
    public:                              //[properties/ attributes]
    std::string name;
    std::string occupation;
    int age;

    void eat(){                          //[Methods/member functions]
      std::cout <<"This person is eating.\n";
    }
    void drink(){
      std::cout <<"This person is drinking.\n";
    }
    void sleep(){
      std::cout <<"This person is sleeping.\n";
    }
  };
int main(){
  Human human1,human2;
  human1.name = "Rick";
  human1.occupation = "scientist";
  human1.age = 60;

  std::cout << human1.name << '\n';
  std::cout << human1.occupation << '\n';
  std::cout << human1.age << '\n';

  human1.eat();
  human1.drink();
  human1.sleep();

  human2.name = "andy";
  human2.occupation = "mechanic";
  human2.age = 32;

  std::cout << '\n' << human2.name << '\n';
  std::cout << human2.occupation << '\n';
  std::cout << human2.age << '\n';

  human2.eat();
  human2.drink();
  human2.sleep();
  return 0;
}
*/
//------------------CONSTRUCTOR----------------------------------------
/*constructor = special method that is automatically called when an onject is instantiated
                  useful for assigning values to attributes as arguments.

  constructor = special method invoked automatiacally at time of object creation.used for initialisation.
     (***we can also invoke multiple constructors of a same name.compiler only apply what user input is).

  *there are three types of constructor:-
  1)non-parameterised = human()  <-- this is non parameterised constructor.doesn't contain anything in bracket.
                                      eg. upper example. we don't write constructor in upper eg but it maked by compiler by default.

  2)parameterised = human(std::string n,std::string occ, int a) <--this is parameterised constructor. it contains something in the bracket.
                                      eg. below example. in this eg we write constructor.containing parameter. 
  3)copy constructor = special constructor(default)used to copy properties of one object into another.                                                                     
*/
/*
#include<iostream>
  class Human{
    public:   
    std::string name;
    std::string occupation;
    int age;
    std::string education;
  Human(){                                         //non-peremeterised
    education ="this person is educated";
  }
  Human(std::string n,std::string occ,int a){      //peremeterised
      name = n;
      occupation = occ;
      age = a;
    };
//  Human(std::string name,std::string occupation,int age){      //peremeterised. we can also write like this if we want to not change names.
//      this->name = name;                                       //this-> is the automatic genterated pointer. 
//      this->occupation = occupation;
//      this->age = age;
//    };

    void eat(){
      std::cout <<"This person is eating.\n";
    }
    void drink(){
      std::cout <<"This person is drinking.\n";
    }
    void sleep(){
      std::cout <<"This person is sleeping.\n";
    }
    };
int main(){
  Human human1{"rick","scientist",60};
  std::cout << human1.name << '\n'<<human1.occupation << '\n' <<human1.age << '\n';
  
  human1.eat();human1.drink();human1.sleep();

  Human human2{"andy","mechanic",32};
  std::cout <<'\n'<< human2.name << '\n'<<human2.occupation << '\n' <<human2.age << '\n';

  human2.eat();human2.drink();human2.sleep();
  return 0;
}
*/
//----------------------------------Destructor-----------------------------------------
/*Desturctor = A destructor is a special member function in a class that is automatically called 
               when an object of the class is destroyed.
               Its main purpose is to release resources (like memory, file handles, or network connections) 
               that the object may have acquired during its lifetime.
*/
/*
#include<iostream>
  class Human{
    public:   
    std::string name;
    std::string occupation;
    int age;
    std::string education;

  Human(std::string name,std::string occupation,int age){      //constructor
      this-> name = name;
      this->occupation = occupation;
      this->age = age;
    };
  ~Human(){
    std::cout << "all data has  been deleted\n";
  }
  void getinfo(){
    std::cout << name << '\n'<<occupation << '\n' <<age << '\n' << '\n' ;
  }
  };
int main(){
  Human human1{"rick","scientist",60};
  human1.getinfo();
  
  Human human2{"andy","mechanic",32};
  human2.getinfo();
  return 0;
}
*/
//--------------------Getter & Setter ----------------------------
/*Getter :-A getter is a method that retrieves or "gets" the value of a private attribute.
            It provides a controlled way to access the value without exposing 
            the actual implementation or directly accessing the private attribute.
  Setter :-A setter is a method that modifies or "sets" the value of a private attribute.
            It allows you to apply validation or additional logic before updating the attribute.
*/
/*
#include<iostream>
class teacher {
  private:
    double salary;

  public:
    std::string  name;
    std::string dept;
    std::string subject;
    void changedept(std::string newdept){
      dept = newdept;
    }
    //setter
    void setsalary(double s){
      salary = s;
    }
    //getter
    double getsalary(){
      return salary;
    }
};
int main(){
  teacher t1;
  t1.name = "Rick";
  t1.subject = "C++";
  t1.dept + "information technology";
  t1.setsalary(25000);

  std::cout << t1.name << '\n';
  std::cout << t1.getsalary() << '\n';
  return 0;
}
*/
//___________________________________________________________________________
//There are four major pillers of oops...
/*1)Encapsulation
  2)Abstraction
  3)Inheretance
  4)Polymorphism

  1>Encapsulation:-Encapsulation is wrapping up of data & member functions in a single unit called class.
                    [data/properties + member function] = class
                    eg. solved above

*/