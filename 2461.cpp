#include <bits/stdc++.h>
using namespace std;

long long maximumSubarraySum(vector<int> &nums, int k) {
  long long currSum = 0, maxSum = 0;
  int left = 0, right = 0;
  unordered_set<int> s;

  while (right < nums.size()) {
    while (s.count(nums[right] || s.size() == k)) {
      currSum -= nums[left];
      s.erase(nums[left]);
      left++;
    }
    currSum += nums[right];
    s.insert(nums[right]);
    right++;

    if (s.size() == k) {
      maxSum = max(maxSum, currSum);
    }
  }
  return maxSum;
}

int main() { return 0; }
