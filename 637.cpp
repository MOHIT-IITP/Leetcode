#include<bits/stdc++.h>
using namespace std;

vector<double> averageOfLevels(TreeNode* root){
  vector<vector<int>> ans;
  levelOrder(root, ans);
  vector<double> res;
  for(const auto& level: ans){
    res.push_back(accumulate(level.begin(), level,end(), 0.0) / level.size());
  }
  return res;
}

vector<vector<int>> levelOrder(TreeNode* node, vector<vector<int>>& ans){
  queue<int> q;
  q.push(node);
  while(!q.empty()){
      int s = q.size();
      vector<int> level;
      for(int i =0;i<s;i++){
          TreeNode* temp = q.front();
          q.pop();
          level.push_back(q->val);
          if(temp->left != nullptr) q.push(temp->left);
          if(temp->right != nullptr) q.push(temp->right);
      }
    ans.push_back(level);
  }
  return ans;
}

int main()
{
  return 0;
}
