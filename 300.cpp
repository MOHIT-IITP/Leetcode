// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std
#define ll long long
#define pb push_back
#define MOD 1000000007

const int N = 1e5+10;
int dp[N];
class Solution(){
    private:
        int lis(int i, vector<int> & nums){
            if(dp[i] != -1) return dp[i];
            int count = 1;
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j]){
                    count = max(count , 1+ lis(j, nums));
                }
            }
            return dp[i] = count;
        }
    public:
        int lengthOfLIS(vector<int>& nums){
            memset(dp, -1 , sizeof(dp));
            int n = nums.size();
            int ans = 0;
            for(int i=0;i<n;i++){
                ans = max(ans, lis(i, nums));
            }
            return ans;
        }
}

int main() {
    return 0;
}
