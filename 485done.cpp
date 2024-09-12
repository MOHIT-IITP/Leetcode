/*this code is working qno 485 leetcode Done*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int findMaxConsecutive(vector<int>&nums)
{
  set<int, greater<int>> se;
  int n=nums.size();
  int count=0;
  for(int i =0;i<n;i++)
  {
    if(nums[i]==1)
    {
      count++;
    }else{
      se.insert(count);
      count=0;
    }
  }
  se.insert(count);
  int maxCount = *se.begin();
  return maxCount;
}


int main()
{
  vector<int> nums({1,0,1,1,1});
  findMaxConsecutive(nums);
  return 0;
}
