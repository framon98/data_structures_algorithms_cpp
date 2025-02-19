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

        void swapFirstLast(){
            if (length < 2) return;
            Node* temp = new Node(head->value);
            head->value = tail->value;
            tail->value = temp->value;
        }
};

int main(){
    DoublyLinkedList* myDLL = new DoublyLinkedList(5);
    // myDLL->printList();
    myDLL->append(2);
    myDLL->append(3);
    myDLL->append(4);
    myDLL->append(1);
    std::cout << "Before Swap:" << std::endl;
    myDLL->printList();
    myDLL->swapFirstLast();
    std::cout << "After Swap:" << std::endl;
    myDLL->printList();

}
