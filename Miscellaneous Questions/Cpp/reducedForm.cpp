#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Given an array convert it into its reduced form i.e. the smallest element gets the index 0 and the largest element gets the index of size and so on

int main() {
    int arr[] = {10,16,7,14,5,3,12,9};
    vector<pair<int, int>> v;
    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++) {
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), 
    [] (pair <int, int> p1, pair <int, int> p2) {
        return p1.first < p2.first;
    });

    for(int i = 0; i < v.size(); i++) {
        arr[v[i].second] = i;
    }
    
    for(int i = 0; i < v.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}