#include <iostream>
#include <queue>
using namespace std;

// Pop method is costly
// Take two queues, when adding to the stack add it to the second queue first then add all the elements from the first queue to the second queue and then swap the first and second queue.
class Stack {
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack() {
        N = 0;
    }

    void pop() {
        if(q1.empty()){
            return;
        }
        while(q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();   
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void push(int val) {
        q1.push(val);
        N++;
    }

    int top() {
        if(q1.empty()){
            return -1;
        }
        while(q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
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