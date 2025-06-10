class Solution {
public:
    int maxDifference(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        for(auto it : s){
            mp[it]++;
        }
        int even = INT_MAX, odd = INT_MIN;
        for(auto const & it :  mp){
            if(it.second % 2 == 0 ){
                even = min(even, it.second);
            }
            else if(it.second % 2 != 0 ){
                odd = max(odd, it.second);
            }
        }
        return (odd-even);
    }
};
