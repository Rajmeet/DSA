#include <iostream>
using namespace std;

// LOGIC: while n != 0 -> update count
// n   = 11 = 01011
// n-1 = 10 = 01010
// n = n & n-1 = 01010
// count = 1

// n   = 01010 = 10
// n-1 = 01001 = 9
// n = n & n-1 = 01000 = 8
// count = 2

// n   = 8 = 01000
// n-1 = 7 = 00111
// n = n & n-1 = 0000 = 0
// count = 3


int countBits(int n) {
    int count = 0;
    while (n != 0) {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main() {
    cout << countBits(19) << endl;
}