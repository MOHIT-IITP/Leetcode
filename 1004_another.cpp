#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int> &nums, int k) {
  int left = 0, right = 0, count = k, maxLen = 0;

  while (right < nums.size()) {
    if (nums[right] == 0) {
      if (count > 0) {
        count--;
        right++;
      } else {
        maxLen = max(maxLen, right - left);
        while (nums[left] == 1) {
          left++;
        }
        left++;
        right++;
      }
    } else {
      right++;
    }
    return max(maxLen, right - left);
  }
}

int main() { return 0; }
