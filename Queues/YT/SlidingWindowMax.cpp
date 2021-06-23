/*
Sliding Window Maximum
Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.
Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3 
Output: 3 3 4 5 5 5 6
Maximum of 1, 2, 3 is 3
Maximum of 2, 3, 1 is 3
Maximum of 3, 1, 4 is 4
Maximum of 1, 4, 5 is 5
Maximum of 4, 5, 2 is 5 
Maximum of 5, 2, 3 is 5
Maximum of 2, 3, 6 is 6
*/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;


void printMaxK(int arr[], int n, int k) {
    deque<int> dq(k); // create a deque of size k
    int i = 0;
    for(i = 0; i < k; i++) {
        while((!dq.empty()) && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(; i < n; i++) { // arr[k] -> arr[n-1]
        cout << arr[dq.front()] << " ";

        while((!dq.empty()) && dq.front() <= i - k) {
            dq.pop_front();
        } 
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();
        
        dq.push_back(i);
    }
    cout << arr[dq.front()];
}

/*
1) Pop the front of the queue if the index is invalid (out of the window)
2) Maintain the Queue in the descending order => front = max
3) Push the current element
4) Include max of the current window (i >= k-1)
*/
vector<int> maxSlidingWindow(int arr[], int n, int k) {
    vector<int> ans;
    deque<pair<int,int>> dq; // element and index

    for(int i = 0; i < n; i++) {
        if(!dq.empty() && dq.front().second <= (i-k)) {
            dq.pop_front();
        }
        while(!dq.empty() && dq.back().first < arr[i]) {
            dq.pop_back();
        }
        dq.push_back(make_pair(arr[i], i)); // element and index
        if(i>=(k-1)) {
            ans.push_back(dq.front().first);
        }
    }
    return ans;
}

vector<int> windowMaximum(int arr[], int n, int k) {
    vector<int> ans;
    deque<int> dq; // a queue of indices and not elements
    
    // for the first window
    for(int i = 0; i < k; i++) {
        // the queue should be in decreasing order (second cond) 
        while(!dq.empty() && arr[dq.back()] < arr[i]) { 
            dq.pop_back();
        } 
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]); // since the first element is the max element

    for(int i = k; i < n; i++) {
        if(dq.front() == i-k) { // if the index becomes invalid
            dq.pop_front();
        }
        // dq.push_front(i);
        while(!dq.empty() && arr[dq.back()] < arr[i]) {  // same condition
            dq.pop_back();
        } 
        dq.push_back(i);

        ans.push_back(arr[dq.front()]);
    }

    return ans;

}



int main() {
    
    int arr[] = { 12, 1, 78, 90, 57, 89, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printMaxK(arr, n, k);
    
    cout << endl << endl;
    
    vector<int> ans = maxSlidingWindow(arr, n, k);
    for(auto x: ans) {
        cout << x << " ";
    }
    
    cout << endl << endl;

    vector<int> ans2 = windowMaximum(arr, n, k);
    for(auto i: ans2) {
        cout << i << " ";
    }
}