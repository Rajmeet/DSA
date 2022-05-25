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
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val) {    
    Node* n = new Node(val);

    if(head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void deleteAtHead(Node* &head) {
    Node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteNode(Node* &head, int val) {
    if(head == NULL) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    while(temp->next->data != val) {
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void Display(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}




int main() {
    Node* head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 1);
    // deleteNode(head, 2);
    deleteAtHead(head);
    Display(head);

}

