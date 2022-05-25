#include <iostream>
using namespace std;

/*
_|||_ _  _
  A   B  C

*/
// TOWER OF HANOI PROBLEM

void tow(int n, char src, char des, char helper) {
    if(n==0) return;
    tow(n-1, src, helper, des);
    cout << "Moves from " << src << " to " << des << endl;
    tow(n-1, helper, des, src);
    // cout << src << " moves " << des << endl;
    
}

int main() {
    tow(3, 'A', 'C', 'B');
}