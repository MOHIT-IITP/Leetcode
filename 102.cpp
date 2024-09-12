#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> levelorder(TreeNode* root){
  vector<vector<int>> ans;
  if(root==NULL){
    return ans;
  }
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty()){
    int size= q.size();
    vector<int> level;
    for(int i =0;i<size;i++){
      TreeNode* temp = q.front();
      q.pop();
      level.push_back(temp->val);
      if(temp->left!=NULL){
        q.push(temp->left);
      }
      if(temp->right!=NULL){
        q.push(temp->right);
      }
    }
    ans.push_back(level);
  }
  return ans;
}

int main()
{
  return 0;
}
