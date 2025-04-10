class Solution {
    public:
        int recur(int i, int j , vector<vector<int>>& triangle){
            if(i == n-1) return triangle[n-1][j];
            if(dp[i][j] != -1) return dp[i][j];
            int left += recur(i+1, j, triangle);
            int right += recur(i+1, j+1, triangle);
            return dp[i][j] = min(left , right);
        }
        int minimumTotal(vector<vector<int>> & triangle) {
            int n = triangle.size();
            int m = triangle[n-1].size();
            vector<vector<int>> dp(n, vector<int>(m, -1));
            return recur(0,0,triangle,dp);
        }
};
 
