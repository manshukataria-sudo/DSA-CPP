#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
vector<int> coin;
vector<int> dp(1000007, INT_MIN);
int minCoins(int x) {
    if (x < 0) {
        return INT_MAX;
    }
    if (x == 0) {
        return 0;
    }
    if (dp[x] != INT_MIN) {
        return dp[x];
    }
    int ans = INT_MAX;
    for (int i = 0; i < coin.size(); i++) {
        int temp = minCoins(x - coin[i]);
        if (temp != -1) {
            ans = min(ans, temp);
        }
    }
    if (ans == INT_MAX) {
        return dp[x] = -1;
    }
    return dp[x] = ans + 1;
}
int main() {
    int n, x;
    cin >> n >> x;
    coin.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    cout << minCoins(x);
}