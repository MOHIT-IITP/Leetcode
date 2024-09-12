#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int majority(vector<int> & nums)
{
  int n = nums.size();
  sort(nums.begin(), nums.end());
  return nums[n/2];
}



int main()
{
  vector<int> nums({1,2,1,2,2,2});
  int res = majority(nums);
  cout<<res<<endl;
  return 0;
}
