#include<bits/stdc++.h>
using namespace std;


class Solution {
private:   
    int solve(string & s , map<string, int> & dp){
        if(s.empty()) return 1;
        if(s.length() == 0 ){
            if(s[0] == '0') return 0;
            return 1;
        }

        if(dp.find(s) != dp.end()) return dp[s];

        // take one string

        int res1 = 0, res2 = 0;

        if(s[0] != '0'){
            string currString1 = s.substr(1);
            res1 = solve(currString1 , dp);
        }
        // take two string

        if(s.size() >= 2 ){
            string currNumString = s.substr(0,2);
            int currNum = stoi(currNumString);
            if(currNum >= 10 && currNum <= 26){
                string currString2 = s.substr(2);
                res2 = solve(currString2 , dp);
            }
        }
        return dp[s] = res1 + res2 ;
    }
public:
    int numDecodings(string s) {
        map<string, int> dp;

        return solve(s, dp);
    }
};

int main(){
    return 0;
}
