#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long kthlargestLevelSum(TreeNode* root, int k){
            priority_queue<long long > ans;
            if(!root) return -1;

            queue<TreeNode* > q;
            q.push(root);
            while(!q.empty()){
                vector<int> level;
                int s = q.size();
                for(int i=0;i<s;i++){
                    TreeNode* node = q.front();
                    q.pop();
                    level.push_back(node->val);
                    if(node->left != NULL) q.push(node->val);
                    if(node->right != NULL) q.push(node->right);
                }
                long long totalSum = accumulate(level.begin(), level.end(), 0LL);
                ans.push(totalSum);
            }
            for(int i=0;i<k-1;i++){
                if(!ans.empty()){
                    ans.pop();
                }
                else{
                    return -1;
                }
            }
            return ans.empty() ? -1: ans.top();
        }
}
int main(){
    return 0;
}
