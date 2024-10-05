#include<bits/stdc++.h>
using namespace std;

int func(int amount, vector<int> coins){
    if(amount ==  0) return 0;
    int ans = INT_MAX;
    if(dp[amount] != -1) return dp[amount];
    for(auto coin : coins){
        if(amount - coin >= 0) 
        ans =  min((long long)ans, func(amount - coin) + 1LL);
    }
    return dp[amount] = ans;
}
int coinChange(vector<int> & coins, int amount){
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int main(){
    return 0;
}
