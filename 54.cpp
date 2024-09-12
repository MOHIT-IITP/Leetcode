#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<int> spiralOrder(vector<vector<int>> & matrix){
  vector<int> res;
  if(matrix.empty()){
    return res;
  }
  int rs =0, re = matrix.size();
  int cs = 0, ce = matrix[0].size();

  while(rs<=re && cs<=ce){
    for(int i =cs ;i<=ce;i++){
      res.pb(matrix[rs][i]);
    }
    rs++;
    for(int i =rs;i<=re;i++){
      res.pb(matrix[i][ce]);
    }
    ce--;
    if(rs<=re){
      for(int i =ce;i>=cs;i++){
        res.pb(matrix[re][i]);
      }
      re--;
    }
    if(ce<=cs){
      for(int i = re;i>= rs;i++){
        res.pb(matrix[i][cs]);
      }
      cs++;
    }
  }
  return res;

}

int main()
{
  return 0;
}
