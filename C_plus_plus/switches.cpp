//switch is an alternative if statemtn used to compare one value againts many cases 

#include<iostream>
int main(){

    int month;
    std::cout<<"enter the month (1-12): ";
    std::cin>>month;

    switch(month){
        case 1:
            std::cout<<"it is January";
        case 2:
            std::cout<<"it is feb";
        case 3:
            std::cout<<"it is march";
        case 4:
            std::cout<<"it is April";
        case 5:
            std::cout<<"it is May";
        case 6:
            std::cout<<"it is June";
        case 7:
            std::cout<<"it is July";
        case 8:
            std::cout<<"it is August";
        case 9:
            std::cout<<"it is Sept";
        case 10:
            std::cout<<"it is Oct";
        case 11:
            std::cout<<"it is Nov";
        case 12:
            std::cout<<"it is Dec";  
            break;
        default:
            std::cout<<"please enter only numbers 1-12";

    }
    return 0;
}