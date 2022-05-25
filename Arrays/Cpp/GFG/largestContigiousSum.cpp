#include <iostream>
// #include <bits/stdc++.h>
#include <climits>
using namespace std;

int largestContigiousSum(int arr[], int n) {

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

int main() {
    int n = 8;
    int a[n] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << largestContigiousSum(a, n) << endl;
}
