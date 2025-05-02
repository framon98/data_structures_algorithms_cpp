#include <iostream>

class Node {
    public:
        int value;
        Node* left;
        Node* right;

        Node(int value){
            this->value = value;
            left = nullptr;
            right = nullptr;
        }
};

class BinarySearchTree { // Can be created to be empty to add the first node with insert instead
    // This also can be done for LL by pointing head and tail to nullptr and length to 0
    public: // This is changed to public in order to access the root node of the tree
        Node* root;

    public:
        BinarySearchTree(){
            root = nullptr;
        }
};

int main(){
    BinarySearchTree* myBST = new BinarySearchTree();

    std::cout << "Root: " << myBST->root;
}