#include <iostream>
#include <stack>
using namespace std;
int f(int val1, int val2, char fun) {
    if (fun == '+') {
        return val1 + val2;
    } else if (fun == '-') {
        return val1 - val2;
    } else if (fun == '*') {
        return val1 * val2;
    }
    return val1 / val2;
}
int solvePrefix(string& str) {
    int n = str.size();
    stack<int> val;
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] >= 48 && str[i] <= 57) {
            val.push(str[i] - 48);
        } else {
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            char fun = str[i];
            val.push(f(val1, val2, fun));
        }
    }
    return val.top();
}
int main() {
    string prefix;
    cout << "Enter the prefix expression : ";
    cin >> prefix;
    cout << solvePrefix(prefix) << "\n";

    cout << 6 + 8 * 4 / (2 - 3) * 3 - 1 << "\n";
}
// 6+8*4/(2-3)*3-1
//    -+6*/*84-2331