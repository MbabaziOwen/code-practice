//if a condition is met it does the code 
#include <iostream>

int main(){
    //age of 18 checker
    int age;
    std::cout<<"enter your age: ";
    std::cin>>age;

    if(age >+ 18 ){
        std::cout<<"welcome to the site";
    }else{
        std::cout<<"you are not old enough to enter";
    }


    return 0;
}