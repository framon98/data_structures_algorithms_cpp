#include <iostream>

void printItems(int n) {
    for (int idxi = 0; idxi < n; idxi++){
        std::cout << idxi << std::endl;
    }

    for (int idxj = 0; idxj < n; idxj++){
        std::cout << idxj << std::endl;
    }
}

int main(){
    printItems(10);
}