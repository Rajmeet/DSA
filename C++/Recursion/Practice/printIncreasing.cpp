#include <iostream>
using namespace std;

void printIncreasing(int n) {
    if(n == 0){
        return;
    }
    printIncreasing(n-1);
    cout << n;
}

int main() {
    int n = 5;
    printIncreasing(n);
}