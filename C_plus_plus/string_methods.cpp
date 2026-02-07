#include<iostream>
int main(){

    std::string name;
    std::cout <<"enter your name: ";

    std::getline(std::cin,name);

    //if(name.length() > 12){  //for checking the length of the text 
       // std::cout<<"your name cant be over 12 characters";

    //}else{
        //std::cout<<"welcome "<<name;
   // }

    //if(name.empty()){ //checking if the input is empty
       //std::cout<<"you didnt enter you name";

    //}else{
        //std::cout<<"welcome "<<name;
    //}

    //name.append("@gmail.com");
    //std::cout<<"you username is now "<<name;

    std::cout<<name.at(0);
    

    return 0;
}