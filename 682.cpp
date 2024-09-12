#include<bits/stdc++.h>
using namespace std;

int calPoints(vector<string> & operations){
  vector<int> res;
  for(auto it: operations){
    int nu = stoi(it);
    if(nu=='C'){
      res.pop_back();
    }
    else if(nu=='D'){
      int temp = 2*(res.back());
      res.push_back(temp);
    }
    else if(nu=='+'){
      int temp = res.back()+res.back()-1;
      res.push_back(temp);
    }
    else{
      res.push_back(nu);
    }
  }
  int sum = 0;
  for(auto it:res){
    sum+=it;
  }
  return sum;
}

int main()
{
  vector<string> he({"5","2","C","D","+"});
  int result = calPoints(he);
  cout<<result;
  return 0;
}
