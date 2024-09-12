#include<bits/stdc++.h>
using namespace std;

bool isValidBST(TreeNode* root){

  if(helper(root,LONG_MIN, LONG_MAX)){
    return true;
  }else{
    return false;
  }
}
bool helper(TreeNode* root, long min, long max){
  if(root == nullptr){
    return true;
  }
  if(root->val >=max || root->val <= min ){
    return false;
  }
  return helper(root->left, min, root->val) && helper(root->right, root->val , max);
}

int main()
{
  return 0;
}
