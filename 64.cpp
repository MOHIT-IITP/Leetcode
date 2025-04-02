
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

int main(){
  return 0;
}

// doing the same question from top to down approach
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
