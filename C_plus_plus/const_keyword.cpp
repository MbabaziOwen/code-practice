// the const keyword specifies that a variable value is constant
//read only

#include <iostream>

int main(){
    const double PI = 3.14159; //use const 
    // its good to make the varibale name of a constant capital 
    double radius = 10;
    double circumference = 2*PI*radius;

    std::cout <<  "the circumfrance is " <<circumference << "cm";
    return 0;
}