#include<bits/stdc++.h>
using namespace std;

vector<int> getFinalState(vector<int>& nums, int k, int multiplier){
  int n = nums.size();
  while(k--){
    int ind = 0;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
      if(nums[i] < min){
        min = nums[i];
        ind = i;
      }
    }
    nums[ind] *= multiplier; 
  }
  return nums;
}

int main(){
  return 0;
}
