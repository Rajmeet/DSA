#include <iostream>
#include <map>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int arr[6] = {1,2,2,2,3,4};
    int k = 2;

    map<int, int> m;

    
    for (int i = 0; i < 6; i++)
    {
        if(m.size() == k+1) {
            break;
        }
        m[arr[i]]++;
    } 

    for(auto x: m) 
    {
        cout << x.first << " " << x.second << endl;
    }   
}