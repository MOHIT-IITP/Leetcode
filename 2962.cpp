//  brute force approach by my friend abhijeet kumar
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int maxelem = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        for(int i =0;i<n;i++){
            int cnt= 0;
            for(int j = i;j < n; j++){
                if(nums[j] == maxelem ){
                    cnt++;
                }
                if(cnt>= k){
                    count++;
                }
            }
        }
        return count;
    }
};


// optimal approach
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxelem = *max_elemenet(nums.begin(), nums.end());
        int countlatest = 0;
        int left = 0;
        int ans = 0;
        for(int i = 0;i < n; i++){
            if(nums[i] == maxelem){
                countlatest++; // count of the max element 
            }

            while(countlatest >= k){
                if(nums[left] == maxelem){
                    countlatest--;
                }
                left++;
                ans++;
            }
        }
        return ans;
    }
};

