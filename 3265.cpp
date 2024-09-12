#include<bits/stdc++.h>
using namespace std;

bool isSame(int a, int b){
  vector<pair<int,int>> vp;
  while((a>0) || (b>0)){
    int ra = a%10;
    int rb = b%10;
    if(a!=0) a/=10;
    if(b!=0) b/=10;
    if(ra!=rb){
      if(vp.size()>=2) return false;
      vp.push_back({ra,rb});
    }
  }
  if((vp.size()==1) || (vp.size() > 2)) return false; 
  if(vp.size() == 0) return false;
  if((vp[0].first == vp[1].second) && (vp[1].first == vp[0].second)){
    return false;
  }
}

int countPairs(vector<int>& nums){
  int cnt = 0 ;
  int n = nums.size();
  for(int i =0;i<n;i++){
    for(int j = i+1; j < n; j++){
      if(isSame(nums[i],nums[j])){
        cnt++;
      }
    }
  }
  return cnt;
}

int main(){
  return 0;
}
