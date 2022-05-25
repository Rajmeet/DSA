#include <iostream>
using namespace std;

/*
Base Case: Stopping condition for the function
Recursive statement: Calling the function again.
*/


void A() {
    // since there is no base case the function prints "Hi" infinitely.
    cout << "hi" << " ";
    A(); // function calls itself
}

void A(int x) {
    // base case, only runs for 5 times
    if(x == 5) {
        return;
    }
    cout << "hi" << " ";
    A(x+1); // recursive condition 
}

int main() {
    A(0);
    cout << endl;
}