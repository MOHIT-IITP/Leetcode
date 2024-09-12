#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelorder(TreeNode* root){
        vector<vector<int>> ans;
        if(root == nullptr){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int s = q.size();
            for(int i =0;i<s;i++){
                TreeNode* temp = q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left!=NULL){q.push(temp->left);}
                if(temp->right!=NULL){q.push(temp->right);}
            }
            ans.push_back(level);
        }
        return ans;
    }
    int maxDepth(TreeNode* root) {
        vector<vector<int>> res = levelorder(root);
        return res.size();

    }
    // You can also do 
    int maxDepth(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};
int main()
{
  return 0;
}
