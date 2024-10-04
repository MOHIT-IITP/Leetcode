#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int dp[N];

int func(int i ){
    if(dp[i] != -1) return dp[i];
    if(i > 1) {
        dp[i] = func(i-1) + func(i-2);
    }
    return dp[i];
} 
int climbingStairs(int n){
    memset(dp, -1, sizeof(dp));
    dp[0] = 1;
    dp[1] = 1;
    return func(n);
}

int main(){
    return 0;
}
