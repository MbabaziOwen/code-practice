//cout << (insertion operator)
// cin >> (extraction operator)

#include<iostream>
int main(){

    //asking user for their name 
    std::string name;
    std::cout<<"what is your name: ";
    std::getline(std::cin>> std::ws,name);  //ws removes any whitespaces that can be left in the input 

   
      
     
    //asking user for their age 
    int age;
    std::cout<<"what is your age? ";
    std::cin>>age;
     std::cout<<"hello "<< name<<"\n";
    std::cout<<"you are "<<age<<" years old";
    return 0;
}