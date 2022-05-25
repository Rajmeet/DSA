#include <iostream>
using namespace std;

int power(int x, int y) {
    if(y == 0) {
        return 1;
    }
    int pow = power(x,y-1);
    int ans = x*pow;
    return ans;
}

int main() {
    int x = 4;
    int y = 3; 
    cout << power(x,y);
    
}