#include <iostream>
using namespace std;

/*
Doubly Linked List
A different node structure = Previous, Data and Next
NULL <- 1 -> 2 -> 3 -> NULL
        H <-   <-   <-
*/

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL; 
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    n->next = head;
    if(head != NULL) {
        head->prev = n; 
    }
    head = n;
}

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);

    if(head == NULL) {
        insertAtHead(head, val);
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(Node* &head) {
    Node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deletion(Node* &head, int pos) {

    if(pos == 1) {
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(temp != NULL && count != pos) {
        temp = temp->next;
        count++;
    }
    
    temp->prev->next = temp->next;
    
    if(temp->next != NULL) {
      temp->next->prev = temp->prev;
    }

    delete temp;
}

void Display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
}

int main() {

    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 0);
    Display(head);
    deletion(head, 4);
    Display(head);
}