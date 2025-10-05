class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      int n = nums.size();
      for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n; j++){
          if(nums[i] > nums[j]){
            swap(nums[i], nums[j]);
          }
        }
      }
      return nums;
    }
};
