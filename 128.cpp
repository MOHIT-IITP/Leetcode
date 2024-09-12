// correct code
// brute force approach 
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int longest(vector<int> & nums){
  if(nums.size()==0) return 0;
  sort(nums.begin(),nums.end());
  int n = nums.size();
  int lastsmall = INT_MIN;
  int count = 0;
  int longest = 1;
  for(int i =0;i<n;i++){
    if(nums[i]-1 ==lastsmall){
      count++;
      lastsmall = nums[i];
    }
    else if(lastsmall !=nums[i]){
      count = 1;
      lastsmall = nums[i];
    }
    longest = max(longest,count);
  }
  return longest;
}

int main()
{
  vector<int> nums({100,4,200,1,3,2});
  int result = longest(nums);
  cout<<result;
  return 0;
}
