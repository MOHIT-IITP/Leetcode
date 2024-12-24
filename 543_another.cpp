// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define vc vector<int>

class Solution {
public:
  int helper(TreeNode *root, int &count) {
    if (root == nullptr)
      return 0;
    int left = helper(root->left, count);
    int right = helper(root->right, count);
    count = max(count, right + left);
    return max(right, left) + 1;
  }

  int diameterofBinaryTree(TreeNode *tree) {
    int count = 0;
    helper(root, count);
    return count;
  }
}

int main() {
  return 0;
}
