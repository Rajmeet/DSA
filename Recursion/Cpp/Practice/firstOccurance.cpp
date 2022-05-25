#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int idx, int d) {
    if(idx == n){
        return -1;
    }
    int fiisa = firstOccurance(arr, n, idx + 1, d);
    if(arr[idx] == d) {
        return idx;
    } else {
        return fiisa;
    }
}

int main() {
    int n = 10;
    int arr[n] = {2,3,6,9,8,3,2,6,2,4,8};
    cout << firstOccurance(arr, n, 0, 8) << endl;
}   