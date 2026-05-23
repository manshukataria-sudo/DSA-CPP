#include <climits>
#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;
int minCost(vector<int>& height, int i, int K) {
    if (i == height.size() - 1) {
        return 0;
    }
    int ans = INT_MAX;
    if (dp[i] != -1) {
        return dp[i];
    }
    for (int j = 1; j <= K; j++) {
        if (i + j <= height.size() - 1) {
            ans = min(ans, abs(height[i] - height[i + j]) + minCost(height, i + j, K));
        }
    }
    return dp[i] = ans;
}
int main() {
    int N, K;
    cin >> N >> K;
    vector<int> height(N);
    for (int i = 0; i < N; i++) {
        cin >> height[i];
    }
    dp.resize(N + 3, -1);
    cout << minCost(height, 0, K);
}