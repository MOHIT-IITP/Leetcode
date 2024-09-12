#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> missingRolls(vector<int> &rolls, int mean, int n) {
    vector<int> ans;
    int m = rolls.size();
    int k = (n + m) * mean;
    int cSum = accumulate(rolls.begin(), rolls.end(), 0);
    int x = k - cSum;
    if (x > 6 * n || x < 0)
      return ans;
    if (x % n == 0) {
      int y = x / n;
      for (int i = 0; i < n; i++) {
        ans.push_back(y);
      }
    } else {
      int y = x / n;
      for (int i = 0; i < n - x % n; i++) {
        ans.push_back(y);
        if (y == 0) {
          return {};
        }
      }
      for (int i = 0; i < x % n; i++) {
        ans.push_back(y + 1);
        if (y == 0) {
          return {};
        }
      }
    }
    return ans;
  }
};

int main() { return 0; }
