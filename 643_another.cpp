#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        double findMaxAverage(vector<int> & nums, int k){
            double maxA = 0;
            double currS = 0;
            int n = nums.size();
            for(int i =0;i<k;++i){
                currS += nums[i];
            }
            maxA = (double)(currS/k);
            int left = 0;
            for(int j = k;j<n;j++){
                currS -= nums[left++];
                currS += nums[j];
                maxA = max(maxA , (double)(currS / k));
            }
            return maxA;
        }
}
int main(){
    return 0;
}
