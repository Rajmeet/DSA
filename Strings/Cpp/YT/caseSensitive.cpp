#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string toLower(string str) {
    for(int i = 0; i < str.size(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}

string toUpper(string str) {
    for(int i = 0; i < str.size(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    return str;
}

int main() {
    string s = "This is My strinG";
    cout << "Original String: " << s << endl;
    cout << endl;
    cout << "Using Functions " << endl; 
    cout << "To Upper Function: " << toUpper(s) << endl;
    cout << "To Lower Function: " << toLower(s) << endl;
    cout << endl;
    cout << "Using algorithms (transform)" << endl;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;

}