/*
comes from https://leetcode.com/discuss/35128/accepted-solution-use-backtracking-bitmask-easy-understand
*/

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string> > res;
        vector<string> nqueen(n, string(n, '.'));
        vector<bool> flags(5*n-2, true);
        
        solveNQueens(res, nqueen, flags, 0, n);
        
        return res;
    }
private:
    void solveNQueens(vector<vector<string> > &res, vector<string> &nqueen, vector<bool> &flags, int row, int n) {
        if (row == n) {
            res.push_back(nqueen);
            return;
        }
        else {
            for (int col = 0; col < n; col++) {
                if (flags[col] && flags[n + row + col] && flags[n + 2*n-1 + n-1 + col - row]) {
                    flags[col] = flags[n + row + col] = flags[n + 2*n-1 + n-1 + col - row] = false;
                    nqueen[row][col] = 'Q';
                    solveNQueens(res, nqueen, flags, row+1, n);
                    nqueen[row][col] = '.';
                    flags[col] = flags[n + row + col] = flags[n + 2*n-1 + n-1 + col - row] = true;
                }
            }
        }
    }
};