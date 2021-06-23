#include <iostream>
#include <string>
#include <stack>
using namespace std;


bool get_redundancy(string s) {
    bool ans = 0;
    stack<char> st;
    for(int i = 0; i < s.size(); i++) {
        // dont include the variables
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            st.push(s[i]);
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            if(st.top() == '(') {
                ans = 1;
            }
            while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/') {
                st.pop();
                // ans = 0;
            }
            // st.top();
            st.pop();
        }
    }
    return ans;
}


int main() {
    string s = "((a+b))";
    string s2 = "(a+(a+b))";

    cout << get_redundancy(s) << endl;
    cout << get_redundancy(s2) << endl;
    
}