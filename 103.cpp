#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zigzagLevelOrder(TreeNode* root){
  vector<vector<int>> res;
  if(root == nullptr){
    return ans;
  }
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty()){
    int s = q.size();
    vector<int> level;
    for(int i = 0;i<s;i++){
      TreeNode* node = q.front();
      q.pop();
      level.push_back(node->val);
      if(node->left){
        q.push(node->left);
      }
      if(node->right){
        q.push(node->right);
      }
    }
    if(ans.size()%2){
      reverse(level.begin(), level.end());
    }
    ans.push_back(level);
  }
}

int main()
{
  return 0;
}
