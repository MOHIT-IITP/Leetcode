#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int minimumEffortPath(vector<vector<int>> &heights) {
    int row = heights.size();
    int col = heights[0].size();
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

    vector<vector<int>> vis(row, vector<int>(col, INT_MAX));
    vis[0][0] = 0;
    pq.push({0, 0, 0});

    int rdir[] = {1, 0, -1, 0};
    int cdir[] = {0, 1, 0, -1};

    while (!pq.empty()) {
      int curEff = pq.top()[0];
      int currRow = pq.top()[1];
      int currCol = pq.top()[2];
      pq.pop();

      if (currRow == row - 1 && currCol == col - 1) {
        return curEff;
      }

      for (int i = 0; i < 4; i++) {
        int newRow = currRow + rdir[i];
        int newCol = currCol + cdir[i];

        if (newRow < 0 || newRow >= row || newCol < 0 || newCol >= col) {
          continue;
        }

        int newEff = max(
            curEff, abs(heights[currRow][currCol] - heights[newRow][newCol]));

        if (newEff < vis[newRow][newCol]) {
          vis[newRow][newCol] = newEff;
          pq.push({newEff, newRow, newCol});
        }
      }
    }

    return -1;
  }
};

int main() { return 0; }
