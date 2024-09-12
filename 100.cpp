#include<bits/stdc++.h>
/*some of the ide does not support the upper include so the below code is important*/
#include<iostream>
using namespace std;

int same(TreeNode*p , TreeNode*q){
  if(!p && !q){
    return true;
  }
  if(p && q && p->val == q->val){
    return same(p->left,q->left) && same(p->right, q->right);
  }
}

int main()
{
  return 0;
}
