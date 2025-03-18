class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l = 0, r = 0, mx = 1;
        long sum = 0, bits = 0;
        while (r < nums.size()) {
            if ((bits | nums[r]) == sum + nums[r]) {
                bits |= nums[r];
                sum += nums[r];
                r++;
            } else {
                bits &= ~nums[l];
                sum -= nums[l];
                l++;
            }
            mx = max(mx, r - l);
        }
        return mx;
    }
};
