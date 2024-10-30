#include <iostream>

int main(){
    std::cout << "Enter the number of elements" << std::endl;
    int number;
    std::cin >> number; // We take the number of elements from user

    int arr[number];
    // input for all the elements
    for (int idxi = 0; idxi < number; idxi++){
        std::cin >> arr[idxi];
    }

    int sum = 0;
    for (int idxi = 0; idxi < number; idxi++){
        sum += arr[idxi];
    }

    std::cout << sum << std::endl;
    return 0;
}