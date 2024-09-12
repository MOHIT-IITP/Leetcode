// correct answer
// the answer is correct but it is O(n2) , you have to do it in O(n)
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int max(vector<int> & nums){
  int n = nums.size();
  vector<int> another;
  for(int i =0;i<n;i++){
    int s= 0;
    for(int j=i;j<n;j++){
      s+=nums[j];
      another.push_back(s);
    }
  }
  for(auto it: another){
    cout<<it<<endl;
  }
  return *max_element(another.begin(),another.end());
}

int main()
{
  vector<int> nums({5,4,-1,7,8});
  int result = max(nums);
  cout<<result;
  return 0;
}
