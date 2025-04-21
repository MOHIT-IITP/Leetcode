class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long minPrefix = 0, maxPrefix = 0, curr = 0;
        for (int diff : differences) {
            curr += diff;
            minPrefix = min(minPrefix, curr);
            maxPrefix = max(maxPrefix, curr);
        }
        
        long long minStart = lower - minPrefix;
        long long maxStart = upper - maxPrefix;
        
        return max(0LL, maxStart - minStart + 1);
    }
};

