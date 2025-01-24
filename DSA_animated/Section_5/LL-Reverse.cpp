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

        void deleteLast(){
            if (tail == nullptr){
                return;
            }
            Node* temp = head;
            if (length == 1){
                head = nullptr;
                tail = nullptr;
            }else{
                Node* pre = head;
                while (temp->next){
                    pre = temp;
                    temp = temp->next;
                }
                tail = pre;
                tail->next = nullptr;
            }            
            delete temp;
            length--;
        }

        void deleteFirst(){
            if (head == nullptr) return;
            Node* temp = head;
            if (length == 1){
                head = nullptr;
                tail = nullptr;
            }else{
                head = head->next;
            }
            delete temp;
            length--;
        }

        void prepend(int value){
            Node* newNode = new Node(value);

            if (head == nullptr){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
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

        Node* get(int index){
            if (index < 0 || index >= length){
                return nullptr;
            }
            Node* temp = head;
            for (int idxi = 0; idxi < index; idxi++){
                temp = temp->next;
            }
            return temp;
        }

        bool set(int index, int value){ 
        // it is a boolean to know if it was possible
        // to add a value to an index
            Node* temp = get(index);
            if (temp){
                temp->value = value;
                return true;
            }
            return false;
        }

        bool insert(int index, int value){
            // this adds a node to the linked list
            if (index < 0 || index > length) return false;
            if (index == 0){
                prepend(value);
                return true;
            }
            if (index == length){
                append(value);
                return true;
            }
            Node*  newNode = new Node(value);
            Node* temp = get(index - 1);
            newNode->next = temp->next;
            temp->next = newNode;
            length++;
            return true;
        }

        void deleteNode(int index){
            if (index < 0 || index >= length) return;
            if (index == 0) return deleteFirst();
            if (index == length - 1) return deleteLast();
            Node* prev = get(index - 1);
            Node* temp = prev->next;

            prev->next = temp->next;
            delete temp;
            length--;

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
    myLinkedList->append(3);
    myLinkedList->append(4);
    myLinkedList->append(5);

    myLinkedList->printList();

    myLinkedList->deleteNode(2);
    std::cout << "\nLL after deleteNode() in middle:\n";
    myLinkedList->printList();


    myLinkedList->deleteNode(0);
    std::cout << "\nLL after deleteNode() of first node:\n";
    myLinkedList->printList();

    myLinkedList->deleteNode(2);
    std::cout << "\nLL after deleteNode() of last node:\n";
    myLinkedList->printList();


    // myLinkedList->set(1, 4);
    // myLinkedList->insert(1, 1);

    // myLinkedList->printList();


}