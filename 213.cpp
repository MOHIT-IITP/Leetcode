class Solution {
    public:
        int recur(bool first, int i , vector<int>& nums, vector<int>& dp){
            if(first){
                int n = nums.size();
                if(i == n-1){
                    return 0;
                }
            }
            if(i==n-1) return nums[n-1];
            if(i >= n) return 0;
            return recur(first, i+2, nums, dp);
        }
        int rob(vector<int>& nums){
            int n = nums.size();
            vector<int> dp(n, -1);
            return  max(recur(true, 0, nums, dp), recur(false, 1, nums, dp));
        }
};
