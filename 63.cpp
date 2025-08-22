// memoization method

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int recur( int i , int j , vector<vector<int>>& grid, vector<vector<int>>& dp){

        int r = grid.size();
        int c = grid[0].size();

         if( i >= r || j >= c ){
            return 0;
        }

        //checking if obstacle is present
        if(grid[i][j] == 1){
            return 0;
        }

        // checking for the bound

       

        // checking if it reaches the bottom or not
        if(i == r-1 && j == c-1){
            return 1;
        }

        // checking if the path already visited  
        if(dp[i][j] != -1){
            return dp[i][j];
        }

        // going right 
        int right = recur(i+1, j , grid, dp);
        // going down
        int down = recur(i, j+1, grid, dp);
        
        // adding the path to the dp 
        return dp[i][j] =  right + down;

    }

    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int a = 0, b = 0;
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> dp(r, vector<int> (c, -1));

        // going right 
        return recur(a, b , grid, dp);
        
    }
};

int main() {
    return  0;
}





// tabulization method

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<vector<int>> dp(r, vector<int>(c, 0));
        if(grid[0][0] == 1){
            return 0;
        }

        // base case
        dp[0][0] = 1;

        for(int i = 0 ; i < r ; i++ ){
            for(int j = 0; j < c ; j++ ){
                if(grid[i][j] == 1){
                    dp[i][j] = 0;
                }else{
                    if(i > 0) dp[i][j] += dp[i-1][j];
                    if(j > 0) dp[i][j] += dp[i][j-1];
                }
            }
        }
        return dp[r-1][c-1];
    }
};

int main(){
    return 0;
}
