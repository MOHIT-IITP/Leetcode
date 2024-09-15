#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
  bool findSafeWalk(vector<vector<int>> &grid, int health) {
    int m = grid.size(), n = grid[0].size();
    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, health - grid[0][0]});
    vector<vector<int>> v(m, vector<int>(n, -1));
    v[0][0] = health - grid[0][0];
    while (!q.empty()) {
      auto [p, ch] = q.front();
      q.pop();
      int x = p.first, y = p.second;
      if (x == m - 1 && y == n - 1 && ch > 0) {
        return true;
      }
      for (int i = 0; i < 4; i++) {
        int nx = x + d[i][0];
        int ny = y + d[i][1];
        if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
          int nh = ch - grid[nx][ny];
          if (nh > 0 && nh > v[nx][ny]) {
            v[nx][ny] = nh;
            q.push({{nx, ny}, nh});
          }
        }
      }
    }
    return false;
  }
};

int main() { return 0; }
