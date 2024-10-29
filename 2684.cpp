#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int m,n;
    vector<vector<int>> directions {{-1,1},{0,1},{1,1}};
    vector<vector<int>> dp; // memozation table

    int slove(vector<vector<int>>& grid,int i,int j){
        if(i<0 && j<0 && i>=m && j>=n){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int max_score = 0;

        for(vector<int> &dir :directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            if(new_i >= 0 && new_i < m && new_j < n && grid[new_i][new_j] > grid[i][j]){
                max_score = max(max_score,1+slove(grid,new_i,new_j));
            }
        }

        return dp[i][j] = max_score;

    }

    int maxMoves(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        dp = vector<vector<int>>(m,vector<int>(n,-1));
        int result = 0;


        for(int i = 0;i<m;i++){
            result = max(result,slove(grid,i,0));
        }

        return result;
        
    }
};
int main(){
    return 0;
}
