#include<iostream>
int main(){
    
    int number;
    do{
        std::cout<<"enter a positive nymber: ";
        std::cin>>number;
    }while(number<0);
       
    std::cout<<"this number is "<<number;
    

    return 0;
}