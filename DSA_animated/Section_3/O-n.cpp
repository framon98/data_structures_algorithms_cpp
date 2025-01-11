#include <iostream>

void printItems(int n) {
    for (int idxi = 0; idxi < n; idxi++){
        std::cout << idxi << std::endl;
    }
}

int main(){
    printItems(10);
}