#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &v, int n, int i) {
    int maxIdx = i;
    int l = 2*i+1; // left child
    int r = 2*i+2; // right child
    
    if(l < n && v[l] > v[maxIdx]) {
        maxIdx = l;
    }
    if(r < n && v[r] > v[maxIdx]) {
        maxIdx = r;
    }

    if(maxIdx != i) {
        swap(v[i], v[maxIdx]);
        heapify(v, n, maxIdx);
    }
}


void heapSort(vector<int> &v) {
    int n = v.size();
    for(int i = n/2-1; i >= 0; i--) {
        heapify(v, n, i);
    }

    for(int i = n-1; i>0; i--) {
        swap(v[0], v[i]);
        heapify(v, i, 0);
    }
    
}

int main() {
    vector<int> v = {4,5,3,2,6,1};
    heapSort(v);
    for(auto i: v) {
        cout << i << " ";
    }
}