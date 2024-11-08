#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int> ans(n);
        int val = (1 << maximumBit) - 1; 
        
        int k = n - 1;
        int curr = 0;
        
        for (int i = 0; i < n; i++) {
            curr ^= nums[i];
            ans[k--] = curr ^ val;
        }
        
        return ans;
    }
};
int main(){
    return 0;
}
