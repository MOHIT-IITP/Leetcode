#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(same(root,targetSum,0)){
            return true;
        }else{
            return false;
        }
        
    }
    bool same(TreeNode* root, int targetSum, int s){
        if(root==nullptr){
            return false;
        }
        s+=root->val;
        if(root->left == nullptr && root->right == nullptr){
            return (targetSum==s);
        }
        return same(root->left,targetSum,s)||same(root->right,targetSum,s);
    }
};


int main()
{
  return 0;
}
