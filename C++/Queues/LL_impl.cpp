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

class Queue {
    Node* front;
    Node* back;

    public:
        Queue() {
            front = NULL;
            back = NULL;
        }

        void enqueue(int val) {
            Node* n = new Node(val);
            if(front == NULL) {
                back = n;
                front = n;
                return;
            }
            back->next = n;
            back = n;

        }

        void dequeue() {
            if(front == NULL) {
                return;
            }
            if(front->next == NULL) {
                Node* todelete = front;
                front = NULL;
                delete todelete;
            }

            Node* todelete = front;

            front = front->next;
            delete todelete;
        }

        int top() {
            if(front != NULL) {
                return front->data;
            }
        }

        bool empty() {
            if(front == NULL || back == NULL) {
                return true;
            }
            return false;
        }
};

int main(){
    Queue q = Queue();
    cout << q.empty() << endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.top() << endl;
    q.dequeue();
    cout << q.top() << endl;
}