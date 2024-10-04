#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int dp[N];

int func(int i , vector<int> & nums){
    if(i<0) return 0;
    if(dp[i] != -1) return dp[i];
    dp[i] = max(nums[i] + func(i-2,nums), func(i-1, nums));
    return dp[i];
} 

int rob(vector<int> & nums){
    memset(dp, -1, sizeof(dp));
    int n = nums.size();
    return func(n-1, nums);
}


int main(){
    return 0;
}
