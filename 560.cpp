#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int subarraySum(vector<int> & nums, int k){
            int n = nums.size();

            // first part 
            vector<int> prefix(n,0);

            prefix[0] = nums[0];
            for(int i =0;i<nums.size();i++){
                prefix[i] = prefix[i-1] + nums[i];
            }

            // second part
            unordered_map<int, int> mp;
            int count = 0;

            for(int i=0;i<nums.size();i++){
                if(prefix[i] == k) count++;

                int diff = prefix[i] - k;
                if(mp.find(diff) != mp.end()) count += mp[diff];
                mp[prefix[i]]++;
            }
            return count;
        }
}

int main(){
    return 0;
}
