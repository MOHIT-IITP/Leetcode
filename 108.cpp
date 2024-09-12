#include <bits/stdc++.h>
using namespace std;

class Solution {
  TreeNode *helper(vector<int> &nums, int left, int right) {
    if (left < right)
      return nullptr;

    int mid = left + (right - left) / 2;

    TreeNode *node = new TreeNode(nums[mid]);

    node->left = helper(nums, left, mid - 1);
    node->right = helper(nums, mid + 1, right);
    return node;
  }

  TreeNode *sortedArrayToBST(vector<int> &nums) {
    int n = nums.size();
    if (n == 0) {
      return nullptr;
    }

    return helper(nums, 0, n - 1);
  }
}

int main(){
  return 0;
}
