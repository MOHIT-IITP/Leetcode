#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries) {
    vector<int> ans;
    for (auto it : queries) {
      int x = 0;
      for (int i = it[0]; i < it[1]; i++) {
        x = x ^ arr[i];
      }
      ans.push_back(x);
    }
    return ans;
  }
};
int main() { return 0; }
