#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int maxProfit(vector<int> & nums){
  int index = nums[0];
  int maxProfit = 0;
  for(int i =0;i<nums.size();i++){
    if(index>nums[i]){
      index = nums[i];
    }
    else if((nums[i]-index)> maxProfit){
      maxProfit = nums[i]-index;
    }
  }
  return maxProfit;
}

int main()
{
  vector<int> nums({7,1,5,3,6,4});
  int res = maxProfit(nums);
  cout<<res<<endl;
  return 0;
}
