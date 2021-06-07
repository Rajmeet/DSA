#include <iostream>
using namespace std;

// Check if the ith bit is set or not
// Bit Set means where the ith element has a 1 or not
// We can AND the number and 2^i (2^i will have all other zeros).

bool check(int n, int i) {
    
    if(n & (1<<i)) {
        return true;
    }
    else{
        return false;
    }
}

int main() {

    int n = 20;
    cout << check(n, 2) << endl;
}