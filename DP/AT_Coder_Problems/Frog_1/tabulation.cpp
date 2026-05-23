#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> height(N + 5);
    for (int i = 1; i <= N; i++) {
        cin >> height[i];
    }
    vector<int> dp(N + 3);
    dp[N] = 0;
    dp[N - 1] = abs(height[N - 1] - height[N]);
    for (int i = N - 2; i >= 1; i--) {
        dp[i] = min(abs(height[i] - height[i + 1]) + dp[i + 1],
                    abs(height[i] - height[i + 2]) + dp[i + 2]);
    }
    cout<<dp[1];
}