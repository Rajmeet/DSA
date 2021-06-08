#include<iostream>
#include<string>
using namespace std;

string moveallX(string s) {
    if(s.length() == 0) return "";

    string ans = moveallX(s.substr(1));
    if(s[0] == 'x') {
        return ans+s[0];
    }
    return s[0]+ans;

}

int main() {

    cout << moveallX("axxbdxcefxhix") << endl;
}