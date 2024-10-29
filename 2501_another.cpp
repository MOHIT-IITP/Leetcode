#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> st(nums.begin(), nums.end());  
        unordered_map<int, int> mp;

        for (int num : nums) {
            if (mp.find(num) != mp.end()) continue; 

            int count = 0;
            long long sq = num; 

            while (st.count(sq)) {
                count++;
                mp[num] = count;
                sq *= sq;
                if (sq > INT_MAX) break; 
            }
        }

        int maxLen = -1;
        for (const auto& it : mp) {
            maxLen = max(maxLen, it.second);
        }

        return maxLen == 1 ? -1 : maxLen;
    }
};

int main(){
    return 0;
}
