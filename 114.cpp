#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    void helper(TreeNode* root,TreeNode* &store){
        if(root->left==NULL && root->right==NULL){
            store=root;
            return;
        }
        if(root->left){
            helper(root->left,store);
        }
        TreeNode* temp=root->right;
        if(store!=NULL){
            root->right=root->left;
            store->right=temp; 
        }
        root->left=NULL;
        if(temp){
            store=NULL;
            helper(temp,store);
        }
    }

    void flatten(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return;
        }
        TreeNode* store=NULL;
        helper(root,store);
    }
};

int main()
{
  return 0;
}
