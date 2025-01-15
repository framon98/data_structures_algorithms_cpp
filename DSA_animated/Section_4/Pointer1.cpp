#include <iostream>

int main(){
    int num1 = 11;
    int num2 = num1;

    num1 = 22;

    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 =  " << num2 << std::endl;

}