#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        long long  res = 0;

        sort(skill.begin(), skill.end());
        int target = skill[0] + skill[n-1];

        for(int i =0;i<skill.size();i++){
            if(skill[i] + skill[n-i-1] != target){
                return -1;
            }else{
                res += skill[i] * skill[n - i - 1];
            }
        }
        return res ;
    }
}
int main(){
    return 0;
}
