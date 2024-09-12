#include <bits/stdc++.h>
using namespace std;

int robotSim(vector<int> &commands, vector<vector<int>> &obstacles) {
  unordered_set<string> st;
  for (vector<int> &obs : obstacles) {
    string key = to_string(obs[0]) + "_" + to_string(obs[1]);
    st.insert(key);
  }

  int x = 0, y = 0;
  int maxDist = 0;
  pair<int, int> dir = {0, 1}; // this is north

  for (int i = 0; i < commands.size(); i++) {
    if (commands[i] == -2) { // left turn
      dir = {-dir.second, dir.first};
    }
    if (commands[i] == -1) { // right turn
      dir = {dir.second, -dir.first};
    } else {
      for (int step = 0; step < commands.size(); step++) {
        int newX = x + dir.first;
        int newY = y + dir.second;

        string nextkey = to_string(newX) + "_" + to_string(newY);
        if (st.find(nextkey) != st.end()) {
          break;
        }
        x = newX;
        y = newY;
      }
    }
    maxDist = max(maxDist, x * x + y * y);
  }
  return maxDist;
}

int main() { return 0; }
