class Solution {
    public:  
        int recur(int n, dp){
            if(dp[n] != -1) return dp[n];
            if(n<3){
                if(n==1 || n==2){
                    return 1;
                }else{
                    return 0;
                }
            }
            return dp[n] =  (recur(n-3, dp) + recur(n-2, dp) + recur(n-1, dp));
        };

        int tribonacci(int n){
            vector<int> dp(n+1, -1); // always take one extra col in dp vector
            return recur(n, dp);
        };
};
