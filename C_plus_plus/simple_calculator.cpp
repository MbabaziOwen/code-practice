//this is a simple calculator program 
//it can add divide and subtract 

#include<iostream>
#include<cmath>

int main(){
    char operators;
    double first_value;
    double second_value;
    double answer;

    std::cout<<"enter the first value and second value; \n";
    std::cin>>first_value;
    std::cin>>second_value;

    std::cout<<"enter operand + for addition , / for division or - for subtruction and * for multiplication ";
    std::cin>>operators;

    switch(operators){
        case '+': //addition
        answer = first_value+second_value;
        std::cout<<"the addition of the values is "<< answer;
        break;

        case '/': //division
        if(second_value==0){
            std::cout<<"you can not divide by zero ";
            break;
        }else{
            answer = first_value/second_value;
            std::cout<<"the division of the value "<< answer;
            break;
        }
        

        case '-': //subtraction
        answer = first_value-second_value;
        std::cout<<"the subtraction of the values is "<< answer;
        break;

        case '*': //multiplication
        answer = first_value*second_value;
        std::cout<<"the multiplication of the values is "<< answer;
        break;

        
        default:
            std::cout<<"enter the right options ";
        

    }



    return 0;
}       