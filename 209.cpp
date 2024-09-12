#include <bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int> &nums) {
  int left = 0, right = 0;
  int minSize = INT_MAX;
  int currSum = 0;

  while (right < nums.size()) {
    currSum += nums[right];

    while (currSum >= target) {
      minSize = min(minSize, right - left + 1);
      currSum -= nums[left];
      left++;
    }
    right++;
  }
  return minSize == INT_MAX ? 0 : minSize;
}

int main() { return 0; }
