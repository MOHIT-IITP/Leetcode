#include <bits/stdc++.h>
using namespace std;

class Solution {
  void mindis(TreeNode *root, int &minD, TreeNode *&prev) {
    if (node == nullptr)
      return;

    mindis(root->left, minD, prev);
    if (prev != nullptr) {
      int diff = abs(root->val - prev->val);
      minD = min(minD, diff);
    }

    // changing the node
    prev = node;
    mindis(root->right, minD, prev);
  }
  int getMinimumDifference(TreeNode *root) {
    int minD = INT_MAX;
    TreeNode *prev = nullptr;
    mindis(root, minD, prev);
    return minD;
  }

}

int main(){
  return 0;
}
