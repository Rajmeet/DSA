#include <iostream>
using namespace std;

void printArrayASC(int arr[], int n, int idx) {
    if(idx == n){
        return;
    }
    cout << arr[idx] << " ";
    printArrayASC(arr, n, idx+1);

}   

void printArrayDSC(int arr[], int n, int idx) {
    if(idx == n){
        return;
    }
    printArrayDSC(arr, n, idx+1);
    cout << arr[idx] << " ";

}   


int main() {

    int n = 4;
    int arr[n] = {10,20,30,40};
    printArrayASC(arr, n, 0);
    cout << endl;
    printArrayDSC(arr, n, 0);
}