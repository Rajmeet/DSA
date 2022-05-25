// Apni Kaksha Video Questions
#include<iostream>
using std::endl; using std::cout; using std::cin;
using std::max;
#include<climits>

int Max_Till_I(int arr[], int n) {
    int result = INT_MIN;
    // for(int i = 0; i < n; i++) {
    //     // cout << arr[i];
    //     if(arr[i] > result) {
    //         result = arr[i];
    //     }
    // }  
    // return result;
    // int mx = -19999;
    for(int i = 0; i < n; i++) {
        result = max(result, arr[i]);
    }
    return result;
}

int sumSubArray(int arr[], int n) {
    int result=0;
    for(int i = 0; i < n; i++) {
        int total = 0;
        // cout << "I:" << arr[i] << endl;
        for(int k = i; k < n; k++) {
            cout << arr[k] << endl;
            total+=arr[k];
            cout << total << endl;
            result += total;
            // cout << "K:" << arr[k] << endl;
        }
    }
    return result;
}

int LongestSubArray(int arr[], int n) {
    int pd = arr[1] - arr[0];
    int i = 2;
    int curr = 2;
    int ans = 0;
    while(i < n) {
        if(pd == arr[i] - arr[i-1]) {
            curr++;
        }
        else {
            pd = arr[i] - arr[i-1];
            curr = 2;
        }
        i++;
        ans = max(ans, curr);
    }
    return ans;
}

int recordBreakingDay(int arr[], int n) {   
    int ans = 0;
    int mx = -1;
    if (n == 1) {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > mx && arr[i] > arr[i+1]) {
            ans++;
            mx = max(mx, arr[i]);
        }
    }
    
    return ans;
}


int main() {
    // Max_Till_I Code
    cout << "Max Till I" << endl;
    int n = 5;
    int arr[n] = {2,5,1,5,7};
    cout << "Arr: ";
    for(auto x: arr) {
        cout << x << " ";
    }
    cout << endl << "Max: " << Max_Till_I(arr, n) << endl;
    
    cout << endl << endl;

    // Sum of sub arrays
    cout << "Sum of SubArrays" << endl;
    n = 3;
    int arr2[n] = {1,2,3};
    cout << sumSubArray(arr2, n) << endl;

    cout << endl << endl;

    // Longest Arithematic Subarray
    cout << "Longest Arithematic Subarray" << endl;
    n = 7;
    int arr3[n] = {10, 7, 4 , 6, 8, 10, 11};
    for(auto x: arr3) {
        cout << x << " ";
    }
    cout << endl << "Longest Arithmetic Subarray: " << LongestSubArray(arr3, n) << endl;

    cout << endl << endl;

    // Record Breaker   
    cout << "Record Breaking Day Question" << endl;
    n = 8;
    int arr4[n] = {1,2,0,7,2,0,2,2};
    for(auto x: arr4) {
        cout << x << " ";
    }
    cout << endl << "Record Breaking Days: " << recordBreakingDay(arr4, n) << endl;


}