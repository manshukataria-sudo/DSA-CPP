#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> dp;
int maxHappy(vector<vector<int>>& arr, int row, int col) {
    if (row == arr.size() - 1) {
        return arr[row][col];
    }
    if (dp[row][col] != -1) {
        return dp[row][col];
    }
    int ans = INT_MIN;
    for (int i = 1; i <= 3; i++) {
        if (i == col) {
            continue;
        }
        ans = max(ans, maxHappy(arr, row + 1, i));
    }
    return dp[row][col] = ans + arr[row][col];
}
int main() {
    int N;
    cin >> N;
    vector<vector<int>> arr(N + 1, vector<int>(4));
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> arr[i][j];
        }
    }
    dp.resize(N + 1, vector<int>(4, -1));
    int ans = INT_MIN;
    for (int i = 1; i <= 3; i++) {
        ans = max(ans, maxHappy(arr, 1, i));
    }
    cout << ans;
}

