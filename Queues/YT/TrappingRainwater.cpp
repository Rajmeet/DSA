#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int get_water(vector<int> arr) {
    int ans = 0, i = 0, n = arr.size();
    stack<int> st; 

    while(i < n) {
        while(!st.empty() && arr[st.top()] > arr[i]) {
            int t = st.top();
            int h = arr[t];
            if(st.empty()) {
                break;
            }
            int dif = i - st.top() - 1;
            ans += (min(arr[st.top()], arr[i]) - arr[t]) * dif;
            
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main() {
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << get_water(a);
}