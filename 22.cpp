#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
void generate(string s, int open , int close){
  if(open == 0 && close== 0){
    ans.push_back(s);
    return;
  }
  if(open>0){
    ans.push_back('(');
    generate(s,open-1,close);
    ans.pop_back();
  }
  if(close>0){
    if(open<close){
      ans.push_back(')');
      generate(s,open,close-1);
      ans.pop_back();
    }
  }
}
vector<string> generateParenthesis(int n){
  string res = "";
  generate(res, n,n);
  return ans;
}

int main()
{
  return 0;
}
