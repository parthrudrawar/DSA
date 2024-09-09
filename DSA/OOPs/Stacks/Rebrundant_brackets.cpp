#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s = "(a+b+c-(d*e))";
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            bool isRedundant = true;
            if (!st.empty() && st.top() == '(') {
                isRedundant = false;
            } else {
                while (!st.empty() && st.top() != '(') {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (!st.empty()) {
                    st.pop(); // Pop the opening parenthesis
                }
            }
            if (isRedundant) {
                cout << "Redundant" << endl;
                return 0;
            }
        }
    }
    cout << "Not Redundant" << endl;
    return 0;
}

//https://bit.ly/3srTkOv