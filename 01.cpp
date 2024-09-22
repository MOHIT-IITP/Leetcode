#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
  for (int i = 0; i < nums.size() - 1; i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        return {i, j};
      }
    }
  }
  return {};
}

int main() {
  vector<int> nums({2, 7, 10, 15});
  twoSum(nums, 9);
  return 0;
}
// this code is done by mohit kumar
