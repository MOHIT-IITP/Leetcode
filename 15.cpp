#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
    std::vector<std::vector<int>> ans;
    std::sort(nums.begin(), nums.end()); // Sort the array

    int n = nums.size();
    for (int i = 0; i < n - 2; ++i) {
      // Skip duplicate elements
      if (i > 0 && nums[i] == nums[i - 1])
        continue;

      int j = i + 1;
      int k = n - 1;
      while (j < k) {
        int s = nums[i] + nums[j] + nums[k];
        if (s < 0) {
          ++j;
        } else if (s > 0) {
          --k;
        } else {
          ans.push_back({nums[i], nums[j], nums[k]});
          // Skip duplicate elements
          while (j < k && nums[j] == nums[j + 1])
            ++j;
          while (j < k && nums[k] == nums[k - 1])
            --k;
          ++j;
          --k;
        }
      }
    }
    return ans;
  }
};

int main() { return 0; }
