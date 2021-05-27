#include <iostream>
#include <climits>
using namespace std;

// KADANE ALGORITHM
int kadaneAlgo(int arr[], int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    
    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        if(currSum < 0) {
            currSum = 0;
        }
        else {
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

int maxCircularSubarraySum(int arr[], int n) {
    int wrapSum;
    int nonwrapSum;

    nonwrapSum = kadaneAlgo(arr, n);
    int totalSum = 0;
    for(int i=0; i < n; i++) {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadaneAlgo(arr, n);

    return max(wrapSum, nonwrapSum);
}

int main() {
    cout << "Kadane Algorithm Implementation" << endl;
    int N = 5;
    int arr[N] = {-1,4,-6,7,-4};
    cout << kadaneAlgo(arr, N) << endl;    

    cout << "Max Circular Subarray Sum using Kadane" << endl;
    int N2 = 7;
    int arr2[N] = {4,-4,6,-6,10,-11,12};
    cout << maxCircularSubarraySum(arr2, N2) << endl;
}