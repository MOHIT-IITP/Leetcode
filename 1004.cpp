#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int longestOnes(vector<int> & nums, int k){
    int left=0,right=0;
    int maxlen = 0;
    int zeros=0;
    int len = 0;
    while(right<nums.size()){
      if(nums[right]==0){zeros++;}
      if(zeros>k){
        if(nums[left]==0){
          zeros--;
        }
        left++;
      }
      if(zeros<=k){
        len = right-left+1;
        maxlen = max(len , maxlen);
      }
      right ++;
    }
    return maxlen;

  }
}

int main(){
  return 0;
}

