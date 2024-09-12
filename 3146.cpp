#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int findpermutation(string s, string t){
  int result =0;
  for(int i=0;i<s.size();i++){
    char letter = s[i];
    for(int j =0;j<t.size();j++){
      if(t[j]==s[i]){
        result += abs(i-j);
      }
    }
  }
  return result;
}

int main()
{
  string s="abc", t ="bac";
  int result =findpermutation(s,t);
  cout<<result;
  return 0;
}
