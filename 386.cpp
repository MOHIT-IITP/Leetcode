#include <bits/stdc++.h>
using namespace std;

class Solution{
  private:
    void dfs(int & i , vector<int> & ans, int & n){
      if(i > n) return ;
      ans.push_back(i);
      for(int x = 0;x <= 9;x++){
        int m = i * 10 + x;
        if(m > n) return ;
        dfs(m , ans, n);
      }
    }
  public:
    vector<int> lexicalOrder(int n){
      vector<int> ans;
      for(int i = 1;i<=9;i++){
        dfs(i, ans, n);
      }
    }
}

int main(){
  return 0;
}
