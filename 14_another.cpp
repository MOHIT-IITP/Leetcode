class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];

        int idx = 0 ;
        while(idx < first.length() && idx < last.length() && first[idx] == last[idx]){
            idx++;
        }
        return strs[0].substr(0, idx);
    }
};
