class Solution {
public:
    void backtrack(const vector<int> &nums, int index, int currento, int maxo, int &count){
        if(currento == maxo){
            count++;
        }
        for(int i=index; i<nums.size();i++){
            backtrack(nums, i+1, currento | nums[i], maxo, count);
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxo = 0;
        for(int num : nums){
            maxo |= num;
        }
        int count = 0;
        backtrack(nums, 0, 0, maxo, count);
        return count;
    }
};
