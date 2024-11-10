#include <iostream>

int main(){

    char name[100];
    std::cout << "Enter your name: ";
    std::cin >> name;
    name[1] = '\0';
    name[3] = 'd';
    name[4] = 'x';
    std::cout << "Your name is: " << name << std::endl;


    return 0;
}