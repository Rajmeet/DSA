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

void insertAtHead(Node* &head, int val) {
    Node * n = new Node(val);
    n->next = head;
    head = n;
}

Node* merge(Node* &head1, Node* &head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* dummyNode = new Node(-1);

    Node* ptr3 = dummyNode;

    while(ptr1 != NULL && ptr2 != NULL) {
        if(ptr1->data < ptr2->data) {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while(ptr1!=NULL) {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    
    while(ptr2!=NULL) {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return dummyNode->next;
}

Node* mergeRecursively(Node* &head1, Node* &head2) {
    Node* result;
    if(head1 == NULL) {
        return head2;
    }
    if(head2 == NULL) {
        return head1;
    }

    if(head1->data < head2->data) {
        result = head1;
        result->next = mergeRecursively(head1->next, head2);
    }
    else {
        result = head2;
        result->next = mergeRecursively(head1, head2->next);
    }
    return result;
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
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head2, 2);
    insertAtTail(head2, 3);
    insertAtTail(head2, 6);
    Display(head1);
    Display(head2);

    Node* mergeHead = mergeRecursively(head1, head2);
    Display(mergeHead);
}
