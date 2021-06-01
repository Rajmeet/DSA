#include <iostream>
#include <string>
using namespace std;


int main() {
    string s = "aaabccddd";
    int N = 26;
    int freq[N];
    char ans;
    int maxFreq = -1;

    for(int i = 0; i < N; i++){ 
        freq[i] = 0;
    }
    
    for(int i = 0; i < s.size()-1; i++) {
        freq[s[i]-'a'] +=1;
    }
    for(int i = 0; i < N; i++) {
        if(maxFreq < freq[i]) {
            maxFreq = freq[i];
            ans = 'a' + i;
        }
    }
    cout << ans << ":" << maxFreq << endl;
}