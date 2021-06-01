#include <iostream>
#include <string>
using namespace std;


int isPlaindrome(string S)
{
    // Your code goes here
    int N = S.size();
    int i = 0; int j = N - 1;
    while(i <= j) {
        if(S[i] == S[j]) {
            i++; j--;
        }
        else {
            return 0;
        }
    }
    return 1;
}
int main() {
    char S[] = "abc";
    cout << isPlaindrome(S);
    
}
