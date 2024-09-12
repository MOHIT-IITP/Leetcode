#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void dfs(int row, int col, vector<vector<int>> &visit,
           vector<vector<char>> &grid) {
    // check the current position is not valid or not
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() ||
        visit[row][col] == 1 || grid[row][col] == '0') {
      return;
    }

    visit[row][col] = 1;

    dfs(row - 1, col, visit, grid); // up
    dfs(row + 1, col, visit, grid); // down
    dfs(row, col - 1, visit, grid); // left
    dfs(row, col + 1, visit, grid); // right
  }

public:
  int numIslands(vector<vector<char>> &grid) {
    if (grid.empty())
      return 0;

    int row = grid.size();
    int col = grid[0].size();
    int count = 0;
    vector<vector<int>> visit(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        if (visit[i][j] == 0 && grid[i][j] == '1') {
          dfs(i, j, visit, grid);
          count++;
        }
      }
    }
    return count;
  }
};

int main() { return 0; }
