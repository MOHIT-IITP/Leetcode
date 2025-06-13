#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        for(auto it : nums1){
            vec.push_back(it);
        }
        for(auto lit: nums2){
            vec.push_back(lit);
        }
        sort(vec.begin(), vec.end());

        int n = vec.size();
        double ans = 0;
        if(n%2==0){
            ans = vec[n/2 - 1 ] + vec[n/2];
            ans /= 2;
        }else{
            ans += vec[n/2];
        }
        return ans;
    }
};

int main(){
    return 0;
}
