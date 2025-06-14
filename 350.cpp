#include<bits/stdc++.h>
using namespace std;

// using two pointer algo
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> vec;

        int left = 0;
        int right = 0;
        while(left < nums1.size() && right < nums2.size()){
            if(nums1[left] < nums2[right]){
                left++;
            }
            else if(nums1[left] > nums2[right]){
                right++;
            }
            else if(nums1[left] == nums2[right]){
                vec.push_back(nums1[left]);
                left++;
                right++;
            }
        }
        return vec;

    }
};
int main(){
    return 0;
}



// using binary search

class Solution {
public:
    int binary(vector<int>& nums, int left, int right, int target) {
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                if (mid == left || nums[mid - 1] < target) {
                    return mid;
                } else {
                    right = mid - 1;
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        if (n > m) {
            return intersect(nums2, nums1);
        }

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int st = 0;
        vector<int> vec;

        for (int i = 0; i < n; i++) {
            int target = nums1[i];
            int id = binary(nums2, st, m - 1, target);

            if (id != -1) {
                vec.push_back(target);
                st = id + 1;
            }
        }

        return vec;
    }
};


