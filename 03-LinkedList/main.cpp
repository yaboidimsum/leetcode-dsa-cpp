#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node *next;

        Node(int value){
            this->value = value;
            next = nullptr;
        }
};

class LinkedList
{
    private:
        Node *head;
        Node *tail;
        int length;
    public:
        LinkedList(int value){
            Node *newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList(){
            Node *temp = head;
            while(head){
                head = head->next;
                delete temp;
                temp = head;
            }
        }

    void append(int value){
        Node *newNode = new Node(value);
        if (length == 0){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void printList(){
        Node *temp = head;
        while(temp){
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getHead(){
        if (head == nullptr){
            cout << "Head: nullptr" << endl;
        } else {
            cout << "Head: " << head->value << endl;
        }
    }

    void getTail(){
        if(tail == nullptr){
            cout << "Tail: nullptr" << endl;
        } else {
            cout << "Tail: " << tail->value << endl;
        }
    }

    void getLength(){
        cout << "Length: " << length << endl;
    }
};

int main(){
    LinkedList *myLinkedList = new LinkedList(1);
    myLinkedList->append(2);

    myLinkedList->printList();
}