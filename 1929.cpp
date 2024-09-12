#include<bits/stdc++.h>
#include<iostream>

using namespace std;

vector<int> getConcatenation(vector<int> & nums){
  vector<int> res;
  int count=0;
  while(count<2){

    for(int j=0;j<nums.size();j++){
      res.push_back(nums[j]);
    }
    count++;
  }
  return res;
}

using namespace std;

int main()
{
  vector<int> nums({1,2,1});
  vector<int> he = getConcatenation(nums);
  for(int i=0;i<he.size();i++)
    cout<<he[i]<<" ";
  return 0;
}
