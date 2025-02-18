#include <iostream>

class Node {
    public:
        int value;
        Node* next;

        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};

class Queue {
    private:
        Node* first;
        Node* last;
        int length;
    public:
        Queue(int value){
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length = 1;
        }

        void printQueue() {
            Node* temp = first;
            while(temp) {
                std::cout << temp->value << std::endl;
                temp = temp->next;
            }
        }

        void getFirst() {
            std::cout << "First: " << first->value << std::endl;
        }

        void getLast() {
            std::cout << "Last: " << last->value << std::endl;
        }

        void getLength() {
            std::cout << "Length: " << length << std::endl;
        }

        void enqueue(int value){
            Node* newNode = new Node(value);
            if (length == 0){
                first = newNode;
                last = newNode;
            }else{
                last->next = newNode;
                last = newNode;
            }
        }
};

int main(){
    Queue* myQueue = new Queue(7);

    myQueue->getFirst();

    myQueue->printQueue();

}