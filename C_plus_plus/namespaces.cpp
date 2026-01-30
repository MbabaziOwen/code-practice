/*
name spacve provides soluctiobs for preventing name conflicts 
in large projects . each entitiy needs a unique name.
a name space allows for identically name entities as long 
as the name spaces are different 
*/

#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2; 
}

//if you call for x and you dont specify which one you are using it will take the local version 
int main (){
    using namespace first; // this forces it to use the first name space as defult  

    int x = 0;

    std::cout << x<< "\n"; //not specified
    std::cout << first::x<< "\n"; // what i have done here is used the scope resolution operator
    std::cout << second::x<< "\n";

    return 0;
}