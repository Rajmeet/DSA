/*
STACK
Stores a list of items in which an item can be added to or removed from the list only at one end
It follows the LIFO Mechanims - Last In First Out 
Example - Pile of Coins

OPERATIONS [O(1)]
- Push(x) = push an element to the top of the stack
- Pop()   = remove the element from the top of the stack 
- Top()   = returns the top of the stack
- Empty() = Returns true if a stack is empty or not.
*/

#include <iostream>
using namespace std;

#define n 100

class Stack {
    int* arr;
    int top;

    public:
        Stack() {
            arr = new int[n];
            top = -1;
        }

        void push(int x) {
            if(top == n-1) {
                cout << "Stack Overflow" << endl;
                return;
            }
            top++;
            arr[top] = x;
        }
        void pop() {
            if(top == -1) {
                cout << "No element to pop" << endl;
                return;
            }
            top--;
        }

        int Top() {
            if(top == -1) {
                cout << "No element in Stack" << endl;
                return -1;
            }
            return arr[top];
        }
        bool empty() {
            return top == -1; // stack empty
        }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.Top() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();    
    cout << s.empty() << endl;



}