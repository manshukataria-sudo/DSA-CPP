#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Solution {
   public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> rotten;
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        int freshCount = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 2) {
                    rotten.push({i, j});
                    visited[i][j] = true;
                }
                if (grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }
        int answer = 0;
        while (rotten.size()) {
            int n = rotten.size();
            bool flag = false;
            for (int i = 0; i < n; i++) {
                int row = rotten.front().first;
                int col = rotten.front().second;
                rotten.pop();
                int pR[] = {-1, 1, 0, 0};
                int pC[] = {0, 0, -1, 1};
                for (int i = 0; i < 4; i++) {
                    int nR = row + pR[i];
                    int nC = col + pC[i];
                    if (nR >= 0 && nR < rows && nC >= 0 && nC < cols && !visited[nR][nC] &&
                        grid[nR][nC] != 2 && grid[nR][nC] != 0) {
                        grid[nR][nC] = 2;
                        visited[nR][nC] = true;
                        freshCount--;
                        rotten.push({nR, nC});
                        flag = true;
                    }
                }
            }
            if (flag) {
                answer++;
            }
        }
        return (freshCount == 0) ? answer : -1;
    }
};