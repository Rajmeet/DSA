#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2){
    string temp = s1+s2;
    if(s1.size() != s2.size()) {
        return false;
    }
    if(temp.find(s2) != string::npos) {
        return true;
    }
    return false;
}

int main() {
    string s1 = "ABACD";
    string s2 = "CDABA";

    cout << isRotation(s1, s2) << endl;
}