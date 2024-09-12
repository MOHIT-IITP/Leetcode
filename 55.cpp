#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool canJump(vector<int> &nums) {
    int maxStep = 0;
    for (int i = 0; i < nums.size(); i++) {
      int x = i + nums[i];
      if (i > maxStep)
        return false;
      maxStep = max(maxStep, x);
    }
    if (maxStep < nums.size() - 1) {
      return false;
    }
    return true;
  }
};

int main() { return 0; }
