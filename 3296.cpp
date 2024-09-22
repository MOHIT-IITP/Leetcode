#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long minNumberOfSeconds(int h, vector<int> &w) {
    long long l = 1, r = 1e18;
    auto canDo = [&](long long t) {
      long long total = 0;
      for (auto &x : w) {
        long long lo = 0, hi = h;
        while (lo < hi) {
          long long mid = (lo + hi + 1) / 2;
          if (x * mid * (mid + 1) / 2 <= t)
            lo = mid;
          else
            hi = mid - 1;
        }
        total += lo;
        if (total >= h)
          return true;
      }
      return total >= h;
    };
    while (l < r) {
      long long mid = (l + r) / 2;
      if (canDo(mid))
        r = mid;
      else
        l = mid + 1;
    }
    return l;
  }
}

int main()
{
  return 0;
}
