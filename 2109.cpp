#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";

        int n = s.length();
        int count = 0;
        int m = spaces.size();

        for(int i =0;i<n;i++){
            if( count < m && i == spaces[count] ){
                ans+=" ";
                count++;
            }
            ans+=s[i];
        }
        return ans;
    }
};
int main(){
    return 0;
}
