#include <iostream>
#include <climits>
using namespace std;

void printMatrix() {
    int row = 3;
    int col = 2;
    int arr[row][col] = {{3,4}, {5,7}, {7,6}};

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool matrixSearch() {
    int n = 3;
    int m = 2;
    int arr[n][m] = {{3,4}, {5,7}, {7,6}};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 5) {
                return true;
            }
        }
    }
    return false;
}




int main() {
    cout << "Printing Matrix" << endl;
    printMatrix();
    
    cout << endl << endl;

    cout << "Searching in matrix" << endl;
    cout << matrixSearch() << endl;

    cout << endl << endl;


}