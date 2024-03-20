#include <iostream>


int main(){
    char name1[50];
    char id1[10];
    double grade1;

    char name2[50];
    char id2[10];
    double grade2;

    std::cout<<"Enter student one's name: "<<std::endl;
    std::cin>>name1;
    std::cout<<"Enter student one's id: "<<std::endl;
    std::cin>>id1;
    std::cout<<"Enter student one's grade: "<<std::endl;
    std::cin>>grade1;

    std::cout<<"Enter student two's name: "<<std::endl;
    std::cin>>name2;
    std::cout<<"Enter student two's id: "<<std::endl;
    std::cin>>id2;
    std::cout<<"Enter student two's grade: "<<std::endl;
    std::cin>>grade2;

    std::cout<<"Student one's name is: "<<name1<<std::endl;
    std::cout<<"Student one's id is: "<<id1<<std::endl;
    std::cout<<"Student one's grade is: "<<grade1<<std::endl;

    std::cout<<"Student two's name is: "<<name2<<std::endl;
    std::cout<<"Student two's id is: "<<id2<<std::endl;
    std::cout<<"Student two's grade is: "<<grade2<<std::endl;
    std::cout<<"The average of the two grades are: "<< (grade1 + grade2)/2<<std::endl;

    return 0;

}