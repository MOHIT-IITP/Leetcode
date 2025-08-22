
// memoization method
#include <bits/stdc++.h>
using namespace std;

// doing this question from down to up approach
class Solution {
private:
  int recur(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp) {
    if (i == 0 && j == 0)
      return grid[i][j];
    if (i < 0 || j < 0)
      return 1e9;
    if (dp[i][j] != -1)
      return dp[i][j];
    int left = grid[i][j] + recur(i - 1, j, grid, dp);
    int up = grid[i][j] + recur(i, j - 1, grid);
    return dp[i][j] = min(left, up);
  }

public:
  int minPathSum(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return recur(n - 1, m - 1, grid, dp);
  }
}

// memoization method

class Solution {
private:
  int recur(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp) {
    int n = grid.size();
    int m = grid[0].size();
    if (i == n - 1 && j == m - 1)
      return grid[i][j];
    if (i < n - 1 || j < m - 1)
      return 1e9;
    if (dp[i][j] != -1)
      return dp[i][j];
    int left = grid[i][j] + recur(i, j + 1, grid, dp);
    int up = grid[i][j] + recur(i + 1, j, grid);
    return dp[i][j] = min(left, up);
  }

public:
  int minPathSum(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return recur(0, 0, grid, dp);
  }
}


// tabulisation method
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<vector<int>> dp(r, vector<int> (c, 0));

        dp[0][0] = grid[0][0];

        for(int i = 0; i < r ; i++ ){
            for( int  j = 0; j < c ; j++){
                if(i == 0 && j == 0) continue;
                
                int left = INT_MAX, up = INT_MAX;
                
                if(i > 0) left = dp[i-1][j];
                if(j > 0) up = dp[i][j-1];

                dp[i][j] = grid[i][j] + min(left , up);
            }
        }
        return dp[r-1][c-1];
    }
};
