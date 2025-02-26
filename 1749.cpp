#include<bits/stdc++.h>
using namespace std;

class Solution  {
    public: 
        int maxAbsoluteSum(vector<int> & nums){
            int n = nums.size();
            int maxSum = INT_MIN;
            int minSum = INT_MAX;
            int currSum1 = 0;
            int currSum2 = 0;
            for(int i =0;i<n;i++){
                currSum2 += nums[i];
                currSum1 += nums[i];
                minSum = min(minSum , currSum2);
                maxSum = max(maxSum, currSum1);
                if(currSum2 > 0){
                    currSum2 = 0;
                }
                if(currSum1 < 0){
                    currSum1 = 0;
                }
            }
            returm max(abs(minSum), abs(maxSum));
        }
}
int main(){
    return 0;
}
