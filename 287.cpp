include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 1, right = nums.size() - 1; // search space [1..n]
        while (left < right) {
            int mid = left + (right - left) / 2;

            // count numbers <= mid
            int cnt = 0;
            for (int num : nums) {
                if (num <= mid) cnt++;
            }

            if (cnt > mid) {
                // duplicate is in [left, mid]
                right = mid;
            } else {
                // duplicate is in [mid+1, right]
                left = mid + 1;
            }
        }
        return left;
    }
};
int main(){
  return 0;
}

