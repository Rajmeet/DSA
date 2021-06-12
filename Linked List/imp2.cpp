#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAtHead(Node* &head, int val) {
    Node * n = new Node(val);
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

bool search(Node* &head, int key) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
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
        // 1 2 3
        temp = temp->next;
    }
    Node * todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

Node* reverse(Node* &head) {
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    while(currptr != NULL) {
        nextptr = currptr->next;
        currptr->next = prevptr; 

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
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
    cout << search(head, 2) << endl;
    deleteNode(head, 3);
    Display(head);
    Node* newhead = reverse(head);
    Display(newhead);

}