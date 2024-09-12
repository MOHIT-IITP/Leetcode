#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
  vector<int> nums({1,2,1,2,1,1,1,2,2,3,4,5,6,6,6,4,4,3});
  unordered_map<int,int> mp;
  for(auto it: nums){
    if(mp.count(it)){
      mp[it]+=1;
    }else{
      mp[it]=1;
    }
  }
  for(auto it:mp){
    cout<<it.first<<" : "<<it.second<<endl;
  }
  return 0;
}
