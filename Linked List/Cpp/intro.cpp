/*
LINKED LIST
A linear data structure which is similar to arrays with one difference, that is multiple blocks of memory are linked to each other rather than being a single block of memory.

Limitations of Arrays
- Size of arrays is fixed
- Contingous block of memory
- Insertion and Deletion of elements is a costly operation

Properties of Linked List
- Size can be modified
- Non Continguous memory
- Insertion and Deletion at any points is easier

Node (block of memory)
- Data: Stores the value 
- Next: Stores the pointer to the next node (address of next node)

Head Pointer - stores the address of the first node of the linked list
One can check if the next is null then it will be the size
Tail Pointer - last node
*/

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }
};

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=n;
    
}

void insertAtHead(Node* &head, int val) {
    Node * n = new Node(val);
    n->next = head;
    head = n;
}

void Display(Node* head) {  
    Node * temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
}

bool search(Node* head, int key) {
    Node * temp =  head;
    while(temp != NULL) {
        if(temp->data == key) {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main() {
    
    Node * head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    Display(head);
    insertAtHead(head, 4);
    Display(head);
    cout<<search(head, 4) << endl;

}