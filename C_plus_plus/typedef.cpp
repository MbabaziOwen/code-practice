//typedef / using  == a reserved keyword used to create an additional name
//i.e nickname for another datatype
// helps wiht readabiity and reduces typos

#include <iostream>
#include <vector>
//i.e insteadof typing 
using  text_t= std::string; // we have rduced the whole name to text_t
using number_t =  int;
int main(){

   text_t firstName = "bro"; // here we have created a variable called firstname instead first writting the whole long previous code 
    std::cout << firstName << '\n';

    number_t age = 56;
    std::cout << age;
    return 0;
}
