#include <iostream>
#include <stack>
#include <string>
using namespace std;

inline int prior(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    return 1;
}
int solve(int val1, char fun, int val2)
{
    if (fun == '*')
        return val1 * val2;
    else if (fun == '/')
        return val1 / val2;
    else if (fun == '+')
        return val1 + val2;
    return val1 - val2;
}
int solInfix(string &infix) // "2+6*4/8-3";
{
    int n = infix.size();
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < n; i++)
    {
        if (infix[i] >= 48 && infix[i] <= 57)
            val.push(infix[i] - 48);
        else if (op.size() == 0 || prior(op.top()) < prior(infix[i]))
            op.push(infix[i]);
        else
        {
            while (op.size() > 0 && prior(infix[i]) <= prior(op.top()))
            {
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char fun = op.top();
                val.push(solve(val1, fun, val2));
                op.pop();
            }
            op.push(infix[i]);
        }
    }
    while (op.size() > 0)
    {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char fun = op.top();
        op.pop();
        val.push(solve(val1, fun, val2));
    }
    return val.top();
}

int main()
{
    string infix = "2+9*3/9-2-2*6/6-2";
    cout << "Solution of the infix is : " << solInfix(infix);
}
