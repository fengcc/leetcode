class Solution {
public:
    int totalNQueens(int n) {
        vector<bool> flags(5*n-2, true);
        int count = 0;
        countNQueens(flags, count, 0, n);
        return count;
    }
private:
    void countNQueens(vector<bool> &flags, int &count, int row, int n) {
        if (row == n) {
            count++;
            return;
        } else {
          for (int col = 0; col < n; col++) {
              if (flags[col] && flags[n + row + col] && flags[n + 2*n-1 + n-1+col-row]) {
                  flags[col] = flags[n + row + col] = flags[n + 2*n-1 + n-1+col-row] = false;
                  countNQueens(flags, count, row+1, n);
                  flags[col] = flags[n + row + col] = flags[n + 2*n-1 + n-1+col-row] = true;
              }
          }  
        }
    }
};