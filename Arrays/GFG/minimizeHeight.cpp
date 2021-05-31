// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int mini, maxi;
        int ans = arr[n-1] - arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] >= k) {
                maxi = max(arr[i-1] + k, arr[n-1] - k);
                mini = min(arr[0] + k, arr[i] - k);
                
                ans = min(ans, maxi-mini);
            }
            else {
                continue;
            }
        }
        return ans;
    }
        // code here
    //     int ans = 0;
    //     int maxi = INT_MIN;
    //     int mini = INT_MAX;
        
    //     for(int i = 0; i<n;i++) {
    //         if(k*k <= arr[i]) {
    //             // 9 <= 10
    //             arr[i] -= k;
    //         }
    //         else {
    //             arr[i] += k;
    //         }
    //     }
    //     for(int i = 0; i < n; i++) {
    //         maxi = max(maxi, arr[i]);
    //         mini = min(mini, arr[i]);
    //     }
    //     ans = maxi - mini;
    //     return ans;
    // }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends