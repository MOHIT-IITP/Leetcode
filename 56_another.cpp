// correct answer using O(n)
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int maxSubarray(vector<int> & nums){
  int max = INT_MIN;
  int currentsum = 0;
  for(int i=0;i<nums.size();i++){
    currentsum +=nums[i];
    if(currentsum > max){
      max = currentsum;
    }
    if(currentsum<=0){
      currentsum=0;
    }
  }
  return max;
}

int main()
{
  vector<int> nums({-2,1,-3,4,-1,2,1,-5,4});
  int result = maxSubarray(nums);
  cout<<result;
  return 0;
}
