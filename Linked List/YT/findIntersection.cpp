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

void intersect(Node* &head1, Node* &head2, int pos) {
    Node* temp1 = head1;
    pos--;
    while(pos--) {
        temp1 = temp1->next;
    }
    Node* temp2 = head2;
    while(temp2->next != NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

void insertAtHead(Node* &head, int val) {
    Node * n = new Node(val);
    n->next = head;
    head = n;
}

int length(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

int findIntersection(Node* &head1, Node* &head2) {

    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    Node* ptr1;
    Node* ptr2;
    if(l1 > l2) {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    } 
    else {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    
    while(d) {
        ptr1 = ptr1->next;
        if(ptr1 == NULL) {
            return -1; // no intersection
        }
        d--;
    }
    while(ptr1 != NULL && ptr2 != NULL) {
        if(ptr1 == ptr2) {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

void Display(Node* head) {  
    Node * temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
}


int main() {
    Node* head1 = nullptr;
    Node* head2 = nullptr;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    intersect(head1, head2, 3);
    Display(head1);
    Display(head2);

    cout << findIntersection(head1, head2) << endl;
}