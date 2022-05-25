#include <iostream>
#include <stack>
using namespace std;

// Can be done using a single stack in which pop is called recursively and stored some where else and then it is pushed back to the stack

class Queue {
    stack<int> s1;
    stack<int> s2;

    public:
        void enqueue(int x) {
            s1.push(x);
        }
        void dequeue() {
            if(s1.empty() && s2.empty()) {
                cout << "Queue is empty" << endl;
                return;
            }
            while(!s1.empty()) {
                int x = s1.top();
                s2.push(x);
                s1.pop();
            }
        }

        bool empty() {
            if(s1.empty() && s2.empty()) {
                return true;
            }
            return false;
        }
};