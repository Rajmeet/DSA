#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

/*
5
21 7
24 4 
12 6
40 5
30 6
20
*/

bool compare(pair<int, int> a, pair<int, int> b) {
    double v1 = (double) a.first / a.second;
    double v2 = (double) b.first / b.second;
    
    return v1 > v2;
}

int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second; 
    }
    
    int w;
    cin >> w;

    sort(v.begin(), v.end(), compare);

    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(w >= v[i].second) {
            ans += v[i].first;
            w -= v[i].second;
            continue; 
        }

        double vw = (double) v[i].first/v[i].second;
        ans += vw * w;
        w = 0;
        break;
    }
    cout << ans << endl;
}