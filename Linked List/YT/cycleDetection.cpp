#include <iostream>
using namespace std;

/*
Using Floyd's Algorithm/ Heir and Tortoise Algorithm
A cycle is when two nodes point to the same node.

For Detection of Cycle
Consider a slowptr (tortoise) and a fastptr (heir). Update the position of fastptr with 2 and the position of slowptr by 1. If slowptr==fastptr or heir and tortoise are at the same node that means a cycle is present

For Removal of Cycle
Consider a similar case of tortoise (slowptr) and heir (fastptr). When the positon of fastptr == slowptr, take any one of the pointer and set it equal to head. Now update position by once and check if the next of the nodes is equal to each other. If they are that is the node that needs to be removed. Remove that node by making it point to NULL.
*/

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

void makeCycle(Node* &head, int pos) {
    Node* temp = head;
    Node* startNode;
    int count = 1;
    while(temp->next != NULL) {
        if(count == pos) {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(Node* &head) {
    Node* fastptr = head;
    Node* slowptr = head;

    while(fastptr != NULL || fastptr->next != NULL) {

        if(fastptr == slowptr) {
            return true;
        }
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }
    return false;
}

void removeCycle(Node* &head) {
    Node* fastptr = head;
    Node* slowptr = head;

    do {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    } while(slowptr != fastptr);

    fastptr = head;
    
    while(slowptr->next != fastptr->next) {
        slowptr = slowptr->next;
        fastptr = fastptr->next;
    }
    slowptr->next = NULL;

}

void Display(Node* head) {  
    Node * temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
}


int main() {
    Node* head = nullptr;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makeCycle(head, 3);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    Display(head);
}