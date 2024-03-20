#include <iostream>
#include <math.h>



int main(void){
    double num; //This is initialized to nothing or grabage

    std::cout<<"Enter a number:"<<std::endl; //This displays the text enter a number
    std::cin>>num; //This requests for an input from the user
    std::cout<<" \n"; //This displays an output to the user.

    std::cout<<"Your output is:"<<std::endl; //This display
    std::cout<< pow(num, 2) <<std::endl; //This displayes the number to the power 2
    return 0;

}