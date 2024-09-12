// this question is not done
#include<bits/stdc++.h>

using namespace std;

string simplifyPath(string path){
  stack<string> s;
  for(auto it: path){
    s.push(it);
  }
  for(auto it: s){
    cout<<it<<endl;
  }
}

int main()
{
  string path = "/a/../b";
  simplifyPath(path);
  return 0;
}
