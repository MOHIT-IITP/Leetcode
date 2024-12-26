#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> largestValues(TreeNode *root) {
    vector<int> ans;
    if (!root)
      return ans;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
      int L = q.size();
      int M = INT_MIN;

      for (int i = 0; i < L; i++) {
        TreeNode *x = q.front();
        q.pop();

        M = max(M, x->val);

        if (x->left != nullptr) {
          q.push(x->left);
        }
        if (x->right != nullptr) {
          q.push(x->right);
        }
      }

      ans.push_back(M);
    }

    return ans;
  }
};
int main() { return 0; }
