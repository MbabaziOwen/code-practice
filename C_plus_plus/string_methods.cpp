#include<iostream>
int main(){

    std::string name;
    std::cout <<"enter your name: ";

    std::getline(std::cin,name);

    if(name.length() > 12){
        std::cout<<"your name cant be over 12 characters";

    }else{
        std::cout<<"welcome "<<name;
    }

    return 0;
}