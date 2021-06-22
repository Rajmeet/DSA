#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int arr[] = { 12, 1, 78, 90, 57, 89, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    vector<int> sol;
    multiset<int> s;
    for (int i=0;i<(k-1);++i) {
        s.insert(arr[i]);
    }
    int prev = 0;
    for (int i=k-1; i < n; ++i) {
        s.insert(arr[i]);
        while (s.size() > k)
            s.erase(s.find(arr[prev++]));
        sol.push_back(*s.rbegin());
    }
    for(auto i: sol) {
        cout << i << " ";
    }
}
