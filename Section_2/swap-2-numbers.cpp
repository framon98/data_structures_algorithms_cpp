#include<iostream>

int main(){

    int num_a, num_b;
    std::cin >> num_a >> num_b;

    std::cout << "Before Swapping" << std::endl;
    std::cout << "a = " << num_a << std::endl;
    std::cout << "b = " << num_b << std::endl;

    //Using a temp variable is one way to do a number swap
    // int temp = num_a;
    // num_a = num_b;
    // num_b = temp;

    // If we use an xor or ^ we can do a swap with no temp variable
    // num_a = num_a ^ num_b;
    // num_b = num_a ^ num_b;
    // num_a = num_a ^ num_b;

    // From the standard library, swap does the same if given to variables
    std::swap(num_a, num_b);

    
    std::cout << "After Swapping" << std::endl;
    std::cout << "a = " << num_a << std::endl;
    std::cout << "b = " << num_b << std::endl;


    return 0;
}