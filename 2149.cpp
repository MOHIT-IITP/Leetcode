#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rearrangeArray(vector<int> &nums){
  int n = nums.size();
  vector<int> pos;
  vector<int> neg;
  vector<int> res(n);
// seperating the array into neg and pos 
   for(auto it : nums){
    if(it>0){
      pos.push_back(it);
    }
    else{
      neg.push_back(it);
    }
  }
// now putting the negative and positive back together
// iterating up to the positive vector size
  for(int j =0;j<pos.size();j++){
    res.push_back(pos[j]);
    res.push_back(neg[j]);
  }
  for(auto it: res){
    cout<<it<<" ";
  }

}


int main()
{
  vector<int> nums({1,-2,-3,-4,5,65});
  rearrangeArray(nums);
  return 0;
}
