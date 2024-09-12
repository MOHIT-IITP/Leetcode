// done by mohit
class Solution {
private:
  vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  void dfs(int row, int col, vector<vector<char>> &grid,
           vector<vector<bool>> &visited) {
    visited[row][col] = true;
    for (auto dir : dirs) {
      int newR = row + dir.first;
      int newC = col + dir.second;
      if (newR >= 0 && newC >= 0 && newR < grid.size() &&
          newC < grid[0].size() && !visited[newR][newC] &&
          grid[newR][newC] == '1') {
        dfs(newR, newC, grid, visited);
      }
    }
  };

public:
  int numIslands(vector<vector<char>> &grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    int count = 0;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (!visited[i][j] && grid[i][j] == '1') {
          dfs(i, j, grid, visited);
          count++;
        }
      }
    }
    return count;
  }
};
