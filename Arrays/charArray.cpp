#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(char arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[n-1-i]) {
            cout << "False";
            return false;
        }
    }
    cout << "True";
    return true;
}

int sentenceLargestWord(char arr[], int n) {
    int maxLength = 0;
    int temp = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == '\0' || arr[i] == ' ') {
            maxLength = max(maxLength, temp);
            temp = 0;
        }
        else 
            temp++;
    }
    return maxLength;
}

int main() {
    // Creation and Printing
    char arr[100] = "Apple";
    int i = 0;
    while(arr[i] != '\0') {
        cout << arr[i] << endl;
        i++;
    }
    
    cout << endl << endl;

    // Palindrome Check
    int n = 5;
    char arr2[n+1] = "nitin";
    cout << isPalindrome(arr2, n) << endl;

    cout << endl << endl;

    // Longest Word
    cout << "Longest Word in a sentence" << endl;
    int n2 = 10;
    char arr3[n2+1] = "do or die";
    cout << arr3 << endl;
    cout << sentenceLargestWord(arr3, n2) << endl;
}