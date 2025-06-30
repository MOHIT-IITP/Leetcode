#include<bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        int findLHS(vector<int> & nums){
            int n = nums.size();
            sort(nums.begin(), nums.end());

            unordered_map<int, int> mp;
            for(auto num: nums){
                mp[num]++;
            }

            if(mp.size() == 1){
                return mp[0];
            }

            int ans = 0;
            for(auto & [first , second] : mp){
                if(mp.count(first + 1)){
                    ans = max(ans, mp[first] + mp[first + 1]);
                }
            }
            return ans;
        }
}

int main(){
    return 0;
}
