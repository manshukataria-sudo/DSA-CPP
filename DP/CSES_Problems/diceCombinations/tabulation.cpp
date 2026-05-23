#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 7, 1);
    for (int i = 2; i <= n; i++) {
        long long sum = 0;
        for (int j = 1; j <= 6; j++) {
            if (i - j < 0)
                break;
            sum += dp[i - j];
        }
        dp[i] = sum % 1000000007;
    }
    cout << dp[n];
}
