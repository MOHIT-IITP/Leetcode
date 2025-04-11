class Solution{
    public:
        int recur(int i, vector<int>& cost, vector<int> & dp){
            int n = cost.size();
            if(i >= n) return 0;  
            if(dp[i] != -1) return dp[i];

            int first = cost[i] + recur(i+1, cost, dp);
            int second = cost[i] + recur(i+2, cost, dp);

            return dp[i] =  min(first, second);
        }
        int minCostClimbingStairs(vector<int>& cost){
            int n = cost.size();
            vector<int> dp(n,-1);
            vector<int> dp1(n, -1);
            int left = recur(0, cost, dp);
            int right = recur(1, cost, dp1);
            return min(left, right); 
        }
};
