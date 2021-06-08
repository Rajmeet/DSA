#include <iostream>
using namespace std;

// Quick Sort - Best Case - O(N Log N)
// Worst Case - O(N^2)

int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l-1;
    for(int j = l; j < r; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}


void quickSort(int arr[], int l, int r) {
    if(l<r) {
        int part = partition(arr, l, r);
        quickSort(arr, l, part-1);
        quickSort(arr, part+1, r);
    }
}

int main() {
    int arr[] = {5,4,3,2,1};
    quickSort(arr, 0,4);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}