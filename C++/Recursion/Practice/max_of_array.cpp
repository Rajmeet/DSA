#include <iostream>
using namespace std;

int maxArray(int arr[], int n, int idx) {
    if(idx == n-1){
        return arr[idx];
    }
    int misa = maxArray(arr, n, idx+1);
    if(misa > arr[idx]) {
        return misa;
    } else{
        return arr[idx];
    }
}

int main() {
    int n = 4;
    int arr[n] = {10,40,30,20};
    cout << maxArray(arr, n, 0) << endl;
}