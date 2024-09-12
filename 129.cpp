#include<bits/stdc++.h>
using namespace std;

int sumNumbers(TreeNode* root){
}

void add(TreeNode* root, int & sum , int k){
  if(!root) return ;
  k = k * 10 + root->val;
  if(!root->left && !root->right){
    sum+=k;
    return;
  }
  add(root->left, sum,k);
  add(root->right, sum,k);
}



int main()
{
  return 0;
}
