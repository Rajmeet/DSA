/*
Geeks for Geeks
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.


Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
*/

#include <iostream>
using namespace std;
#include <algorithm>

// // My code
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        for(int i = 0; i<n;i++) {
            if(a[i] == 0) {
                zeroCount++;
            }
            if(a[i] == 1) {
                oneCount++;
            }
            if(a[i] == 2) {
                twoCount++;
            }
        }
        for(int i = 0; i<zeroCount;i++) {
            a[i] = 0;
        }
        
        for(int i = zeroCount; i<(zeroCount+oneCount);i++) {
            a[i] = 1;
        }
        
        for(int i = (zeroCount+oneCount); i<(zeroCount+oneCount+twoCount);i++) {
            a[i] = 2;
        }       
    }
    
};

// optimized solution Dutch National Flag (DNF) 
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
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int N = 5;
    int arr[N]= {0, 2, 1, 2, 0};
    // DNFSort(arr, N);
    Solution s = Solution();
    cout << "Actual Array" << endl;
    for(auto x: arr) {
        cout << x << " ";
    }
    cout << endl << endl;
    cout << "Bruteforce Approach" << endl;
    s.sort012(arr, N);
    for(auto x: arr) {
        cout << x << " ";
    }

    cout << endl << endl;
    
    cout << "Dutch National Flag Sort (DNF Sort)" << endl;
    int arr2[N]= {0, 2, 1, 2, 0};
    DNFSort(arr2, N);


}