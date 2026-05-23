#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<vector<int>> arr(N + 1, vector<int>(4));
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> dp(N + 1, vector<int>(4));
    for (int i = 1; i <= 3; i++) {
        dp[1][i] = arr[1][i];
    }
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            int ans = INT_MIN;
            for (int k = 1; k <= 3; k++) {
                if (k != j) {
                    ans = max(ans, dp[i-1][k]);
                }
            }
            dp[i][j] = ans + arr[i][j];
        }
    }
    int ans = INT_MIN;
    for (int i = 1; i <= 3; i++) {
        ans = max(ans, dp[N][i]);
    }
    cout << ans;
}