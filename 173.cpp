#include<bits/stdc++.h>
using namespace std;

class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
       inorder(root); 
    }
    
    int next() {
        int val = nodes.front();
        nodes.pop_front();
        return val;
        
    }
    
    bool hasNext() {
        return !nodes.empty();
    }
private:
    std::deque<int> nodes;
    void inorder(TreeNode* node){
        if(node == nullptr){
            return;
        }
        inorder(node->left);
        nodes.push_back(node->val);
        inorder(node->right);
    }
};

int main()
{
  return 0;
}
