#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;
int f(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    long long count = 0;
    for (int i = 1; i <= 6; i++) {
        if (n - i < 0) {
            break;
        }
        count += f(n - i);
    }
    return dp[n] = count % 1000000007;
}
int main() {
    int n;
    cin >> n;
    dp.resize(n + 7, -1);
    cout << f(n);
}