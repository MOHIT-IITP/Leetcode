#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        int count = 0;
        int n = nums.size();
        int mod = 1e9 + 7;

        int i = 0, j = n - 1;
        vector<int> pow2(n, 1);
        for (int k = 1; k < n; ++k)
            pow2[k] = (pow2[k - 1] * 2) % mod;

        while (i <= j) {
            if (nums[i] + nums[j] <= target) {
                count = (count + pow2[j - i]) % mod;
                i++;
            } else {
                j--;
            }
        }

        return count;
    }
};

int main(){
    return 0;
}
