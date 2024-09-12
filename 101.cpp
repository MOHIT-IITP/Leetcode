#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return mirror(root->left, root->right);
    }
    bool mirror(TreeNode* left, TreeNode* right){
        if(left==nullptr && right==nullptr){
            return true;
        }
        if(left==nullptr || right==nullptr){
            return false;
        }
        return (left->val == right->val) && mirror(left->left, right->right) && mirror(left->right, right->left);
    }

};

int main()
{
  return 0;
}
