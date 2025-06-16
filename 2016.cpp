#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j] > nums[i]){
                    maxi = max(maxi , nums[j] - nums[i]);
                }
            }
        }
        if(maxi == INT_MIN){
            maxi = -1;
        }
        return  maxi;
    }
};

int main(){
    return 0;
}
