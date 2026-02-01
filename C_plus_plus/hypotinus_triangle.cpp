//we are calculating the hypotinus of a right angled triangle in C++

//include the required libraries
#include <iostream>
#include<cmath>

int main(){
    //inputs
    double a;
    double b;
    double c;

    std::cout<<"enter values for a and b "<<"\n";
    std::cin>>a;
    std::cin>>b;

    c = sqrt(pow(a,2)+pow(b,2));
    std::cout<< "the hypotenus is "<< c;


    return 0;
}