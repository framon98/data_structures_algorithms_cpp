#include <iostream>

// using namespace std;

/*
Input:
The linked list can have any number of nodes (0 to n).
Node values are integers.

Output:
Return a pointer to the middle node of the linked list.
If the list has an even number of nodes, return the second middle node (the one closer to the end).

Constraints
You are not allowed to use any additional data structures (such as arrays) or modify the existing data structure.
You can only traverse the linked list once.
*/


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
        Node* tail;
        
    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
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

        Node* getTail() {
            return tail; 
        }
        
        void makeEmpty() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
            tail = nullptr;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        
        Node* findMiddleNode(){
            Node* slow = head;
            Node* fast = head;
            if (head == nullptr) return head;
            while (fast->next != nullptr){
                slow = slow->next;
                fast = slow->next;
                
            }
            return slow;
        }

        //   +======================================================+
        //   |                 WRITE YOUR CODE HERE                 |
        //   | Description:                                         |
        //   | - Find the middle node of the linked list            |
        //   | - Return type: Node*                                 |
        //   |                                                      |
        //   | Tips:                                                |
        //   | - Use two pointers: 'slow' and 'fast'                |
        //   | - 'slow' moves one step, 'fast' moves two            |
        //   | - When 'fast' reaches the end, 'slow' is at middle   |
        //   | - Return 'slow' as the middle node                   |
        //   +======================================================+

        bool hasLoop(){
            Node* slow = head;
            Node* fast = head;
            
            // for (int idx = 0; idx < length; idx++){
                
            // }
            // if (head == nullptr) return false;
            while (fast != nullptr && fast->next != nullptr){
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast) return true;
            }
            return false;
            
        }

        //   +======================================================+
        //   |                 WRITE YOUR CODE HERE                 |
        //   | Description:                                         |
        //   | - Check if the linked list has a loop                |
        //   | - Return type: bool                                  |
        //   |                                                      |
        //   | Tips:                                                |
        //   | - Use two pointers: 'slow' and 'fast'                |
        //   | - 'slow' moves one step, 'fast' moves two            |
        //   | - If they meet, a loop exists                        |
        //   | - Return true if loop found, false otherwise         |
        //   | - 'fast' checks for null and its 'next' for null     |
        //   +======================================================+

};


