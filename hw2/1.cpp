#include <iostream>

int main(){
    double num1, num2;
    std::cout<<"Enter first number:\n";
    std::cin>>num1;
    std::cout<<"Enter second number:\n";
    std::cin>>num2;

    std::cout<< num1 << " + " <<num2 << " = " <<num1 + num2<<std::endl;
    std::cout<< num1 << " * " <<num2 << " = " <<num1 * num2<<std::endl;
    std::cout<< num1 << " - " <<num2 << " = " <<num1 - num2<<std::endl;
    std::cout<< num1 << " / " <<num2 << " = " <<num1 / num2<<std::endl;
    return 0;
}