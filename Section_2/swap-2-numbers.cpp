#include<iostream>

int main(){

    int num_a, num_b;
    std::cin >> num_a >> num_b;

    std::cout << "Before Swapping" << std::endl;
    std::cout << "a = " << num_a << std::endl;
    std::cout << "b = " << num_b << std::endl;

    int temp = num_a;
    num_a = num_b;
    num_b = temp;
    
    std::cout << "After Swapping" << std::endl;
    std::cout << "a = " << num_a << std::endl;
    std::cout << "b = " << num_b << std::endl;


    return 0;
}