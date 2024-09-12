#include<bits/stdc++.h>
using namespace std;

vector<int> rightSideView(TreeNode* root){
  vector<int> ans;
  right(root,0,ans);
  return ans;
}
void right(TreeNode* node, int level, vector<int> &res){
  if(node==NULL) return;
  if(level==res.size()) res.push_back(root->val);
  right(node->right,level+1,res);
  right(node->left,level+1,res);
}

int main()
{
  return 0;
}
