#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 7, 1);
    for (int i = 10; i <= n; i++) {
        int ans = INT_MAX;
        int temp = i;
        while (temp) {
            if (temp % 10 != 0) {
                ans = min(ans, dp[i - (temp % 10)]);
            }
            temp /= 10;
        }
        dp[i] = ans + 1;
    }
    cout << dp[n] << "\n";
}