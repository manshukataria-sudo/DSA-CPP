#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int priority(char op) {
    if (op == '*' || op == '/') {
        return 2;
    }
    return 1;
}
int answer(int op1, char op, int op2) {
    if (op == '*') {
        return op1 * op2;
    } else if (op == '/') {
        return op1 / op2;
    } else if (op == '+') {
        return op1 + op2;
    }
    return op1 - op2;
}
int solve(string exp) {
    stack<int> st;
    stack<char> op;
    int i = 0;
    while (i < exp.size()) {
        if ((int)exp[i] >= 48 && (int)exp[i] <= 57) {
            st.push((int)exp[i++] - 48);
        } else if (exp[i] == '(') {
            i++;
            string temp = "";
            while (exp[i] != ')') {
                temp += exp[i++];
            }
            st.push(solve(temp));
            i++;
        } else if (!op.size() || priority(exp[i]) > priority(op.top())) {
            op.push(exp[i++]);
        } else {
            while (op.size() && priority(exp[i]) <= priority(op.top())) {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                char ch = op.top();
                op.pop();
                st.push(answer(op1, ch, op2));
            }
            op.push(exp[i++]);
        }
    }
    while (op.size()) {
        int op2 = st.top();
        st.pop();
        int op1 = st.top();
        st.pop();
        char ch = op.top();
        op.pop();
        st.push(answer(op1, ch, op2));
    }
    return st.top();
}
int main() {
    string infix;  // exp should only include (0-9), +, -, *, /, ()
    cout << "Enter the infix expression : ";
    getline(cin, infix);
    cout << solve(infix) << "\n";
}