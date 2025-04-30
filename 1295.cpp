class Solution {
    public: 
        int findNumbers(vector<int> & nums){
            int count = 0;
            for(auto it : nums){
                if(to_string(nums[it]).size % 2 == 0){
                    count++;
                }
            }
            return count;
        }
}
