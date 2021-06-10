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
    Node* newhead = new Node(val);
    newhead->next = head;
    head = newhead;
}


void insertAtTail(Node* &head, int val) {

    Node* n = new Node(val);
    
    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void deleteHead(Node* &head) {
    Node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteNode(Node* &head, int key) {
    if(head == NULL) {
        return;
    }
    if(head->next == NULL) {
        deleteHead(head);
        return;
    }

    Node* temp = head;
    while(temp->next->data != key) {
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
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
    deleteNode(head, 3);
    Display(head);


}