#include <iostream>
#include <vector>
using namespace std;
#define inf INT_MAX
int f(int n) {
    if (n == 1) {
        return 0;
    }
    return min(f(n - 1), min((n % 2 == 0) ? f(n / 2) : inf, (n % 3 == 0) ? f(n / 3) : inf)) + 1;
}
// dp top down recursion using memoisation
vector<int> dp;
int ftd(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2 or n == 3) {
        return 1;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    return dp[n] =
               1 + min(f(n - 1), min((n % 2 == 0) ? f(n / 2) : inf, (n % 3 == 0) ? f(n / 3) : inf));
}
// bottom up approach using loop
int fbu(int n) {
    vector<int> bu(n + 5);
    if (n == 1) {
        return 0;
    }
    if (n == 2 || n == 3) {
        return 1;
    }
    bu[1] = 0;
    bu[2] = bu[3] = 1;
    for (int i = 4; i <= n; i++) {
        bu[i] =
            1 + min(bu[i - 1], min((i % 2 == 0) ? bu[i / 2] : inf, (i % 3 == 0) ? bu[i / 3] : inf));
    }
    return bu[n];
}
int main() {
    // as it is a greedy approach
    // gives wrong ans
    // int n = 10;
    // int count = 0;
    // while (n != 1) {
    //     if (n % 3 == 0) {
    //         n /= 3;
    //         count++;
    //     } else if (n % 2 == 0) {
    //         n /= 2;
    //         count++;
    //     } else {
    //         n -= 1;
    //         count++;
    //     }
    // }
    // cout << count;

    // recursive solution
    int n = 4;
    dp.clear();
    dp.resize(n + 5, -1);
    // cout << f(n) << endl;
    cout << ftd(n) << endl;
    cout << fbu(n) << "\n";
}