#include<bits/stdc++.h>
using namespace std;
class Solution {
    // left => we are taking
    // right => we are not taking
    public:
        bool recur(int index, vector<int> & nums, int target, vector<vector<int>> & dp){
            if(index >= nums.size()) return false;
            if(target  <= 0) return false;
            if(dp[index][target] != -1) return dp[index][target];
            bool left = recur(index+1, nums, target-nums[index], dp);
            bool right = recur(index+1, nums, target, dp);
            return left || right;
        }
        bool canPartition(vector<int>& nums){
            int n = nums.size();
            int sum = accumulate(nums.begin(), nums.end(), 0);
            if(sum % 2 != 0 ) return false;
            int half = sum / 2;
            vector<vector<int>> dp(n, vector<int>(target+1, -1));
            return recur(0, nums, target, dp);
        }
};
int main(){
    return 0;
}
