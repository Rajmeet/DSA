#include <iostream>
using namespace std;

// Dutch National Flag Sort (DNF)
// Time Complexity - O(N)


void DNFSort(int arr[], int N) {
    int low = 0;
    int mid = 0;
    int high = N-1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else{ // arr[mid] == 2
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}


int main() {
    int n = 6;
    int arr[n] = {2,2,1,0,1,0};
    DNFSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}