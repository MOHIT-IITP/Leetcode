#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void bfs(int &node, vector<int> &vis, vector<vector<int>> &adj,
           vector<int> &compo) {
    queue<int> q;
    q.push(node);
    vis[node] = 1;
    while (!q.empty()) {
      int newNode = q.front();
      q.pop();
      compo.push_back(newNode);
      for (auto it : adj[newNode]) {
        if (!vis[it]) {
          q.push(it);
          vis[it] = 1;
        }
      }
    }
  };

  int countCompleteComponents(int n, vector<vector<int>> &edges) {
    vector<vector<int>> adj(n);
    for (auto it : edges) {
      adj[it[0]].push_back(it[1]);
      adj[it[1]].push_back(it[0]);
    }

    vector<int> vis(n, 0);
    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (vis[i] != 1) {
        vector<int> compo;
        bfs(i, vis, adj, compo);
        bool haina = true;
        for (auto it : compo) {
          for (auto kit : adj[it]) {
            if (adj[kit].size() != compo.size() - 1) {
              haina = false;
              break;
            }
          }
        }
        if (haina)
          ans++;
      }
    }
    return ans;
  }
} int main() {
  return 0;
}
