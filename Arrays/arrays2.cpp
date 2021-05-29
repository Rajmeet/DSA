// Apni Kaksha Video Questions
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int firstRepeatingElement(int arr[], int n) {
    const int N = 1e6+2;
    int idx[N];

    for(int i =0; i<N; i++) {
        idx[i] = -1;
    }
    int minidx = INT_MAX;

    for(int i = 0; i<n; i++) {
        if(idx[arr[i]] != -1) {
            minidx = min(minidx, idx[arr[i]]);
        }
        else {
            idx[arr[i]] = i;
        }
    }
    if(minidx == INT_MAX) {
        return -1;
    }
    else {
        return minidx+1;
    }
}

void subarrayWithGivenSum(int arr[], int N, int sum) {
    int i, j = 0;
    sort(arr, arr+N);
    for(int i =0; i<N; i++) {
        j = i+1;
        
        if(arr[i]+arr[j] == sum) {
            cout << i << "," << j << endl;
            cout << arr[i] << " + " << arr[j] << " = " << sum;
        }
        else if(arr[i]+arr[j] >= sum) {
            i++;
        }
        else if(arr[i]+arr[j] <= sum) {
            j++;
        }
        else {
            cout << "none";
        }
    }
}

int smallestPositiveMissingNumber(int arr[], int N) {
    int ans = 0;

    bool check[N];
    for(int i = 0; i < N; i++) {
        check[i] = 0;
    }
    
    for(int i = 0; i < N; i++) {
        if(arr[i] >= 0) {
            check[arr[i]] = 1;
        }
    }   
    for(int i = 0; i < N; i++) {
        if(check[i] == 0) {
            ans = i; // smallest
            break;
        } 
    }

    return ans;
}




int main() {

    cout << "First Repeating Element in the array" << endl;
    int n = 7;
    int arr[n] = {1,5,3,4,3,5,6};
    cout << firstRepeatingElement(arr, n) << endl;

    cout << endl << endl;

    cout << "Subarray With Given Sum" << endl;
    int n2 = 4;
    int arr2[5] = {1,2,3,7,5};
    int target = 5;
    subarrayWithGivenSum(arr2, 5, 12);
    
    cout << endl << endl;

    cout << "Smallest positive missing number" << endl;
    int n3 = 6;
    int arr3[n3] = {0, -9, 1, 3, -4, 5};
    cout << smallestPositiveMissingNumber(arr3, n3) << endl;


}
