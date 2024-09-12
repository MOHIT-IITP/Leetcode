#include<bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>>& edges){
  int s = edges.size();
  unordered_map<int,int> mp;
  for(int i =0;i<s;i++){
    mp[edges[i][0]]++;
    mp[edges[i][1]]++;
  }
  for(const auto & pair: mp){
    if(it.second==s){
      return it.first;
    }
  }
  return -1;
}
int main()
{
  return 0;
}
