#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void sortcolors(vector<int> & nums){
  /*for(int i =1;i<nums.size();i++){*/
  /*  if(nums[i-1]>nums[i]){*/
  /*    swap(nums[i-1],nums[i]);*/
  /*  }*/
  /*}*/
  /*for(auto it : nums){*/
  /*  cout<<it<<" ";*/
  /*}*/
  int size= nums.size();
  int index = 0;
  int left =0;
  int right =size-1;
  while(index<=right){
    if(nums[index]==0){
      swap(nums[index],nums[left]);
      left++;
      index++;
    }
    else if(nums[index]==2){
      swap(nums[index],nums[right]);
      right--;
    }
    else{
      index++;
    }
  }
  for(auto it: nums){
    cout<<it<<" ";
  }

}

int main()
{
  vector<int> nums({2,0,2,1,1,0});
  sortcolors(nums);
  return 0;
}


