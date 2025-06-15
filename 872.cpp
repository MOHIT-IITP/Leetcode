#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(TreeNode* node, vector<int>& vec) {
        if (node == nullptr) {
            return;
        }
        if (node->left == nullptr && node->right == nullptr) {
            vec.push_back(node->val);
            return;
        }
        helper(node->left, vec);
        helper(node->right, vec);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> first;
        vector<int> second;
        helper(root1, first);
        helper(root2, second);

        return first == second;
    }
};

int main(){
    return 0;
}
