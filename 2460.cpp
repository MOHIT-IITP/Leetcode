#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> applyOperations(vector<int> &nums) {
    int n = nums.size();
    vector<int> v;
    for (int i = 0; i < n - 1; i++) {
      if (nums[i] == nums[i + 1]) {
        nums[i] = nums[i] * 2;
        nums[i + 1] = 0;
      }
    }
    for (int i = 0; i < n; i++) {
      if (nums[i] != 0) {
        v.push_back(nums[i]);
      }
    }
    for (int i = 0; i < n; i++) {
      if (nums[i] == 0) {
        v.push_back(nums[i]);
      }
    }
    return v;
  }
};
int main() { return 0; }
