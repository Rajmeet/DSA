#include <iostream>
using namespace std;

void toh(int n, char A, char B, char C) {
    if(n == 0) {
        return;
    }
    toh(n-1, A, C, B);
    cout << "Moves from " << A << " to " << B << endl;
    toh(n-1, C, B, A);
}

int main() {
    toh(3, 'A', 'C', 'B');
}