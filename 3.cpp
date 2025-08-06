#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;
        int n = s.length();

        int res = 0;
        unordered_map<int, int> mp;
        for(int right = 0 ;right < n; right++){
            mp[s[right]]++;
            for(auto const & [key, value]: mp){
                if(value > 1){
                    mp[s[left]]--;
                    left++;
                }
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};
;

int main(){
    return 0;
}
