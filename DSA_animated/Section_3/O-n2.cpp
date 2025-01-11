#include <iostream>

void printItems(int n) {
    for (int idxi = 0; idxi < n; idxi++){
        for (int idxj = 0; idxj < n; idxj++){
            std::cout << idxi << idxj << std::endl;
        }
    }

    for (int idxk = 0; idxk < n; idxk++){
        std::cout << idxk << std::endl;
    }


}

int main(){
    printItems(10);
}