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
};