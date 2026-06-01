#include <iostream>
#include <stack>
#include <string>
using namespace std;
int prior(char op) {
    if (op == '+' || op == '-')
        return 1;
    return 2;
}
string solve(string val1, string val2, char op) {
    string sol = "";
    sol = op;
    return sol + val1 + val2;
}
string prefix(string& str) {
    int n = str.size();
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < n; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            val.push(to_string(str[i] - 48));
        } else if (str[i] == ')') {
            while (op.top() != '(') {
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char fun = op.top();
                op.pop();
                val.push(solve(val1, val2, fun));
            }
            op.pop();
        } else if (op.size() == 0 || op.top() == '(' || prior(op.top()) < prior(str[i]))
            op.push(str[i]);
        else {
            while (op.size() > 0 && prior(op.top()) >= prior(str[i])) {
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char fun = op.top();
                op.pop();
                val.push(solve(val1, val2, fun));
            }
            op.push(str[i]);
        }
    }
    while (op.size() > 0) {
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char fun = op.top();
        op.pop();
        val.push(solve(val1, val2, fun));
    }
    return val.top();
}
int main() {
    string infix = "8+(9-3)*4/8+1";
    cout << "Prefix form is : " << prefix(infix);
}