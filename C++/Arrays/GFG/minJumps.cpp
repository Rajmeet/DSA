#include <iostream>
using namespace std;

int minJumps(int arr[], int n){
    // Your code 
    int currPos = 0;
    int ans = 0;
    while(currPos <= n-1) {
        currPos += arr[currPos];
        ans++;
    }
    return ans;
}

int main() {
    int N = 6;
 int arr[N] = {1, 4, 3, 2, 6, 7};
}