#include<bits/stdc++.h>
using namespace std;

class Solution {

private:
    void preorder(TreeNode* node, vector<int> &vec){
        if(node==NULL){
            return;
        } 
        vec.push_back(node->val);
        preorder(node->left,vec);
        preorder(node->right, vec);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        preorder(root,vec);
        return vec;
    }
};

int main()
{
  return 0;
}
