#include <iostream>

int main(){

    int number;
    std::cin >> number;

    int arr[number];
    for (int idxi = 0; idxi < number; idxi++){
        std::cin >> arr[idxi];
    }

    //Normal print in regular order
    std::cout << "Normal print" << std::endl;
    for (int idxi = 0; idxi < number; idxi++){
        std::cout << arr[idxi] << " ";
    }

    std::cout << std::endl;

    // Reverse print
    std::cout << "Reverse print" << std::endl;
    for (int idxi = number-1; idxi >= 0; idxi--)
    {
        std::cout << arr[idxi] << " ";
    }


    return 0;
}