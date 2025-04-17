// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(nums[i] == nums[j]){
                    if(i * j % k == 0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
}

