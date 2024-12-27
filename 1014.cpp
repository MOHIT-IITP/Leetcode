#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxScoreSightseeingPair(vector<int> &values) {
    int n = values.size();
    vector<int> last(n);
    last[n - 1] = values[n - 1] - n + 1;
    values[n - 1] += (n - 1);
    for (int i = n - 2; i >= 0; i--) {
      last[i] = max(last[i + 1], values[i] - i);
      values[i] += i;
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      ans = max(ans, values[i] + last[i + 1]);
    }
    return ans;
  }
};
int main() { return 0; }
