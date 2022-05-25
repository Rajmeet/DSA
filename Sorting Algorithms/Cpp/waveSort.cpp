#include <iostream>
using namespace std;

// Wave Sort - Time Complexity - O(N)

void waveSort(int arr[], int n) {
    for(int i = 1; i < n; i+=2) {
        if(arr[i] > arr[i-1]) {
            swap(arr[i],arr[i-1]);
        }
        if(arr[i] > arr[i+1] && i<=n-2) {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
    int n = 7;
    int arr[n] = {1,3,4,7,5,6,2};
    for(auto x: arr) {
        cout << x << " ";
    }
    cout << endl;
    cout << "After Sorting" << endl;
    waveSort(arr, n);   
    
    for(auto x: arr) {
        cout << x << " ";
    }
    cout << endl;
}