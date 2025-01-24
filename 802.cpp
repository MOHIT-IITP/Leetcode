#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  static vector<int> eventualSafeNodes(vector<vector<int>> &graph) {
    const int n = graph.size();
    vector<int> indeg(n, 0);
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
      for (int j = graph[i].size() - 1; j >= 0; j--) {
        int v = graph[i][j];
        adj[v].push_back(i);
        indeg[i]++;
      }
    }

    queue<int> q;

    for (int i = n - 1; i >= 0; i--)
      if (indeg[i] == 0)
        q.push(i);

    vector<bool> safe(n, 0);
    while (!q.empty()) {
      int x = q.front();
      //    cout<<x<<"->";;
      q.pop();
      safe[x] = 1;
      for (int y : adj[x]) {
        //        cout<<y<<",";
        if (--indeg[y] == 0)
          q.push(y);
      }
      //    cout<<endl;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
      if (safe[i])
        ans.push_back(i);
    return ans;
  }
};
int main() { return 0; }
