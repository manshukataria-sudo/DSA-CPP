#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
   public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }
        while (q.size()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            int pR[] = {-1, 1, 0, 0};
            int pC[] = {0, 0, -1, 1};
            for (int i = 0; i < 4; i++) {
                int nR = pR[i] + row;
                int nC = pC[i] + col;
                if (nR >= 0 && nR < rows && nC >= 0 && nC < cols) {
                    if (grid[nR][nC] == INT_MAX) {
                        grid[nR][nC] = 1 + grid[row][col];
                        q.push({nR, nC});
                    }
                }
            }
        }
    }
};
