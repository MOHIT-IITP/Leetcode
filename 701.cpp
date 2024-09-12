#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            return new TreeNode(val);
        }
        if(val<root->val){
            root->left =  insertIntoBST(root->left,val);
        }else{
            root->right = insertIntoBST(root->right,val);
        }

        return root;
    }
};

int main()
{
  return 0;
}
