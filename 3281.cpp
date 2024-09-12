#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool canAchieveMinimumDifference(const vector<int> &start, int d,
                                   long long minDiff) {
    int n = start.size();
    vector<long long> chosen(n, 0);
    chosen[0] = start[0];
    for (int i = 1; i < n; ++i) {
      long long lowerBound = start[i];
      long long upperBound = start[i] + d;
      if (chosen[i - 1] + minDiff <= upperBound) {
        chosen[i] = max(lowerBound, chosen[i - 1] + minDiff);
        if (chosen[i] > upperBound)
          return false;
      } else
        return false;
    }
    return true;
  }

  int maxPossibleScore(vector<int> &start, int d) {
    int n = start.size();
    vector<int> sorted_start = start;
    sort(sorted_start.begin(), sorted_start.end());

    long long left = 0;
    long long right = sorted_start.back() + d - sorted_start.front();
    long long result = 0;

    while (left <= right) {
      long long mid = left + (right - left) / 2;
      if (canAchieveMinimumDifference(sorted_start, d, mid)) {
        result = mid;
        left = mid + 1;
      } else
        right = mid - 1;
    }

    return static_cast<int>(result);
  }
};

int main() { return 0; }
