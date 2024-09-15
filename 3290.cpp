#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long maxScore(std::vector<int> &a, std::vector<int> &b) {
    int n = b.size();
    long long dp1 = LLONG_MIN, dp2 = LLONG_MIN, dp3 = LLONG_MIN,
              dp4 = LLONG_MIN;

    for (int i = 0; i < n; ++i) {
      if (dp3 != LLONG_MIN) {
        dp4 = max(dp4, dp3 + (long long)a[3] * b[i]);
      }
      if (dp2 != LLONG_MIN) {
        dp3 = max(dp3, dp2 + (long long)a[2] * b[i]);
      }
      if (dp1 != LLONG_MIN) {
        dp2 = max(dp2, dp1 + (long long)a[1] * b[i]);
      }
      dp1 = max(dp1, (long long)a[0] * b[i]);
    }

    return dp4;
  }
};

int main() { return 0; }
