#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;
int minCost(vector<int>& height, int i) {
    if (i == height.size() - 1) {
        return 0;
    }
    if (i == height.size() - 2) {
        return abs(height[i] - height[i + 1]);
    }
    if(dp[i] != -1){
        return dp[i];
    }
    return dp[i] = min(abs(height[i] - height[i + 1]) + minCost(height, i + 1),
               abs(height[i] - height[i + 2]) + minCost(height, i + 2));
}
int main() {
    int N;
    cin >> N;
    vector<int> height(N);
    for (int i = 0; i < N; i++) {
        cin >> height[i];
    }
    dp.resize(N+5, -1);
    cout << minCost(height, 0);
}