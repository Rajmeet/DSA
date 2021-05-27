#include <iostream>
#include <climits>
using namespace std;

// print all subarrays
void allSubarrays(int arr[], int N) {
    for(int i = 0; i<N; i++) {
        for(int j=i; j<N;j++) {
            for(int k=i; k<=j;k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        } 
    }
}

// Bruteforce max sum 
int maxSumSubarrays(int arr[], int N) {
    int maxSum = INT_MIN;
    for(int i = 0; i<N; i++) {
        for(int j=i; j<N;j++) {
            int sum = 0;
            for(int k=i; k<=j;k++) {
                sum+=arr[k];
                maxSum = max(maxSum, sum);
                // cout << arr[k] << " ";
            }
        } 
    }
    return maxSum;
}

// KADANE ALGORITHM
int maxSumSubarrayOptimized(int arr[], int n) {
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

// Pair sum problem 
// needs to be sorted
void pairSum(int arr[], int n, int target) {
    int i = 0;
    int j = n - 1;
    while(i < j) {
        if(arr[i] + arr[j] == target) {
            cout << arr[i] << " " << arr[j] << endl;
            break;
        }
        else if(arr[i] + arr[j] > target) {
            j--;
        }
        else {
            i++;   
        }
    }
}

int main() {

    cout << "Print all subarrays" << endl;
    int N = 5;
    int arr[N] = {-1,4,-6,7,-4};
    allSubarrays(arr, N);
    
    cout << endl << endl;

    cout << "Max sum of subarrays" << endl;
    cout << maxSumSubarrays(arr, N) << endl;
        
    cout << endl << endl;
    
    cout << "Max sum of subarrays Optimized" << endl;
    cout << maxSumSubarrays(arr, N) << endl;

    cout << endl << endl;

    cout << "Two pair sum" << endl;
    int n3 = 8;
    int arr3[n3] = {2,4,7,11,14,16,20,21}; 
    pairSum(arr3, n3, 31);
    cout << endl;
}