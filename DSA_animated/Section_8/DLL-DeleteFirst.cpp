#include <iostream>

class Node {
    public:
        int value;
        Node* next;
        Node* prev;

        Node(int value){
            this->value = value;
            this->next = nullptr;
            this->prev = nullptr;
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
            while (temp != nullptr)
            {
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

        void getLength() {
            std::cout << "Length: " << length << std::endl;
        }

        void append(int value){
            Node* newNode = new Node(value);
            if (length == 0){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            length++;
        }

        void deleteLast() {
            if (length == 0) return;
            Node* temp = tail;
            if (length == 1){
                head = nullptr;
                tail = nullptr;
            }else{
                tail = tail->prev;
                tail->next = nullptr;
            }
            delete temp;   
            length--; 
        }

        void prepend(int value){
            Node* newNode = new Node(value);
            if (length == 0){
                head = newNode;
                tail = newNode;
            }else{
                head->prev = newNode;
                newNode->next = head;
                head = newNode;
            }
            length++;
        }

        void deleteFirst(){
            if (length == 0) return;
            Node* temp = head;
            if (length == 1){
                head = nullptr;
                tail = nullptr;
            }else{
                head = head->next;
                head->prev = nullptr;
            }
            delete temp;
            length--; 
        }
};

int main(){
    DoublyLinkedList* myDLL = new DoublyLinkedList(2);
    myDLL->append(1);
    std::cout << "DLL before deleteFirst 1" << std::endl;
    myDLL->printList();
    myDLL->deleteFirst();
    std::cout << "DLL after deleteFirst" << std::endl;
    myDLL->printList();
    myDLL->deleteFirst();
    std::cout << "DLL after deleteFirst 2" << std::endl;
    myDLL->printList();
    myDLL->deleteLast();

}
