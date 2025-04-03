#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftMax(n, 0), rightMax(n, 0);

        leftMax[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            leftMax[i] = max(leftMax[i - 1], nums[i]);
        }

        rightMax[n - 1] = nums[n - 1];
        for (int k = n - 2; k >= 0; --k) {
            rightMax[k] = max(rightMax[k + 1], nums[k]);
        }

        long long maxValue = 0;
        for (int j = 1; j < n - 1; ++j) {
            long long value = static_cast<long long>(leftMax[j - 1] - nums[j]) * rightMax[j + 1];
            maxValue = max(maxValue, value);
        }

        return maxValue;
    }
};
