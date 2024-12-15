#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<vector<int>> threeSum(vector<int> & nums){
            vector<vector<int>> ans;
            sort(nums.begin(), nums.end());
            int n = nums.size();
            for(int i=0;i<n; ++i){
                if(i > 0 && nums[i] == nums[i-1]) continue;
                int j = i + 1;
                int k = n-1;
                while(j < k ){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    if(sum == 0){
                        ans.pb({nums[i], nums[j], nums[k]});
                        j++;
                        k--;
                        while(j < k && nums[j] == nums[j-1]) continue;
                        while(j < k && nums[k] == nums[k+1]) continue;
                    }
                    else if(sum > 0){
                        j++;
                    }
                    else{
                        k--;
                    }
                }
            }
            return ans;

        }
}

int main(){
    return 0;
}
