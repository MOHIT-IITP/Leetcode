class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = 1;

        int count = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<int> s;
            for (int j = i; j < n; j++) {
                s.insert(nums[j]);
                if (s.size() == st.size()) {
                    count++;
                }
            }
        }
        return count;
    }
};

