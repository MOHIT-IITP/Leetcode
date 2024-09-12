#include<bits/stdc++.h>
using namespace std;

// this code is working for 408 test case but not for all test case 
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        for(int i =0;i<vec.size();i++){
            for(int j=i;j<vec.size();j++){
                if(vec[j]+vec[i]== k){
                    return true;
                }
            }
        }
        return false;
    }
private:
    std::vector<int> vec;
    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
};
// below code runs all the test case 
#include <unordered_set>

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        std::unordered_set<int> seen;
        return findPair(root, k, seen);
    }

private:
    bool findPair(TreeNode* node, int k, std::unordered_set<int>& seen) {
        if (node == nullptr) {
            return false;
        }

/*k - node->val: This expression calculates the complement of the current node's value. 
 * The complement is the value that, when added to node->val, equals k. For example,
 * if k is 9 and node->val is 4, the complement would be 5 (since 4 + 5 = 9).*/

        if (seen.count(k - node->val)) {
            return true;
        }

        seen.insert(node->val);

        return findPair(node->left, k, seen) || findPair(node->right, k, seen);
    }
};

int main(){
  return 0;
}
