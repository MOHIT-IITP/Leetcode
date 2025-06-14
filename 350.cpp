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
