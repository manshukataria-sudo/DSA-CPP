#include <iostream>
#include <vector>

using namespace std;
class Solution {
   public:
    void dfs(vector<vector<char>>& board, int sR, int sC) {
        int rows = board.size();
        int cols = board[0].size();

        board[sR][sC] = 'V';

        int pR[] = {-1, 1, 0, 0};
        int pC[] = {0, 0, -1, 1};
        for (int i = 0; i < 4; i++) {
            int nR = sR + pR[i];
            int nC = sC + pC[i];
            if (nR >= 0 && nR < rows && nC >= 0 && nC < cols && board[nR][nC] == 'O') {
                dfs(board, nR, nC);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        for (int i = 0; i < cols; i++) {
            if (board[0][i] == 'O') {
                dfs(board, 0, i);
            }
            if (board[rows - 1][i] == 'O') {
                dfs(board, rows - 1, i);
            }
        }
        for (int i = 1; i < rows - 1; i++) {
            if (board[i][0] == 'O') {
                dfs(board, i, 0);
            }
            if (board[i][cols - 1] == 'O') {
                dfs(board, i, cols - 1);
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == 'V') {
                    board[i][j] = 'O';
                } else if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};