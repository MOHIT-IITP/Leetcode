#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int mySqrt(int x) {
    long long left = 0, right = x;
    long long res = 0;
    while (left <= right) {
      long long mid =
          left + ((right - left) / 2); // this so it will not overflow
      if (mid * mid > x) {
        right = mid - 1;
      } else if (mid * mid < x) {
        left = mid + 1;
        res = mid;
      } else {
        return mid;
      }
    }
    return res;
  }
};
int main() { return 0; }
