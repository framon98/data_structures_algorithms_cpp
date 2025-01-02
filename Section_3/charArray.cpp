#include <iostream>

int length(char input[]){
    int count = 0;
    for (int idxi = 0; input[idxi] != '\0'; idxi++){
        count++;
    }
    return count;
}

int main(){

    char name[100];
    std::cout << "Enter your name: ";
    std::cin >> name;
/*     name[1] = '\0';
    name[3] = 'd';
    name[4] = 'x'; */
    std::cout << "Your name is: " << name << std::endl;

    // std::cout << "Length is:" << length(name);

    return 0;
}