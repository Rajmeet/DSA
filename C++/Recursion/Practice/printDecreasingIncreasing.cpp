#include <iostream>
using namespace std;

void PDI(int n) {
    if(n == 0){
        return;
    }
    cout << n << " ";
    PDI(n-1);
    cout << n << " ";
}

int main() {
    int n = 5;
    PDI(n);
}