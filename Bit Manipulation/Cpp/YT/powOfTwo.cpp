#include <iostream>
using namespace std;

// LOGIC: Power of Two
// n   = 8 => 1000  
// n-1 = 7 => 0111
// n & n - 1 => 1000 & 0111 = 0000 (is power of 2)

bool powOfTwo(int n) {
    // if(n==0) return 0;
    // return ((n & n-1) == 0);
    return (n && !(n & n-1));

}

int main() {
    cout << powOfTwo(8) << endl;
    cout << powOfTwo(14) << endl;
}