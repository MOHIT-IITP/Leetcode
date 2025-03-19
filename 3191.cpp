class solution{
    public: 
        int minOperation(vector<int>& nums){
            int n = nums.size();
            int count = 0;
            for( int left = 0;left <= n-3 ; left++){
                if(nums[left]  == 0){
                    for(int i =0;i<3;i++){
                        nums[left + i] ^= 1;
                    }
                }
                    count++;
            }
            for(auto it : nums){
                if(it == 0){
                    return -1;
                }
            }
            return count;
        }
}
