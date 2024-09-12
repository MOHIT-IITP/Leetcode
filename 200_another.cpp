#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  vector<vector<int>> ans;

  void printF(int ind, int target, int s, vector<int> &candidates,
              vector<int> &ds, int n) {
    if (n == ind) {
      if (s == target) {
        ans.push_back(ds);
        return;
      }
    }
    if (s > target || ind == n) {
      return;
    }

    ds.push_back(candidates[ind]);
    printF(ind, target, s + candidates[ind], candidates, ds, n);
    ds.pop_back();

    printF(ind + 1, target, s, candidates, ds, n);
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    vector<int> ds;
    int n = candidates.size();
    printF(0, target, 0, candidates, ds, n);
    return ans;
  }
};

int main() { return 0; }
