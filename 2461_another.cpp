// TLE Happens
#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution{
    public:
        bool helper(unordered_map<int,int> mp){

        }
        long long maximumSubarraySum(vector<int> & nums, int k){
            int left = 0;
            ll maxs = 0;
            ll currs = 0;
            int n = nums.size();
            unordered_map<int , int> mp;

            for(int right = 0;right < n; right++){
                currs += nums[right];
                mp[nums[right]]++;

                if(right - left + 1 > k){
                    currs -= nums[left];
                    mp[nums[left]]--;
                    if(mp[nums[left]] == 0) {
                        mp.erase(nums[left]);
                    }
                    left++;
                }

                if(right - left + 1 == k){
                    if(helper(mp)){
                        maxs =  max(maxs, currs);
                    }
                }
            }
            return maxs;
        }
}
int main(){
    return 0;
}
