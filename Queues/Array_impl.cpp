#include <iostream>
using namespace std;
#define n 20

class Queue {
    private:
        int* arr;
        int back;
        int front;

    public:
        Queue() {
            arr = new int[n];
            back = -1;
            front = -1;
        }

        void enqueue(int val) {
            if(back == n-1) {
                cout << "Queue overflow" << endl;
                return;
            }
            
            back++; 
            arr[back] = val;

            if(front == -1) {
                front++;
            }
        }   
        
        void dequeue() {
            if(front == -1 || front > back) {
                return;
            }
            front++;
        }
        
        int top() {
            if(front != -1 || front < back) {
                return arr[front];
            }
            else {
                cout << "Empty Array" << endl;
                return -1;
            }
        }
        
        bool empty() {
            if(front == -1 || front > back) {
                return true;
            }
            return false;
        }
};

int main() {
    Queue q = Queue();
    cout << q.empty() << endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.top() << endl;
    q.dequeue();
    cout << q.top() << endl;

}