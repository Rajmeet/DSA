#include <iostream>
using namespace std;
// Time Complexity - O(N)

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

Node* reverseK(Node* &head, int k) {
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    int count = 0;
    while(currptr != NULL && count < k) {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr != NULL) {
        head->next = reverseK(nextptr, k);
    }

    return prevptr;
}


int main() {
    Node* head = nullptr;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    int k = 2;
    Node* newhead = reverseK(head, k);
    // reverseK(head, 2);
    Display(newhead);

}