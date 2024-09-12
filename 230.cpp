#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vec;
        res(root,vec);
        return vec[k-1];
    }
    void res(TreeNode* node,vector<int> & ans){
        if(node==nullptr){
            return;
        }
        res(node->left,ans);
        ans.push_back(node->val);
        res(node->right,ans);    
    }
};

int main()
{
  return 0;
}
