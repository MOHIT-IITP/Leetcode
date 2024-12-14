#include<bits/stdc++.h>
using namespace std;

#define pb push_back
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i =0;i<n; ++i){
            if(i > 0 && nums[i] == nums[i-1]) continue; 
            for(int j = i+1 ; j < n; ++j){
                if(j != i + 1 && nums[j] == nums[j-1] ) continue;
                int k = j+1;
                int l = n-1;
                while(k < l){
                    vector<int> vec;
                    long long sum = 0;
                    sum += nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if( sum == target){
                        vec.pb(nums[i]);
                        vec.pb(nums[j]);
                        vec.pb(nums[k]);
                        vec.pb(nums[l]);
                        ans.pb(vec);
                        k++;
                        l--;

                        while(k < l && nums[k] == nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                    if(sum > target){
                        l--;
                    }
                    else if(sum < target){
                        k++;
                    }
                }
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}
