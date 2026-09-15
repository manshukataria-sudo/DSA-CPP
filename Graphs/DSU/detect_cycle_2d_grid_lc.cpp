#include <iostream>
#include <vector>

using namespace std;
class Solution {
   public:
    bool dfs(int sRow, int sCol, vector<vector<bool>>& visited, vector<vector<char>>& grid,
             int pRow, int pCol) {
        int rows = grid.size();
        int cols = grid[0].size();
        visited[sRow][sCol] = true;
        int pR[] = {-1, 1, 0, 0};
        int pC[] = {0, 0, -1, 1};
        for (int i = 0; i < 4; i++) {
            int nR = pR[i] + sRow;
            int nC = pC[i] + sCol;
            if (nR >= 0 && nR < rows && nC >= 0 && nC < cols) {
                if (!visited[nR][nC] && grid[nR][nC] == grid[sRow][sCol]) {
                    bool ans = dfs(nR, nC, visited, grid, sRow, sCol);
                    if (ans) {
                        return true;
                    }
                } else if (visited[nR][nC] && grid[nR][nC] == grid[sRow][sCol] && nR != pRow &&
                           nC != pCol) {
                    return true;
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (!visited[i][j]) {
                    bool cycle = dfs(i, j, visited, grid, -1, -1);
                    if (cycle) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
int main() {
    cout << '\n';
    return 0;
}