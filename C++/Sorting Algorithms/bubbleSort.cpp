#include <iostream>
using namespace std;

// Bubble Sort Algorithm - Time Complexity - Best Case - O(N) [already sorted]
// Worst Case - O(N^2) 

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int N = 5;
    int arr[N] = {8,4,1,2,3};
    bubbleSort(arr, N);
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}