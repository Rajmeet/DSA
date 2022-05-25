#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "abcacbade";
    int count[26];
    int maxCount = 0;

    for(int i =0; i<26;i++) {
        count[i] = 0;
    }
    for(int i = 0; i<s.size(); i++) {
        count[s[i]-'a']++;
    }

    for(int i = 0; i <26; i++) {
        maxCount = max(maxCount, count[i]);
    }

    cout << maxCount << endl;
}