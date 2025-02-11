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

class LinkedList {
    private:
        Node* head;
        int length;
        
    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            length = 1;
        }

        ~LinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            if (temp == nullptr) {
                std::cout << "empty";
            } else {
                while (temp != nullptr) {
                    std::cout << temp->value;
                    temp = temp->next;
                    if (temp != nullptr) {
                        std::cout << " -> ";
                    }
                }
            }
            std::cout << std::endl;
        }

        Node* getHead() {
            return head;
        }

        int getLength() {
            return length;
        }
        
        void makeEmpty() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
            length = 0;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node* currentNode = head;
                while (currentNode->next != nullptr) {
                    currentNode = currentNode->next;
                }
                currentNode->next = newNode;
            }
            length++;
        }

        void partitionList(int x){
            if (head == nullptr) return;
            Node* dummy1 = new Node(0); //this gets connected to the list with prev once and then it traverses without it
            Node* dummy2 = new Node(0);
            Node* prev1 = dummy1; // this moves only from current onwards using the pointer
            Node* prev2 = dummy2;
            
            Node* curr = head;
            while(curr){
                if (curr->value < x){
                    prev1->next = curr;
                    prev1 = curr;
                }else if (curr->value >= x){
                    prev2->next = curr;
                    prev2 = curr;
                }
                curr = curr->next;
            }
            prev2->next = nullptr;
            prev1->next = dummy2->next;
            head = dummy1->next;
            
        }

        //   +======================================================+
        //   |                 WRITE YOUR CODE HERE                 |
        //   | Description:                                         |
        //   | - Partition list around value x                      |
        //   | - Return type: void                                  |
        //   |                                                      |
        //   | Tips:                                                |
        //   | - Create two dummy nodes for two new lists           |
        //   | - One list for nodes less than x                     |
        //   | - Another list for nodes greater or equal to x       |
        //   | - Loop through original list                         |
        //   | - Assign nodes to new lists based on value           |
        //   | - Merge the two new lists                            |
        //   | - Update the original list's head                    |
        //   +======================================================+

};

int main(){

    LinkedList myLL(1);
    myLL.append(4);
    myLL.append(3);
    myLL.append(2);
    myLL.append(5);
    myLL.append(2);

    myLL.printList();
    std::cout << "List after partition" << std::endl;
    myLL.partitionList(3);
    myLL.printList();


    return 0;
}
