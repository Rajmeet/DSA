#include <iostream>
using namespace std;

// 8 => 1000
// 7 => 0111

bool isPow(int n) {
    if(n == 0) return false;
    if((n & (n-1)) == 0) return true; 
}

int main() {
    cout << isPow(16) << endl;
}