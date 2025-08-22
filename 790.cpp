#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numTilings(int n) {
        // make the vector ( cf, uf , lf)
        vector<vector<int>> dp(n+1, vector<int> (3, 0));
        int mod = 1e9+7;

        // set the predecided values 
        
        dp[0][0] = 1;
        dp[0][1] = 0;
        dp[0][2] = 0;


        for(int i = 1; i <= n ; i++){
            long long temp = 0;

            //  cf peche wala       last plf           last puf 
            temp += dp[i-1][0];
            temp += dp[i-1][1];
            temp += dp[i-1][2];

            if(i-2 >= 0) temp += dp[i-2][0] ;

            dp[i][0] = temp % mod;
            temp = 0;

            // last upper filled
            temp +=  dp[i-1][2]  ;
            if(i-2 >= 0) temp += dp[i-2][0];

            dp[i][1] = temp % mod;
            temp = 0;

            // last lower filled
            temp += dp[i-1][1];
            if(i-2 >= 0) temp += dp[i-2][0];

            dp[i][2] = temp % mod;
        }

        return dp[n][0];
    }
};

int main(){
    return 0;
}
