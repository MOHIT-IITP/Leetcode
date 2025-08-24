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
 
