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
    private:
        Node* root;

    public:
        BinarySearchTree(int value){
            Node* newNode = new Node(value);
            root = newNode;
        }
};