#include<bits/stdc++.h>
using namespace std;

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
  int n = preorder.size();
  int index= 0;
  return helper(preorder,inorder,0,n-1,index);

}
TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int start, int end, int& index)
{
  if(start>end){
    return NULL;
  }
  int rootVal = preorder[index];
  int i = start;
  for(;i<=n;i++){
    if(inorder[i]==rootVal){
      break;
    }
  }
  index++;
  TreeNode* root = new TreeNode(rootVal);
  root->left = helper(preorder,inorder,start,i-1,index);
  root->right = helper(preorder,inorder,i+1,end,index);

  return root;
}

int main()
{
  return 0;
}
