//type conversion == conversion of one datatype to another
// implicit = automatic
// explicit = precede value with new type

#include <iostream>
int main(){

 //  int x = 3.14;  //here since it is a boolean value but we called int it will implicitly convert it 
//double x =(int) 3.14; //here its still a double but we have forced it to chnage to an integer
//char x = 100; // this explicitly chnages  from an int to a character 

int correct = 8;
int questions = 10;
double score = correct /(double) questions*100;

std::cout<<score<<"\n";
    return 0;
}