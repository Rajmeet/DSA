#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;


    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);

    if(head == NULL) {
        n->next = n;
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);

    if(head==NULL) {
        insertAtHead(head, val);
    }

    Node* temp = head;

    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;

}

// deletion
void deleteAtHead(Node* &head) {
    Node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    Node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}

void deletion(Node* &head, int pos) {

    if(pos == 1) {
        deleteAtHead(head);
        return;
    }

    int count = 1;
    Node* temp = head;
    while(count != pos-1) {
        temp = temp->next;
        count++;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void Display(Node* head) {
    Node* temp = head;
    do {
        cout << temp->data;
        // cout << endl
        temp= temp->next;
    }
    while(temp!=head);
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    Display(head);
    insertAtHead(head, 5);
    cout << endl;
    Display(head);

}