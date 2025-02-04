#include <bits/stdc++.h>
using namespace std;

class Solution {
  int maxAscendingSum(vector<int> &nums) {
    int n = nums.size();
    int currentSum = nums[0];
    int largest = currentSum;

    for (int i = 0; i < n; i++) {
      if (nums[i - 1] < nums[i]) {
        currentSum += nums[i];
      } else {
        currentSum = nums[i];
      }
      largest = max(largest, currentSum);
    }
    return currentSum;
  }
}

int main(){
  return 0;
}
