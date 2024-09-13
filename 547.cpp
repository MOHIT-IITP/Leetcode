#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void dfs(vector<bool> &visit, vector<vector<int>> &isConnected, int i) {
    visit[i] = true;
    int n = isConnected.size();
    for (int j = 0; j < n; j++) {
      if (!visit[j] && isConnected[i][j] == 1) {
        dfs(visit, isConnected, j);
      }
    }
  }

public:
  int findCircleNum(vector<vector<int>> &isConnected) {
    int count = 0;
    int n = isConnected.size();
    vector<bool> visit(n, false);
    for (int i = 0; i < n; i++) {
      if (!visit[i]) {
        count++;
        dfs(visit, isConnected, i);
      }
    }
    return count;
  }
};

int main() { return 0; }
