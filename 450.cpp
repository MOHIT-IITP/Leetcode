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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL)
            return NULL;

        if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else if (root->val < key) {
            root->right = deleteNode(root->right, key);
        } else {
            return helper(root);
        }
        
        return root;
    }

    TreeNode* helper(TreeNode* node) {
        if (node->left == NULL)
            return node->right;
        if (node->right == NULL)
            return node->left;

        TreeNode* rightChild = node->right;
        TreeNode* lastRight = findLast(node->left);
        lastRight->right = rightChild;
        return node->left;
    }

    TreeNode* findLast(TreeNode* node) {
        while (node->right != NULL) {
            node = node->right;
        }
        return node;
    }
};

