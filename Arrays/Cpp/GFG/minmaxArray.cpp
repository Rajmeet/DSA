/*
Geeks for geeks
Write a C++ function to return minimum and maximum in an array. 
Your program should make the minimum number of comparisons. 
*/

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    int N = 5;
    int arr[N] = {5,7,1,5,2};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int temp = 0;

    for(int i = 0; i < N; i++) {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]); 
    }
    cout << "Maximum: " << maxi << endl;
    cout << "Mini: " << mini << endl;
}