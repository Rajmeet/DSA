#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    if(s.length() == 0) return "";

    string ros = s.substr(1);
    if(s[0] == ros[0]) {
        return removeDuplicates(ros);
    }
    return s[0]+removeDuplicates(s.substr(1));
}

int main() {
    cout << removeDuplicates("aaaabbbeeecdddd") << endl;
}