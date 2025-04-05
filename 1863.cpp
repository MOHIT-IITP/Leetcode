#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:     
        int subsetXor(vector<int>& nums){
            int n = nums.size();
            int numSubsets = pow(2, n);
            vector<int> ans;
            for (int i = 0; i < numSubsets; ++i) {
                vector<int> subset;
                for (int j = 0; j < n; ++j) {
                    if ((i >> j) & 1) {
                        subset.push_back(nums[j]);
                    }
                }
                int x = 0;
                for(auto it: subset){
                    x^=it;
                }
                ans.push_back(x);
            }
            int res = accumulate(ans.begin(), ans.end());
            return res;
        }
}

int main(){
return 0;
}
