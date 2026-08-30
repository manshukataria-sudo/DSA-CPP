#include <iostream>
#include <queue>
#include <vector>

using namespace std;
class Solution {
   public:
    vector<vector<bool>> visited;
    void dfs(int s_row, int s_col, vector<vector<int>>& grid, queue<pair<int, int>>& island) {
        int rows = grid.size();
        int cols = grid[0].size();

        visited[s_row][s_col] = true;
        island.push({s_row, s_col});

        int p_row[] = {-1, 1, 0, 0};
        int p_col[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nR = p_row[i] + s_row;
            int nC = p_col[i] + s_col;
            if (nR >= 0 && nR < rows && nC >= 0 && nC < cols && !visited[nR][nC] &&
                grid[nR][nC] == 1) {
                dfs(nR, nC, grid, island);
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        visited.resize(rows, vector<bool>(cols, false));
        queue<pair<int, int>> island;
        for (int i = 0; i < rows; i++) {
            bool flag = true;
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    dfs(i, j, grid, island);
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                break;
            }
        }
        int level = 1;
        while (island.size()) {
            int n = island.size();
            for (int i = 0; i < n; i++) {
                int row = island.front().first;
                int col = island.front().second;
                island.pop();
                int p_row[] = {-1, 1, 0, 0};
                int p_col[] = {0, 0, -1, 1};

                for (int i = 0; i < 4; i++) {
                    int nR = p_row[i] + row;
                    int nC = p_col[i] + col;
                    if (nR >= 0 && nR < rows && nC >= 0 && nC < cols && !visited[nR][nC]) {
                        if (grid[nR][nC] == 1) {
                            return level - 1;
                        }
                        visited[nR][nC] = true;
                        island.push({nR, nC});
                    }
                }
            }
            level++;
        }
        return 0;
    }
};