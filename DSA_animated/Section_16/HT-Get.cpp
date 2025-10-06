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
        int hash(std::string key){
            int hash = 0;
            for (int idx = 0; idx < key.length(); idx++){
                int asciiValue = int(key[idx]); // this turns strings into their ascii equivalents
                hash = (hash + asciiValue * 23) % SIZE; //this allows the results to be more random
            }
            return hash;
        }

        void set(std::string key, int value){
            int index = hash(key);
            Node* newNode = new Node(key, value);
            if (dataMap[index] == nullptr) { // No nodes at this address
                dataMap[index] = newNode;
            }else{ // There are nodes in the address already
                Node* temp = dataMap[index];
                while (temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        
        int get(std::string key){
            int index = hash(key);
            Node* temp = dataMap[index];
            while (temp != nullptr){
                if (temp->key == key){
                    return temp->value;
                }
                temp = temp->next;
            }
            return 0;
        }

};


int main(){
    HashTable* myHashTable = new HashTable();

    myHashTable->set("nails", 100);
    myHashTable->set("tile", 50);
    myHashTable->set("lumber", 80);


    // myHashTable->set("bolts", 200);
    // myHashTable->set("screws", 140);

    std::cout << "Lumber: " << myHashTable->get("lumber") << std::endl;
    std::cout << "Bolts: " << myHashTable->get("bolts") << std::endl;
    // myHashTable->printTable();
}