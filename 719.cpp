#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    static int countpair(int x, vector<int> & nums){
        const int n = nums.size();
        int cnt = 0;
        for(int l=0, r=1 ; r<n;r++){
            while(r>l && nums[r]-nums[l]>x){
                l++;
            }
            cnt+=r-l;
        }
        return cnt;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        const int M = nums.back();

        int l = 0 , r=M, m;
        while(l<r){
            m=(r+l)/2;
            if(countpair(m,nums)<k){
                l=m+1;
            }else{
                r=m;
            }
        }
        return l;
    }
};
int main(){
  return 0;
}
