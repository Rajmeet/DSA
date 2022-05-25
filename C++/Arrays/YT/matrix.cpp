// Apni Kaksha Video Questions
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    // matrix transpose
    cout << "Matrix Transpose" << endl;
    int m = 3;
    int n = 3;
    int A[m][n] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << "Original matrix" << endl;
    for(int i =0; i < m; i++) {
        for(int j = 0; j<n;j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < m; i++) {
        for(int j=i; j < n; j++) {
            //swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;    
        }
    }

    // printing
    cout << endl << "After transpose" << endl;
    for(int i =0; i < m; i++) {
        for(int j = 0; j<n;j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Matrix Multiplcation
    cout << "Matrix Multiplcation" << endl;
    int n1 = 3;
    int n2 = 4;
    int n3 = 3;
    int M1[n1][n2] = {{2,4,1,2},{8,4,3,6},{1,7,9,5}}; 
    int M2[n2][n3] = {{1,2,3}, {4,5,6}, {7,8,9}, {4,5,6}};

    int ans[n1][n3];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n3; j++) {
            ans[i][j] = 0;
        }
    }
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n3; j++) {
            for(int k = 0; k < n2; k++) {
                ans[i][j] += M1[i][k]*M2[k][j];
            }
        }
    }

    // printing
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n3; j++)
            cout << ans[i][j] <<" ";
        cout << endl;
    }

    cout << endl << endl;

    // Matrix search Optimized
    cout << "Matrix Search Optimized Way" << endl;
    m = n = 4;
    int arr[m][n] = {{1,4,7,11}, {2,5,8,12}, {3,6,9,16}, {10,13,14,17}};
    int r = 0, c = m-1;
    int target = 5;
    bool found = false;
    while(r < n && c >= 0) {
        if(arr[r][c] == target) {
            found = true;
        }
        if(arr[r][c] > target) {
            c--;
        }
        else {
            r++;
        }
    }
    if(found) {
        cout << "element found" << endl;
    }
    else {
        cout << "not found" << endl;
    }
                                   
}