#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int longestSubarray(std::vector<int> &nums) {
    int maxE = *max_element(nums.begin(), nums.end());
    int n = nums.size();
    int count = 0;
    int maxC = 0;

    for (int i = 0; i < n; ++i) {

      if (nums[i] == maxE) {
        count++;

      } else {
        maxC = max(count, maxC);
        count = 0;
      }
    }
    maxC = max(count, maxC);

    return maxC;
  }
};

int main() { return 0; }
