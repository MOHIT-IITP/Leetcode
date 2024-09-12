/*done the missing number question 268 in leetcode*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int missingNumber(vector<int> & nums)
{
  int n = nums.size();
  int sum = (n(n+1))/2;
  int indexSum = 0;
  for(int i=0;i<n;i++)
  {
    indexSum+=nums[i];
  }
  return sum-indexSum;
}

int main()
{
  return 0;
}
