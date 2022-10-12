#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s;
    stack <char> stk;
    cin >> s;
    for (int i=0; i<s.length();i++) {
        char ch = s[i];
        if (ch == '{' || ch == '[' || ch == '(') {
            stk.push(ch);
        }
        
        else {
            if(!stk.empty()) {
                char top = stk.top();
                if ((ch == '}' && top == '{') || 
                (ch == ')' && top == '(') || 
                (ch == ']' && top == '[')) {
                    stk.pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }
    if (stk.empty()) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}