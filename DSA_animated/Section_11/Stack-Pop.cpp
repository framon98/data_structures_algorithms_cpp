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

        void push(int value){
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
            height++;
        }

        int pop(){
            if (height == 0) return INT_MIN;

            Node* temp = top;
            int poppedValue = top->value;
            top = top->next;
            delete temp;
            height--;

            return poppedValue;
        }
};

int main(){

    Stack* myStack = new Stack(1);

    std::cout << "Popped value 1 " << myStack->pop();
    std::cout << "\n\nPopped value 2  " << myStack->pop();

    // myStack->getTop();
    // myStack->getHeight();
    // myStack->printStack();

    return 0;
}    