#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
// using the brute force
class Solution {
   public:
    vector<vector<bool>> visited;
    void dfs(int s_row, int s_col, vector<pair<int, int>>& island, vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        visited[s_row][s_col] = true;
        island.push_back({s_row, s_col});
        int p_row[] = {-1, 1, 0, 0};
        int p_col[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nR = p_row[i] + s_row;
            int nC = p_col[i] + s_col;
            if (nR >= 0 && nR < rows && nC >= 0 && nC < cols && !visited[nR][nC] &&
                grid[nR][nC] == 1) {
                dfs(nR, nC, island, grid);
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<pair<int, int>> island_1;
        vector<pair<int, int>> island_2;
        visited.resize(rows, vector<bool>(cols, false));
        int island_no = 1;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (!visited[i][j] && island_no == 1 && grid[i][j] == 1) {
                    dfs(i, j, island_1, grid);
                    island_no = 2;
                } else if (!visited[i][j] && island_no == 2 && grid[i][j] == 1) {
                    dfs(i, j, island_2, grid);
                    break;
                }
            }
        }
        int ans = INT_MAX;
        for (int i = 0; i < island_1.size(); i++) {
            int parent_row = island_1[i].first;
            int parent_col = island_1[i].second;
            for (int j = 0; j < island_2.size(); j++) {
                int curr_row = island_2[j].first;
                int curr_col = island_2[j].second;
                ans = min(ans, abs(parent_row - curr_row) + abs(parent_col - curr_col));
            }
        }
        return ans - 1;
    }
};
