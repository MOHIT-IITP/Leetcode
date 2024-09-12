#include<bits/stdc++.h>
using namespace std;

int diameterOfBinaryTree(TreeNode* root){
  int dia = 0;
  maxi(root, dia);
  return dia;
}

int maxi(TreeNode* node, int dia){
  if(node == nullptr){
    return 0;
  }
  int left = maxi(node->left,dia);
  int right = maxi(node->right,dia);
  dia = max(dia, left+right);
  return max(left,right)+1;
}

int main()
{
  return 0;
}
