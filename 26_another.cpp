// done and the answer is also correct 
#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int removeDuplicate(vector<int>& nums)
{
  int k=1;
  for(int i=1;i<nums.size();i++)
  {
    if(nums[i]!=nums[i-1])
    {
      nums[k]=nums[i];
      k++;
    }
  }
  return k;
}

int main(){
  return 0;
}
