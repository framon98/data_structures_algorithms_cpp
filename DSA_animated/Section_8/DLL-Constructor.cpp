#include <iostream>

class Node {
    public:
        int value;
        Node* next;
        Node* prev;

        Node(int value){
            this->value = value;
            next = nullptr;
            prev = nullptr;
        }
};

class DoublyLinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        DoublyLinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;

        }

        void printList(){
            Node* temp = head;
            while (temp)
            {
                std::cout << temp->value << std::endl;
                temp = temp->next;
            }
        }
};

DoublyLinkedList* myDLL = new DoublyLinkedList(7);