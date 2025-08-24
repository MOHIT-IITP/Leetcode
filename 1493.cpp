 // sliding window technique
class Solution{
    public:
        int longestSubarray(vector<int> & nums){
            int left = 0, zeros = 0, maxLength = 0;
            int n = nums.size();
            for(int right = 0; right < n ; ++right){
                if(nums[right] == 0){
                    zeros++;
                }
                while(zeros > 1){
                    if(nums[left] == 0){
                        zeros--;
                    }
                    left++;
                }
                maxLength = max(maxLength , right - left);
            }
            return maxLength;
        }
}
 

// dynamic programming way
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(2, 0));
        int ans = 0;

        if (nums[0] == 1) {
            dp[0][0] = 1;
        }

        for (int i = 1; i < n; i++) {
            if (nums[i] == 1) {
                dp[i][0] = dp[i-1][0] + 1;       // no deletion
                dp[i][1] = dp[i-1][1] + 1;       // already deleted
            } else {
                dp[i][0] = 0;                    // break if no deletion
                dp[i][1] = dp[i-1][0];           // delete this 0
            }
            ans = max(ans, max(dp[i][0], dp[i][1]));
        }

        // Since we must delete exactly one element, answer cannot be full length
        if (ans == n) ans--; 
        return ans;
    }
};

