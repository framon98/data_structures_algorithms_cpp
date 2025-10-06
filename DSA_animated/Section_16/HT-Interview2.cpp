// Item in common 2
// Given two lists with some values, check if they have a value in common
// The simplest idea would be to lop through both of them, making this 
// an O(n^2) problem for a loop within a loop
// A better approach could be to create some sort of hash table to be able
// to know in )(n) where the equal element is or if there is one

#include <vector>
#include <iostream>
#include <unordered_map>

bool itemInCommon(std::vector<int> vect1, std::vector<int> vect2){
    std::unordered_map<int, bool> myMap;
    for (auto idxi : vect1) {
        myMap.insert({idxi, true});
    }

    for (auto idxj : vect2) {
        if (myMap[idxj]) return true;
    }

    return false;

} // This is a more efficient approach

int main(){
    std::vector<int> vect1 {1, 3, 5};
    std::vector<int> vect2 {2, 4, 5};

    std::cout << itemInCommon(vect1, vect2);
}