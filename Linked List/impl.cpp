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

bool search(Node* head, int key) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(Node* &head) {
    Node * todelete = head;
    head = head->next;
    delete todelete; // to prevent memory leak
}

void deleteNode(Node* &head, int key) {

    // Corner Cases
    if(head == NULL) {
        return;
    }
    if(head->next == NULL) {
        deleteAtHead(head);
        return;
    }
    
    // Deletion
    /*
    1->2->3 (we want to delete 2)
    temp->next->data == 2, hence 1 is the pointer to temp
    so todelete = temp->next (2)
    temp->next = temp->next->next => 1->3
    */
    Node * temp = head;
    while(temp->next->data != key) {
        temp = temp->next;
    }
    Node* todelete = temp->next;
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

Node* reverseRecursive(Node* &head) {
    
    if(head==NULL || head->next == NULL) {
        return head;
    }

    Node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

void Display(Node * head) {
    Node * temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}

int main() {
    Node * head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    Display(head);

    // Reverse Linked List
    // Node* newhead = reverse(head);
    // Display(newhead);

    // Node* newhead = reverseRecursive(head);
    // Display(newhead);

    insertAtHead(head, 0);
    Display(head);
    cout << search(head, 2) << endl;
    deleteAtHead(head);
    Display(head);


    

}