#include<iostream>
#include<cmath>
using std::endl; using std::cout;

bool isPrime(int x) {
    for(int i = 2; i <= sqrt(x); i++) {
        if(x%i == 0) {
            return false;
        }
    }
    return true;
}

void fibo(int n) {
    int t1= 0; int t2 = 1;
    int nextTerm;
    for(int i = 1; i<=n; i++) {
        cout << t1 << endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int total = 1;
    for(int i=n; i > 0; i--) { 
        total*= i;
    }
    return total;
}

int main() {
    
    // Prime between x and y
    cout << "Prime numbers between x and y" << endl;
    for(int x = 2; x <= 10; x++) {
        cout << x << ": " << isPrime(x) << endl;
    }

    cout << endl << endl;

    // fibo
    cout << "Fibonacci Series" << endl;
    fibo(5);
    
    cout << endl << endl;

    // factorial
    cout << "Factorial" << endl;
    cout << fact(4) << endl;

}