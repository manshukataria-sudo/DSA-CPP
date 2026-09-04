#include <iostream>
#include <vector>

using namespace std;
class Solution {
   public:
    vector<vector<bool>> visited;
    int dfs(int sRow, int sCol, vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        visited[sRow][sCol] = true;
        int pR[] = {-1, 1, 0, 0};
        int pC[] = {0, 0, -1, 1};
        int ans = 0;
        for (int i = 0; i < 4; i++) {
            int nR = pR[i] + sRow;
            int nC = pC[i] + sCol;
            if (nR >= 0 && nR < rows && nC >= 0 && nC < cols && !visited[nR][nC] &&
                grid[nR][nC] == 1) {
                ans += dfs(nR, nC, grid);
            }
        }
        return ans + 1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        visited.resize(rows, vector<bool>(cols, false));
        int area = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    area = max(area, dfs(i, j, grid));
                }
            }
        }
        return area;
    }
};
int main() {
    cout << '\n';
    return 0;
}