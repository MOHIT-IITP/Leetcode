class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // Initialize result array with size n and pre and post arrays
        vector<int> res(n, 1);  // Initialize res with 1
        vector<int> pre(n, 1);   // Initialize pre with 1s
        vector<int> post(n, 1);  // Initialize post with 1s
        
        // Calculate prefix products
        for (int i = 1; i < n; ++i) {
            pre[i] = pre[i - 1] * nums[i - 1];
        }
        
        // Calculate postfix products
        for (int i = n - 2; i >= 0; --i) {
            post[i] = post[i + 1] * nums[i + 1];
        }
        
        // Calculate final result
        for (int i = 0; i < n; ++i) {
            res[i] = pre[i] * post[i];
        }
        
        return res;
    }
};



