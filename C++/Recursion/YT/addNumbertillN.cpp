#include <iostream>
using namespace std;

int addNo(int n) {
    if(n == 0) return 0;
    return n+ addNo(n-1);
}

int main() {

    cout << addNo(4) << endl;
}