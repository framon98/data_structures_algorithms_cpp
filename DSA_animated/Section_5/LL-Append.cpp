#include <iostream>

class Node {
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
        int length;
    
    public:
        LinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList(){
            Node* temp = head;
            while (head){
                head = head->next;
                delete temp;
                temp = head;
                
            }
        }

        void append(int value){
            Node* newNode = new Node(value);
            if (head == nullptr){
                head = newNode;
                tail = newNode;
            }else{

                tail->next = newNode;
                tail = newNode;
            }
            length++;

        }

        void printList(){
            Node* temp = head;
            while (temp != nullptr) {
                std::cout << temp->value << std::endl;
                temp = temp->next;
            }
        }

        void getHead(){
            std::cout << "Head: " << head->value << std::endl;
        }
        
        void getTail(){
            std::cout << "Tail: " << tail->value << std::endl;
        }
        
        void getLength(){
            std::cout << "Length: " << length << std::endl;
        }
};

int main(){
    LinkedList* myLinkedList = new LinkedList(1);

    myLinkedList->append(2);

    myLinkedList->printList();


    delete myLinkedList;
}