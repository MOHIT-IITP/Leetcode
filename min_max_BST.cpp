#include<bits/stdc++.h>
using namespace std;

int minValue(Node* root){
  if(root->left==NULL){
    return root->val;
  }
  return minValue(root->left);
}

int main()
{ 
  return 0;
}
