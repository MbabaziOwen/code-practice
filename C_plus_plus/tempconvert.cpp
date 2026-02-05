//converting from one temp to another 


#include<iostream>
int main(){
    double temp;
    char unit;
    double result;


    //ask for temp conversion
    std::cout<<"Select what you want to convert to F or C: \n";
    std::cin>>unit;

    //enter current temp for converion
    std::cout<<"enter current temp for converion: \n";
    std::cin>>temp;
    //switch 
    switch(unit){
         //Celisius to Fahrenheit
        case 'f':
        result = (temp-32)/1.8;
        std::cout<<"The Celcius temp in Fahrenheit is: \n"<< result<<"F";
        break;

        //fahrenheit to celicus 
        case 'c':
        result = (temp*1.8)+32;
        std::cout<<"The Fahrenheit  temp in Celcius is: \n"<< result<<"C";
        break;
        default:
        std::cout<<"wrong input";
    }
    

    return 0;
}