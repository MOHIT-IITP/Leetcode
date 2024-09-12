#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> & nums, int k){
  // using the min heap
  priority_queue<int, vector<int> , greater<int>> p ;
  for(int i =0;i<k;i++){
    p.push(nums[i]);
  }
  for(int j = k ;j<nums.size();j++){
    if(nums[j]>p.top()){
      p.pop();
      p.push(nums[j]);
    }
  }
  return p.top();
}

int main(){
  return 0;
}
