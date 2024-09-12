/*correct but only for some test cases*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int searchInsert(vector<int> & nums, int target){
  for(int i =0;i<nums.size();i++){
    if(nums[i]==target){
      return i;
    }
    else{
      if(nums[i]+1 == target){
        return i+1;
      }
    }
  }
  return 0;
}


int main()
{
  vector<int> nums({3,6,7,8,10});
  int target = 5;
  int res = searchInsert(nums,target);
  cout<<res;
  return 0;
}

/*correct answer*/
int searchInsert(vector<int> & nums, int target){
  int low=0;
  int high =nums.size();
  int mid;
  if(target>nums[high-1]){
    return high;
  }
  while(low<=high){
    mid=(low+high)/2;
    if(nums[mid]==target){
      return mid;
    }
    if(target<nums[mid]){
      high =mid-1;
    }else{
      low=mid+1;
    }
  }
  return low;
}

