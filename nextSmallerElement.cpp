#include<bits/stdc++.h>
#include<iostream>

using namespace std;

vector<int>  nextsmaller(vector<int> & nums){
  stack<int> st;
  st.push(-1);
  for(int i =nums.size()-1; i>=0;i--){
    while(st.top()>=nums[i]){
      st.pop();
    }
    nums[i]=st.top();
    st.push(nums[i]);
  }
  return nums;
}

int main()
{
  vector<int> nums({8,4,6,2,3});
  vector<int> res  = nextsmaller(nums);
  for(auto nums: res){
    cout<<nums<<" ";
  }
  return 0;
}
