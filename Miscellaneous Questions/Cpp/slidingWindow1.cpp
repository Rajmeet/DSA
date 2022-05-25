#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {-2,10,1,3,2,-1,4,5};
    int n = arr.size();
    int ans = INT_MAX;
    int k = 3;
    int currSum = 0;

    for(int i = 0; i < k; i++) {
        currSum += arr[i];
    }
    
    ans = min(ans, currSum);

    for(int i = 1; i < n-k-1; i++) {
        currSum -= arr[i-1];
        currSum += arr[i+k-1];
        ans = min(ans, currSum);
    }
    cout << ans << endl;
}