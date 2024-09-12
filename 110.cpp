#include<bits/stdc++.h>
using namespace std;

bool isBalanced(TreeNode* root){
  if(root == nullptr){
    return true;
  }
  if(abs(maxi(root->left)-maxi(root->right))>1){
    return false;
  }
  if(isBalanced(root->left) && isBalanced(root->right)){
    return true;
  }
  return false;
}
int maxi(TreeNode* root){
  if(root==NULL){
    return 0;
  }
  return max(maxi(root->left), maxi(root->right))+1;
}

int main()
{
  return 0;
}
