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

        bool insert(int value) {
            Node* newNode = new Node(value);
            if (root == nullptr){
                root = newNode;
                return true;
            }
            Node* temp = root;
            while (true){
                if (newNode->value == temp->value) return false;
                if (newNode->value < temp->value) {
                    if (temp->left == nullptr){
                        temp->left = newNode;
                        return true;
                    }
                    temp = temp->left;
                }else{
                    if (temp->right == nullptr){
                        temp->right = newNode;
                        return true;
                    }
                    temp = temp->right;
                }
            }
        }

        bool contains (int value){
            // if (root == nullptr) return false; // This might not be needed
            Node* temp = root; // Only using this yields cleaner code
            while (temp){
                if (value < temp->value){
                    temp = temp->left;
                }else if (value > temp->value){
                    temp = temp->right;
                }else{
                    return true;
                }
            }
            return false;

        }
};

int main(){
    BinarySearchTree* myBST = new BinarySearchTree();

    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    myBST->insert(52);
    myBST->insert(82);

    myBST->insert(27);

    // std::cout << "Root: " << myBST->root;
    std::cout << myBST->root->left->right->value << std::endl;
}