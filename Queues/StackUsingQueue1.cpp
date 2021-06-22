#include <iostream>
#include <queue>
using namespace std;

// Push method is costly
// Take two queues, when adding to the stack add it to the second queue first then add all the elements from the first queue to the second queue and then swap the first and second queue.
class Stack {
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack() {
        N = 0;
    }

    void push(int val) {
        q2.push(val);
        N++;
        while(!q1.empty()) {
            int item = q1.front();
            q2.push(item);
            q1.pop();
        }
        // Swap
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop() {
        q1.pop();
        N--;
    }

    int top() {
        return q1.front();
    }
    int size() {
        return N;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
}