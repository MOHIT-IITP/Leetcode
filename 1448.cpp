#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int helper(TreeNode* node, int maxVal){
            if(!node) return 0;
            int count = 0;
            if(node->val >= maxVal){
                count = 1;
            }
            maxVal = max(maxVal,  node->val);
            count+=helper(node->left, maxVal);
            count+=helper(node->right, maxVal);
            return count;
        }
        int goodNodes(TreeNode* root){
            if(!root) return 0;
            return helper(root, root->val);
        }
}

int main(){
    return 0;
}
