#include<bits/stdc++.h>
using namespace std;

TreeNode* bstFromPreorder(vector<int>& preorder){
  int index = 0;
  return helper(preorder, index, INT_MAX);
}
TreeNode* helper(vector<int>& preorder, int& index, int bound){
  if(index>=preorder.size() || preorder[index]>bound){
    return nullptr;
  }
  int rootVal = preorder[index++];
  TreeNode* node = new TreeNode(rootVal);
  node->left = helper(preorder, index, rootVal);
  node->right = helper(preorder,index, bound);
  return node;
}


int main()
{
  return 0;
}
