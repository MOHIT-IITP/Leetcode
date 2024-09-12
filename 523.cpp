// solution is correct 
// passes 94/99 test case
// limit time excedds
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool checkSubarray(vector<int>& nums, int k){
  for(int i=0;i<nums.size();i++){
    int sum = 0;
    for(int j=i;j<nums.size();j++){
      sum+=nums[j];
      if(sum%k==0 && j!=i){
        return true;
      }
    }
  }
  return false;
}
int main()
{
  vector<int> nums({23,2,6,4,7});
  int k =13;
  if(checkSubarray(nums,k)){
    cout<<"True";
  }else{
    cout<<"False";
  }
  return 0;
}

// correct solution 
int n = nums.size(); unordered_map<int, int> remainderMap; int cumulativeSum = 0; // Step 1: Initialize Remainder Map remainderMap[0] = -1;

// Step 2: Iterate Through the List
for (int i = 0; i < n; i++) {
  // Step 3: Calculate Cumulative Sum
  cumulativeSum += nums[i];

  // Step 4: Calculate Remainder
  int remainder = k == 0 ? cumulativeSum : cumulativeSum % k;

  // Step 5: Update Remainder Map
  if (remainderMap.count(remainder)) {
    // Check if segment length is at least two
    if (i - remainderMap[remainder] > 1) {
      return true;
    }
  } else {
    remainderMap[remainder] = i;
  }
}

// Step 6: Return the Result
return false;

