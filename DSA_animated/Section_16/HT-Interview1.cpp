// Item in common 1
// Given two lists with some values, check if they have a value in common
// The simplest idea would be to lop through both of them, making this 
// an O(n^2) problem for a loop within a loop
// This can be like this

#include <vector>
#include <iostream>

bool itemInCommon(std::vector<int> vect1, std::vector<int> vect2){
    for (auto idxi : vect1){
        for (auto idxj : vect2){
            if (idxi == idxj) return true;
        }
    }
    return false;
} // This is not an efficient approach

int main(){
    std::vector<int> vect1 {1, 3, 5};
    std::vector<int> vect2 {2, 4, 6};

    std::cout << itemInCommon(vect1, vect2);
}