#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;


int main()
{
    int arr[4] = {1,-1,1,-1};
    map<int, int> m;
    int prefixSum = 0;
    
    for (int i = 0; i < 4; i++)
    {
        prefixSum += arr[i];
        m[prefixSum]++;
    }
    int ans = 0;
    for(auto x: m) 
    {
        int c = x.second; 
        ans += (c*(c-1))/2;
        
        if (x.first == 0)
        {    
            ans+=x.second;
        }
    }
    cout << ans << endl;    
}