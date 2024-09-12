#include <bits/stdc++.h>
using namespace std;

bool dfs(ListNode *head, TreeNode *node) {
  if (head == nullptr)
    return true;
  if (node == nullptr)
    return false;
  if (node->val != head->val)
    return false;
  return dfs(head->next, node->left) || dfs(head->next, node->right);
}

bool isSubPath(ListNode *head, TreeNode *node) {
  if (node == nullptr)
    return false;
  if (head->val == node->val) {
    if (dfs(head, node))
      return true;
  }
  return isSubPath(head, node->left) || isSubPath(head, node->right);
}

int main() { return 0; }
