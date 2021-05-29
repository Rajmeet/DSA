/*
Geeks for Geeks
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.


Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
*/

#include<bits/stdc++.h>
using namespace std;

// My code
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        for(int i = 0; i<n;i++) {
            if(a[i] == 0) {
                zeroCount++;
            }
            if(a[i] == 1) {
                oneCount++;
            }
            if(a[i] == 2) {
                twoCount++;
            }
        }
        for(int i = 0; i<zeroCount;i++) {
            a[i] = 0;
        }
        
        for(int i = zeroCount; i<(zeroCount+oneCount);i++) {
            a[i] = 1;
        }
        
        for(int i = (zeroCount+oneCount); i<(zeroCount+oneCount+twoCount);i++) {
            a[i] = 2;
        }       
    }
    
};

