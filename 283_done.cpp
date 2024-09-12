// working code
// task: to send the zeroes to the end
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void moveZeroes(vector<int>& nums)
{
  int n =nums.size();
  int last = 0;
  for(int i=0;i<n;i++)
  {
    if(nums[i]!=0){

// main thing is we can swap the element  
      swap(nums[i],nums[last]);
      last++;
    }
  }
}

int main(){
  vector<int> nums({1,2,0,0,4,5});
  moveZeroes(nums);
  return 0;
}
