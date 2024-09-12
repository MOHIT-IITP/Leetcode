#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> levelorder(TreeNode* node){
  vector<vector<int>> ans;
  if(node == nullptr){
    return ans;
  }
  queue<TreeNode*> q;
  q.push(node);
  while(!q.empty()){
    int size = q.size();
    vector<int> level;
    for(int i =0;i<size;i++){
      TreeNode* temp = q.front();
      q.pop();
      level.push_back(temp->val);
      if(temp->left!=NULL){q.push(temp->left);}
      if(temp->right!=NULL){q.push(temp->right);}
    }
    ans.push_back(level);
  }
  return ans;
}
int countNodes(TreeNode* root){
  vector<vector<int>> res = levelorder(root);
  int s = res.size();
  int count = 0;
  for(int i =0;i<s;i++){
    count+=res[i].size();
  }
  return count;
}

int main()
{
  return 0;
}
