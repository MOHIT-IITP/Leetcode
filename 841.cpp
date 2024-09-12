#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool canVisitAllRooms(vector<vector<int>> &rooms) {
    int n = rooms.size();

    unordered_set<int> visit;

    dfs(rooms, visit, 0);
    if (visit.size() == rooms.size())
      return true;
    return false;
  }

  void dfs(vector<vector<int>> &rooms, unordered_set<int> &visit, int n) {
    if (visit.find(n) != visit.end())
      return;

    visit.insert(n);

    for (int key : rooms[n]) {
      dfs(rooms, visit, key);
    }
  }
};

int main() { return 0; }
