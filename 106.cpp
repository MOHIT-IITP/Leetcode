#include<bits/stdc++.h>
using namespace std;


TreeNode* buildTree(vector<int>& inorder, vector<int> & postorder){
  int n = postorder.size();
  int index = n-1;
  return helper(inorder,postorder,0,n-1,index);
}

TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int start, int end, int& index){
  if(start>end){
    return NULL;
  }
  int rootVal = postorder[index];
  int i  = start;
  for(;i<end;i++){
    if(inorder[i]== root->val){
      break;
    }
  }
  index --;
  TreeNode* root = new TreeNode(rootVal);
  root->right = helper(inorder,postorder,start,i-1,index);
  root->left = helper(inorder,postorder,i+1,end,index);

  return root;
}

int main()
{
  return 0;
}
