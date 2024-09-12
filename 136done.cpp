#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int SingleNumber(vector<int> & nums)
{
  int size = nums.size();
  int res=0;
  for(int i=0;i<size;i++)
  {
    res=res^nums[i];
  }
  return res;
}

int main()
{
  vector<int> nums({4,1,2,1,2});
  int result = SingleNumber(nums);
  cout<<result;
  return 0;
}
