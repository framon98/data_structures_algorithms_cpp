#include <iostream>


int main(){
    int number; 
    std::cin >> number;

    int arr[number];
    for (int idxi = 0; idxi < number; idxi++ ){
        std::cin >> arr[idxi];
    }

    std::cout << "Before reverse:" << std::endl;
    for(int idxi = 0; idxi < number; idxi++){
        std::cout << arr[idxi] << " ";
    }

    int start = 0;
    int end = number - 1;
    while (start <= end){
        std::swap(arr[start], arr[end]);

        start++;
        end--;
    }

    std::cout << std::endl << "After reverse:" << std::endl;
    for(int idxi = 0; idxi < number; idxi++){
        std::cout << arr[idxi] << " ";
    }

    return 0;

}