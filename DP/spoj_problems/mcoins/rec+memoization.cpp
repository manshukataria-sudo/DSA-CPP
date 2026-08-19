#include <climits>
#include <iostream>
#include <vector>
using namespace std;
vector<char> dp;
char f(int coins, int K, int L) {
    if (coins == 1 || coins == K || coins == L) {
        return 'w';
    }
    if (dp[coins] != 'u') {
        return dp[coins];
    }
    char st1, st2, st3;
    (coins - 1 > 0) ? st1 = f(coins - 1, K, L) : st1 = 'u';
    (coins - K > 0) ? st2 = f(coins - K, K, L) : st2 = 'u';
    (coins - L > 0) ? st3 = f(coins - L, K, L) : st3 = 'u';
    if (st1 == 'l' || st2 == 'l' || st3 == 'l') {
        return dp[coins] = 'w';
    } else {
        return dp[coins] = 'l';
    }
}
int main() {
    int K, L, m;
    cin >> K >> L >> m;
    vector<int> games(m);
    for (int i = 0; i < m; i++) {
        cin >> games[i];
    }
    int maxEle = INT_MIN;
    for (int ele : games) {
        maxEle = max(ele, maxEle);
    }
    dp.resize(maxEle + 1, 'u');
    string ans = "";
    for (int ele : games) {
        ans += f(ele, K, L);
    }
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == 'w') {
            ans[i] = 'A';
        } else {
            ans[i] = 'B';
        }
    }
    cout << ans << "\n";
}