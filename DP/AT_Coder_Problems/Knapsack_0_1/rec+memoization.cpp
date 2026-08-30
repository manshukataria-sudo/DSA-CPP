#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;
int f(int W, vector<vector<int>>& arr, int i) {
    if (i >= arr.size()) {
        return 0;
    }
    if (W == 0) {
        return 0;
    }
    int nC = f(W, arr, i + 1);
    int yC = 0;
    if (W - arr[i][0] >= 0) {
        yC = arr[i][1] + f(W - arr[i][0], arr, i + 1);
    }

    return max(nC, yC);
}

// W = 5, val[] = [10, 40, 30, 50], wt[] = [5, 4, 2, 3]
// Output: 80
int main() {
    int N, W;
    cin >> N >> W;
    vector<vector<int>> arr(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "\n" << f(W, arr, 0) << "\n";
}