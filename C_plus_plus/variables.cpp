#include <iostream>

int main(){
    int x; //declaration
    x = 5; //Assignment

    int y = 6;
  int sum = x+y;

  double price =  10.999;

  char grade = 'A'; // can only store a single character 

  //boolean
  bool student = true;
  bool poor = false;


  // string
    std::string name = "Owen";

    

    std::cout << y <<"\n";
    std::cout << x << "\n";
    std::cout << x+y<< "\n";
    std::cout << price << "\n";
    std::cout << grade <<"\n";
    std::cout << name<< "\n";


    //string literal 
    std:: cout << "hello " << name;
    return 0;
}