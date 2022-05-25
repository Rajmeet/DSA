#include <iostream>
using namespace std;
#include <algorithm>

void rotate(int arr[], int n) {
    int lastIndex = arr[n-1];

    for(int i=n-2; i>=0; i--) {
        // cout << arr[i+1] << " " << arr[i] << endl;
        arr[i+1] = arr[i];
    }
    arr[0] = lastIndex;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


void optimizedRotate(int arr[], int n) {
    int i = 0; int j = n-1;
    while(i < j) {
        std::swap(arr[i], arr[j]);
        // cout << arr[i] << " " << arr[j] << endl;
        i++;
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    rotate(arr, n);
    cout << endl << endl;
    int arr2[n] = {1,2,3,4,5};
    optimizedRotate(arr2, n);

}