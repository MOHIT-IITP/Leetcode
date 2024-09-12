#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr){
            return false;
        }
        if(same(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
    
    bool same(TreeNode* m, TreeNode* n){
        if(!m && !n){ return true;}
        if(!m || !n){ return false;}
        return (m->val == n->val) && same(m->left, n->left) && same(m->right, n->right); 
    }
};

int main()
{
  return 0;
}
