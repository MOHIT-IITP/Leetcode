// by void function the answer is correct
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// the main problem is that in leetcode this function is in int 
void removeElement(vector<int>& nums, int val)
{
  for(int i=0;i<nums.size();i++)
  {
    if(nums[i]==val)
    {
      nums.erase(nums.begin()+i);
    }
  }
}

int main()
{
  vector<int> nums({1,2,2,3,4,5});
  int val = 2;
  removeElement(nums,val);
  for(auto it=nums.begin();it<nums.end();it++){
    cout<<*it<<endl;
  }
  return 0;
}
