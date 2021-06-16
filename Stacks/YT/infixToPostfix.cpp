#include <iostream>
#include <string>
#include <stack>
using namespace std;

int prec(char c) { // precedence
    if(c=='^') {
        return 3;
    }
    if(c=='*' || c=='/') {
        return 2;
    }
    if(c=='+' || c=='-' ){
        return 1;
    }
    return -1;
}

string infixToPostFix(string s) {
    stack<char> st;
    string ans;

    for(int i = 0; i < s.size(); i++) {
        if((s[i] >= 'a' && s[i <='z']) || (s[i] >= 'A' && s[i] <='Z')) {
            ans+=s[i];
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                ans+=st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            while(!st.empty() && prec(st.top())>prec(s[i])) {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        ans+=st.top();
        st.pop();
    }
    return ans;
}



int main(){
    string s = "(a-b/c)*(a/k-l)";
    cout << infixToPostFix(s) << endl;
}