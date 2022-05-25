#include <iostream>
using namespace std;

void printDecreasing(int n) {

    if(n == 0){
        return;
    }
    cout << n << " ";
    printDecreasing(n-1);
}

void printIncreasing(int n) {

    if(n == 0){
        return;
    }
    printIncreasing(n-1);
    cout << n << " ";
}

int factorial(int n) {
    if(n == 1 || n == 0) {
        return n;
    }
    int fact = factorial(n-1);
    int ans = n*fact;
    return ans;
}


int main() {
    int n =  5;
    // printDecreasing(n);
    // printIncreasing(n);
    cout << factorial(n);
}