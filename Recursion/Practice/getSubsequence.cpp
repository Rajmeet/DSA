#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> gss(string s) {
    if(s.size() == 0) {
        return {""};
    }
    char ch = s.at(0);
    string ros = s.substr(1);
    vector<string> rres = gss(ros);
    vector<string> mres;
    for(string rstr: rres) {
        mres.push_back("" + rstr);
        mres.push_back(ch + rstr);
    }
    return mres;
}

int main() {
    string s = "abc";
    vector<string> ans = gss(s);
    for(auto x: ans) {
        cout << x << endl;
    }
}