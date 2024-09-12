#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void postorder(TreeNode* node, vector<int> &res)
    {
        if(node==NULL){
            return;
        }
        postorder(node->left,res);

        postorder(node->right,res);
        res.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root,ans);
        return ans;
    }
};

int main()
{
  return 0;
}
