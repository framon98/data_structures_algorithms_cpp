#include <iostream>

class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            next = nullptr;
        }
};  

class Stack{
    private: 
        Node* top;
        int height;

    public:
        Stack(int value){
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }

        void printStack() {
            Node* temp = top;
            while(temp) {
                std::cout << temp->value << std::endl;
                temp = temp->next;
            }
        }

        void getTop() {
            std::cout << "Top: " << top->value << std::endl;
        }

        void getHeight() {
            std::cout << "Height: " << height << std::endl;
        }
};

int main(){

    Stack* myStack = new Stack(4);

    myStack->getTop();
    myStack->getHeight();
    myStack->printStack();

    return 0;
}