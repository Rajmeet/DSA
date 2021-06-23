#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int get_max_area(vector<int> arr) {
    int n = arr.size(), i = 0, ans = 0;
    arr.push_back(0);
    stack<int> st;

    while(i < n) {
        while(!st.empty() && arr[st.top()] > arr[i]) {
            int t = st.top();
            int h = arr[t]; // height
            st.pop();
            if(st.empty()) {
                // smallest height
                ans = max(ans, h*i);
            }
            else {
                int len = i - st.top() - 1;
                ans = max(ans, len*h);
            }     
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main() {
    vector<int> a = {2,1,5,6,2,3};
    cout << get_max_area(a);

}