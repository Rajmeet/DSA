// finding the no of ways to do something -> inclusion exclusion principle
#include <iostream>
using namespace std;

// How many numbers between 1 to 1000 are divisible by 5 and 7
int divisible(int n, int a, int b) {
    int c1 = n/a; // divisible by a 
    int c2 = n/b; // divisible by b
    int c3 = n/(a*b); // divisible by A and B

    return c1+c2-c3;
}

// Euclid Algorithm to find GCD
int gcd(int a, int b) {
    while(b != 0) {
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {

    cout << divisible(40, 5, 7) << endl;
    
}