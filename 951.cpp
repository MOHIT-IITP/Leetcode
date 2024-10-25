#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        bool helper(TreeNode* node, TreeNode* root){
            if(!node && !root) return true;
            if(!node || !root) return true;
            if(node->val != root->val) return false;
            return (helper(node->left, root->left) && helper(node->right, root->right))|| (helper(node->left, root->right) && helper(node->right, root->left));
        }

    public:
        bool flipEquiv(TreeNode* root1 , TreeNode* root2){
            return helper(root1, root2);
        }
}

int main(){
    return 0;
}
