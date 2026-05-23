#include <iostream>
#include <stack>
#include <string>
using namespace std;
int priority(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else if (op == '(' || op == ')') {
        return 3;
    }
    return 0;
}
int solveExp(int op1, char op, int op2) {
    if (op == '+') {
        return op1 + op2;
    } else if (op == '-') {
        return op1 + op2;
    } else if (op == '*') {
        return op1 + op2;
    }
    return op1 / op2;
}
bool isNum(char ch) {
    if (((int)ch >= 48 && (int)ch <= 57)) {
        return true;
    }
    return false;
}
int intOf(char ch) { return (int)ch - 48; }
int solveInfix(string& exp) {
    stack<int> operands;
    stack<char> operators;
    int i = 0, n = exp.size();
    while (i < n) {
        if (isNum(exp[i])) {
            operands.push(intOf(exp[i]));
        } else if (!operators.size() || priority(exp[i]) > priority(operators.top())) {
            operators.push(exp[i]);
        } else {
            while (operators.size() && priority(operators.top()) >= priority(exp[i])) {
                int op2 = operands.top();
                operands.pop();
                int op1 = operands.top();
                operands.pop();
                operands.push(solveExp(op1, operators.top(), op2));
                operators.pop();
            }
            operators.push(exp[i]);
        }
        i++;
    }
    if (operators.size()) {
        while (operators.size()) {
            int op2 = operands.top();
            operands.pop();
            int op1 = operands.top();
            operands.pop();
            operands.push(solveExp(op1, operators.top(), op2));
            operators.pop();
        }
    }
    return operands.top();
}
int main() {
    string infix = "2+6*4/8-3";
    cout << solveInfix(infix);
}