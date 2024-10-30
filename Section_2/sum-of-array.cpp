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

    /// Prints each element of the array
    for (int idxi = 0; idxi < number; idxi++){
        std::cout << arr[idxi] << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    for (int idxi = 0; idxi < number; idxi++){
        sum += arr[idxi];
    }

    std::cout << sum << std::endl;
    return 0;
}