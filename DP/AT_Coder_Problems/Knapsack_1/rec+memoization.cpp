#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, W;
    cin >> N >> W;
    vector<vector<int>> arr(N + 1, vector<int>(3));
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 2; j++) {
            cin >> arr[i][j];
        }
    }
}