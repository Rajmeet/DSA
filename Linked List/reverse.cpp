#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data =val;
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
        temp = temp->next;
    }
    temp->next = n;

}

void Display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* reverse(Node* head) {
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

int main() {
    Node* head = NULL;
    insertAtTail(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    Display(head);
    Node* newhead = reverse(head);
    Display(newhead);
}
