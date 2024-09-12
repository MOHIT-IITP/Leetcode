#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
       int cnt1=0,cnt0,sz=nums.size(); 
       cnt1 =count(nums.begin(),nums.end(),1);
       int windowsize = cnt1;
       for(int i=0;i<windowsize;i++){
        if(nums[i]==0) cnt0++;
       }
       int mn=cnt0;

       for(int i=windowsize;i<windowsize+sz;i++){
        if(nums[i%sz]==0) cnt0++;
        if(nums[i-windowsize]==0) cnt0--;
        mn=min(mn,cnt0);
       }
       return mn;
    }
};

int main()
{
  return 0;
}
