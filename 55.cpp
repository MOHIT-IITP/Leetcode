#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void canJump(vector<int>& nums){
  int last = n-1;
  int lastelem = nums[n-1];
  int n = nums.size();
  if(n-2==1){
    swap(nums[n-1],nums[n-2]);
    nums.pop_back();
  }
  int index = 0;
  int currentpos = nums[index];
  while(currentpos >0){
    index ++;
    currentpos--;
  }
  currentpos = nums[index];
}

int main(){
  vector<int> nums({3,2,1});
  canJump(nums);
  return 0;
}
