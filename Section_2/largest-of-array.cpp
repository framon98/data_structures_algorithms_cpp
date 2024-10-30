#include <iostream>

int main(){
    int number;

    std::cin >> number;

    int arr[number];
    for (int idxi = 0; idxi < number; idxi++){
        std::cin >> arr[idxi];
    }

    int largest_number = INT_MIN;

    for (int idxi =0; idxi < number; idxi++){
        if (arr[idxi] > largest_number){
            largest_number = arr[idxi];
        }
    }

    std::cout << "Largest number is = " << largest_number << std::endl;
}