#include <iostream>

int main(){
    int number;

    std::cin >> number;

    int arr[number];
    for (int idxi = 0; idxi < number; idxi++){
        std::cin >> arr[idxi];
    }

    int largest_number = INT_MIN; // You can also set this to the first element of the array
    int smallest_number = INT_MAX;
    // using alternative initialization you to use first instead of 0 element
    for (int idxi =0; idxi < number; idxi++){ 
        if (arr[idxi] > largest_number){
            largest_number = arr[idxi];
        }
        if (arr[idxi] < smallest_number){
            smallest_number = arr[idxi];
        }
    }

    std::cout << "Largest number is = " << largest_number << std::endl;
    std::cout << "Smalelst value is = " << smallest_number << std::endl;
}