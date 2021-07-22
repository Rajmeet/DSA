#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Question:
    You are given an array of denominations and a value X. Find the minimum number of coins required to make the value X
*/

int main() {
    vector<int> a = {2000, 500, 100, 50, 20, 10, 5, 2, 1};

    int x = 350;
    sort(a.begin(), a.end(), greater<int>());

    int ans = 0;  

    for (int i = 0; i < a.size(); i++)
    {
        ans += x/a[i];
        x -= x/a[i] * a[i];
    }

    cout << ans << endl;
   
}   