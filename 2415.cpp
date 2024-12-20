#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  TreeNode *reverseOddLevels(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);
    bool reversed = 0;
    while (!q.empty()) {
      int qz = q.size();
      vector<TreeNode *> arr(qz);
      for (int i = 0; i < qz; i++) {
        auto Node = q.front();
        q.pop();
        if (Node->left)
          q.push(Node->left);
        if (Node->right)
          q.push(Node->right);
        if (reversed) {
          arr[i] = Node;
          if (i >= qz / 2)
            swap(arr[i]->val, arr[qz - 1 - i]->val);
        }
      }
      reversed = !reversed;
    }
    return root;
  }
};
int main() { return 0; }
