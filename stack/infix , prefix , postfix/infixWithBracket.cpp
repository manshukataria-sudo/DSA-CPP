#include <iostream>
#include <stack>
using namespace std;
int priority(char op) {
    if (op == '+' || op == '-')
        return 1;
    else
        return 2;
}
int solve(int val1, char op, int val2) {
    if (op == '+')
        return val1 + val2;
    else if (op == '-')
        return val1 - val2;
    else if (op == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int solveInfix(string& str) {
    int n = str.length();
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < n; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            val.push(str[i] - 48);
        } else if (str[i] == ')') {
            while (op.top() != '(') {
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char fun = op.top();
                op.pop();
                val.push(solve(val1, fun, val2));
            }
            op.pop();
        } else if (op.size() == 0 || priority(op.top()) < priority(str[i]) || op.top() == '(') {
            op.push(str[i]);
        } else {
            while (op.size() > 0 && priority(op.top()) >= priority(str[i])) {
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char operation = op.top();
                val.push(solve(val1, operation, val2));
                op.pop();
            }
            op.push(str[i]);
        }
    }
    while (op.size() > 0) {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char operation = op.top();
        op.pop();
        val.push(solve(val1, operation, val2));
    }
    return val.top();
}

int main() {
    string str = "(6+2)+(2-6*4+3)*4/8-3";
    cout << "Solution of the infix is : " << solveInfix(str) << "\n";
    cout << (6 + 2) + (2 - 6 * 4 + 3) * 4 / 8 - 3;
}