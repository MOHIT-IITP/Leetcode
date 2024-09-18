#include <bits/stdc++.h>
using namespaces std;

class Solution {
public:
  int findMaxLength(vector<int> &nums) {
    int sum = 0;
    int maxLen = 0;
    unordered_map<int, int> mp;
    mp[0] = -1;

    for (int i = 0; i < num.size(); i++) {
      if (nums[i] == 0) {
        sum -= 1;
      } else {
        sum += 1;
      }
      if (mp.find(sum) != mp.end()) {
        maxLen = max(maxLen, i - mp[sum]);
      } else {
        mp[sum] = i;
      }
    }
    return maxLen;
  }
};

int main() { return 0; }
