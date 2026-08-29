#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Solution {
   public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        vector<vector<int>> result(rows, vector<int>(cols, 0));
        queue<pair<int, int>> q;
        int noOfOnes = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) {
                    q.push({i, j});
                    visited[i][j] = true;
                } else {
                    noOfOnes++;
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
                int nR = row + pR[i];
                int nC = col + pC[i];
                if (nR >= 0 && nR < rows && nC >= 0 && nC < cols && visited[nR][nC] == false) {
                    result[nR][nC] = result[row][col] + 1;
                    visited[nR][nC] = true;
                    q.push({nR, nC});
                    noOfOnes--;
                }
                if (noOfOnes == 0) {
                    return result;
                }
            }
        }
        return result;
    }
};