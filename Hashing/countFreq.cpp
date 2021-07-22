#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> ump;
    int arr[8] = {2,2,2,1,1,4,3,4};

    for(int i = 0; i < 8; i++) {
        ump[arr[i]] += 1;
    }

    for(auto x : ump) {
        cout << x.first << ":" << x.second << endl;
    }

}