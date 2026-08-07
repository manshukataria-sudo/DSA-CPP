#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;
int f(int K, int L, int m, char turn) {
    if (m == 0 || m == 1 || m == K || m == L) {
        return 1;
    }
    if (dp[m] != -1) {
        if (dp[m] == 0) {
            if (turn == 'A') {
                return 'B';
            } else {
                return 'A';
            }
        } else {
            return turn;
        }
    }
    (turn == 'A') ? turn = 'B' : turn = 'A';
    int win1, win2, win3;
    if (m - 1 >= 0) {
        dp[m - 1] = win1 = f(K, L, m - 1, turn);
    }
    if (m - K >= 0) {
        dp[m - K] = win2 = f(K, L, m - K, turn);
    }
    if (m - L >= 0) {
        dp[m - L] = win3 = f(K, L, m - L, turn);
    }
    if (win1 == 1 || win2 == 1 || win3 == 1) {
        return dp[m] = 1;
    } else {
        return dp[m] = 0;
    }
}
int main() {
    int K, L, m;  // boy can pick 1, K or L coins in one turn
    cin >> K >> L;
    // vector<int> coins(m);
    cout << "Enter the no. of coins : ";
    cin >> m;
    dp.resize(m + 1, -1);
    // for (int i = 0; i < m; i++) {
    //     cin >> coins[i];
    // }
    if (f(K, L, m, 'A')) {
        cout << 'A';
    } else {
        cout << 'B';
    }
}