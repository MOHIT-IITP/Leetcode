#define ll long long
class Solution {
    public:
        ll recur(int amount, vector<int>& coins, vector<int> & dp ){
            if(amount == 0) return 0;
            ll res = INT_MAX;
            if(dp[amount] != -1) return dp[amount];
            for(auto it : coins){
                if(amount - it >= 0){
                   res = min((ll)res, recur(amount - it , coins , dp) + 1LL);
                }
            }
            return dp[amount] =  res;
        }
        int coinChange(vector<int>& coins, int amount){
            int n = coins.size();
            vector<ll> dp(n+1, -1);
            ll ans = recur(amount , coins, dp);
            return ans == INT_MAX ? -1 : ans; 
        }
};
