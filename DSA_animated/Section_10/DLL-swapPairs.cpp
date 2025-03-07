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

        Node* getHead(){
            // std::cout << "Head: " << head->value << std::endl;
            return head;
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

        void swapPairs(){
            if (length == 0) return;
            if (length == 1) return;

            Node* dummy = new Node(0);
            Node* temp = dummy;
            Node* first = head;
            Node* second = first->next;
            dummy->prev = head;

            while (first && first->next){
                second = first->next;
                temp->next = second;
                second->prev = temp;
                first->next = second->next;
                second->next = first;
                first->prev = second;

                temp = first;
                first = first->next;

            }
            head = dummy->prev->prev;
            // delete temp;
        }
};

int main(){
    DoublyLinkedList* myDLL = new DoublyLinkedList(1);
    std::cout << "\n----- Test: Swap Pairs with Multiple Nodes -----\n";
    // DoublyLinkedList* myDLL(1);
    myDLL->append(2);
    // myDLL->append(3);
    // myDLL->append(4);
    // myDLL->append(5);
    // myDLL->append(6);
    std::cout << "DLL before swapping pairs:\n";
    myDLL->printList();
    myDLL->swapPairs();
    std::cout << "\nDLL after swapping pairs:\n";
    myDLL->printList();
    //cout << "PASS/FAIL test: ";
    std::cout << (myDLL->getHead()->value == 2 && 
             myDLL->getHead()->next->value == 1 && 
             myDLL->getHead()->next->next->value == 4 &&
             myDLL->getHead()->next->next->next->value == 3 ? "PASS\n" : "FAIL\n");

}
