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

        bool isPalindrome(){
            if (length == 0) return true;
            if (length == 1) return true;
            Node* front = head; 
            Node* back = tail;
            while (front != back){
                if (front->value != back->value) return false;
                front = front->next;
                back = back->prev;
            }
            return true;
        }


        //   +=====================================================+
        //   |                 WRITE YOUR CODE HERE                |
        //   | Description:                                        |
        //   | - This is the isPalindrome method.                  |
        //   | - It checks if the list is a palindrome or not.     |
        //   | - Return type: bool                                 |
        //   |                                                     |
        //   | Tips:                                               |
        //   | - A list with 0 or 1 node is a palindrome.          |
        //   | - Create two pointers: forwardNode and backwardNode.|
        //   | - Loop from the start to the middle of the list.    |
        //   | - Compare forwardNode and backwardNode values.      |
        //   | - If any pair is not equal, return false.           |
        //   | - Otherwise, return true.                           |
        //   | - Check output from Test.cpp in "User logs".        |
        //   +=====================================================+
};

int main(){
    DoublyLinkedList* myDLL = new DoublyLinkedList(1);
    myDLL->append(2);
    myDLL->append(3);
    myDLL->append(3);
    myDLL->append(2);
    std::cout << "DLL (palindrome):\n";
    myDLL->printList();
    bool result1 = myDLL->isPalindrome();
    std::cout << "Is Palindrome: " << (result1 ? "true" : "false") << " - EXPECTED: true\n";
    std::cout << (result1 ? "PASS\n" : "FAIL\n");

}
