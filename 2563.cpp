#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
    public:
        long long countFairPairs(vector<int> & nums, int lower , int upper){
            sort(nums.begin(), nums.end());
            ll count = 0;
            int n = nums.size();
            for(int i = 0 ;i < n ;i++){
                int maxV = upper - nums[i];
                int minV = lower - nums[i];
                auto s = lower_bound(nums.begin() + i + 1, nums.end() , minV);
                auto s = upper_bound(nums.begin() + i + 1, nums.end(), maxV);
                count += (e - s);
            }
            return count;
        }
}

int main(){
    return 0;
}
