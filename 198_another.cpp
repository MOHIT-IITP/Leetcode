class Solution{
    public:
        int recur(int i, vector<int> & nums, vector<int>& dp){
            if(dp[i]!=-1) return dp[i];
            int n = nums.size();
            if(i == n) return 0;
            int pick = nums[i] + recur(i+2, nums, dp);
            int notpick = 0 + recur(i+1, nums, dp);
            return dp[i] = max(pick , notpick); 
        }
        int rob(vector<int>& nums){
            int n = nums.size();
            vector<int> dp(n, -1);
            return recur(0, nums, dp); 
        }
}
