#include<bits/stdc++.h>

using namespace std;


int countStudents(vector<int> & students, vector<int>& sandwiches){
  unordered_map<int,int> mpp;
  for(auto it: students){
    mpp[it]++;
  }
  int res = sandwiches.size();
  for(auto elem: sandwiches){
    if(mpp.find(elem)!=mpp.end() && mpp[elem]>0){
      mpp[elem]-=1;
      res--;
    }else{
      return res;
    }

  }
  return res;
}


int main()
{
  vector<int> m({1,1});
  vector<int> n({0,1});
  int res = countStudents(m,n);
  cout<<res;
  return 0;
}
