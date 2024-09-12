#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> vec;
        const int mod = 1e9 + 7;
        for(int i =0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum +=nums[j]%mod;
                vec.push_back(sum);
            }
        }
        sort(vec.begin(),vec.end());
        int ans =0;
        for(int i=left-1;i<right;i++){
            ans+=vec[i]%mod;
        }
        return ans;
        
    }
};
int main(){
  return 0;
}
