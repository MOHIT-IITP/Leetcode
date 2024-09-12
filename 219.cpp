// this code is written by mohit_iitp 
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool contain(vector<int> & nums, int k){
  for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
      if(nums[i]==nums[j] && abs(i -j)<=k){
        return true;
      }
    }
  }
  return false;
}

int main()
{
  vector<int> nums({1,2,3,1,2,3});
  int k = 2;
  if(contain(nums,k)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
  return 0;
}

// copied from of the leetcode solution 
bool contain(vector<int> & nums, int k){
  unordered_map<int, int> mp;
  int n = nums.size();
  for(int i =0;i<n;i++){
    if(mp.count(nums[i])){
      if(abs(i-mp[nums[i]])<=k){
        return true;
      }
    }
    mp[nums[i]]=i;
  }
  return false;
}
