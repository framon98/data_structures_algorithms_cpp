#include <iostream>

class Node {
    public:
        std::string key;
        int value;
        Node* next;

        Node(std::string key, int value){
            this->key = key;
            this->value = value;
            next = nullptr;
        }
};

class HashTable {
    private: //Private by default
        static const int SIZE = 7;
        Node* dataMap[SIZE];
        // this will hold pointers to other elements
        //This does not has a constructor it only creates the address space we will use

    public:
        void printTable(){
            for(int idx = 0; idx < SIZE; idx++){
                std::cout << idx << ":" << std::endl;
                if(dataMap[idx]){
                    Node* temp = dataMap[idx];
                    while(temp) {
                        std::cout << "  {" << temp->key << ", " << temp->value << "}" << std::endl;
                        temp = temp->next;
                    }
                }
            }
        }
};