#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> & nums){
  sort(nums.begin(),nums.end());
  int n = nums.size();
  for(int i=1;i<n;i+=3){
    if(nums[i]!=nums[i-1])
    {
      return nums[i-1];
    }
  }
  return nums[n-1];
}

int main()
{
  return 0;
}
