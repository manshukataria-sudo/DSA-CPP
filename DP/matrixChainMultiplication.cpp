#include <climits>
#include <iostream>
#include <vector>
using namespace std;

// top down recursion + memoisation
/*int f(vector<int>& dim, int start, int end, vector<vector<int>>& dp) {
    if (end - start == 1) {
        return 0;
    }
    if (dp[start][end] != -1) {
        return dp[start][end];
    }
    int ans = INT_MAX;
    for (int i = start + 1; i <= end - 1; i++) {
        ans = min(dim[start] * dim[i] * dim[end] + f(dim, start, i, dp) + f(dim, i, end, dp), ans);
    }
    return dp[start][end] = ans;
}
int main() {
    int n;
    cout << "Enter the vector size : ";
    cin >> n;
    vector<int> dim(n);
    cout << "Enter the vector elements : ";
    for (int i = 0; i < n; i++) {
        cin >> dim[i];
    }
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout << f(dim, 0, dim.size() - 1, dp) << "\n";
}

*/

// bottom up approach

int main() {
    int n;
    cout << "Enter the vector size : ";
    cin >> n;
    vector<int> dim(n);
    cout << "Enter the vector elements : ";
    for (int i = 0; i < n; i++) {
        cin >> dim[i];
    }
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = n - 3; i >= 0; i--) {
        for (int j = i + 2; j < n; j++) {
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + dim[i] * dim[j] * dim[k]);
            }
        }
    }
    cout << dp[0][n - 1] << "\n";
}