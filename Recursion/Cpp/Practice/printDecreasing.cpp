#include <iostream>
using namespace std;

void printDecreasing(int n) {
    if(n == 1) {
        cout << 1;
        return;
    }
    cout << n;
    printDecreasing(n-1);
}


int main() {
    int n = 5;
    printDecreasing(n);
}
