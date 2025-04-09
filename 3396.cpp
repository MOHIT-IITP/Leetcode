class Solution {
    public:
        int minimumOperations(vector<int> & nums){
            int n = nums.size();
            unordered_map<int, int> mp;
            for(auto it : nums){
                mp[it]++;
            }
            bool check = true;
            int count = 0;
            while(check){
                for(int i =0;i<n;i+=3){
                    mp[nums[i]]--;
                    mp[nums[i+1]]--;
                    mp[nums[i+2]]--;
                }
                for(auto const & it: mp){
                    if(mp[it.second] > 1){
                        check = true;
                        count++;
                    }else{
                        check = false;
                        break;
                    }
                }
            }
            if(check == false){
                return count;
            }
        }
}
