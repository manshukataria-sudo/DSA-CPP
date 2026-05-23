#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
vector<int> dp(1e6 + 5, -1);
vector<int> getDigits(int n) {
    vector<int> result;
    while (n > 0) {
        if (n % 10 != 0) {
            result.push_back(n % 10);
        }
        n /= 10;
    }
    return result;
}
int minSteps(int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 10) {
        return 1;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    vector<int> digits = getDigits(n);
    int ans = INT_MAX;
    for (int ele : digits) {
        ans = min(ans, 1 + minSteps(n - ele)); 
    }
    return dp[n] = ans;
}
int main() {
    int n;
    cin >> n;
    cout << minSteps(n);
}