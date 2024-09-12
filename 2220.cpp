#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
  int count(int n) {
    int k = 1;
    int count = 0;
    while (n != 0) {
      if (n & 1) {
        count++;
      }
      n >>= 1;
    }
    return count;
  }

public:
  int minBitFlips(int start, int goal) {
    int a = start ^ goal;
    int ans = count(a);
    return ans;
  }
};
int main() { return 0; }
