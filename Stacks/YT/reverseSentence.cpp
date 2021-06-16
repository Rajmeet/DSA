#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseSentence(string s) {
    stack<string> temp;
    for(int i = 0; i < s.size(); i++) {
        string word = "";
        while(s[i] != ' ' && i < s.length()) {
            word+=s[i];
            i++;
        }
        temp.push(word);
    }

    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
}

int main() {

    string s = "Hello, how are you doing?";
    reverseSentence(s);
}