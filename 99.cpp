#include<bits/stdc++.h>
using namespace std;

void recoverTree(TreeNode* root){
  pre = new TreeNode(INT_MIN);
  inorder(root);
  swap(first->val, second->val);
}

void inorder(TreeNode* root){

  if(root == nullptr){
    return;
  }

  inorder(root->left);

  if(first == nullptr && root->val < pre->val ){
    first = pre;
  }
  if(first != nullptr && root->val < pre->val ){
    second = root;
  }
  pre = root;

  inorder(root->right);
}

int main()
{
  return 0;
}
