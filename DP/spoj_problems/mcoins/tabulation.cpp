#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int K, L, m;
    cin >> K >> L >> m;
    vector<int> games(m);
    for (int i = 0; i < m; i++) {
        cin >> games[i];
    }
    int max_ele = INT_MIN;
    for (int ele : games) {
        max_ele = max(ele, max_ele);
    }
    vector<bool> dp(max_ele + 1);
    dp[1] = dp[K] = dp[L] = 1;
    for (int i = 2; i <= max_ele; i++) {
        if (i - 1 >= 0 && !dp[i - 1]) {
            dp[i] = 1;
        } else if (i - K >= 0 && !dp[i - K]) {
            dp[i] = 1;
        } else if (i - L >= 0 && !dp[i - L]) {
            dp[i] = 1;
        } else {
            dp[i] = 0;
        }
    }
    string ans = "";
    for (int i = 0; i < m; i++) {
        (dp[games[i]] == 1) ? ans += 'A' : ans += 'B';
    }
    cout << ans << "\n";
}