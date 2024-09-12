// hard category question 
// please do it once more
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void nextPermutation(int[] A){
  int n=nums.size(),k,l;
  for(k=n-2;k>=0;k--){
    if(nums[k]<nums[k+1]){
      break;
    }
  }
  if(k<0){
    reverse(nums.begin(),nums.end());
  }else{
    for(l=n-1;l>k; l--){
      if(nums[l]>nums[k]){
        break;
      }
    }
    swap(nums[k],nums[l]);
    reverse(nums.begin()+k+1,nums.end());
  }
}

int main()
{

  return 0;
}
