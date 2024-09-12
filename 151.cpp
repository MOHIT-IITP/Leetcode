#include<bits/stdc++.h>
#include<iostream>

using namespace std;

string reverseWord(string s){
  string ans;
  string temp;
  stringstream sz(s);
  vector<string> v;
  while(getline(sz,temp,' ')){
    v.push_back(temp);
  }
  string first = v.front();
  for(auto it:v){
    ans+=v.back();
    if(it==first){
      s+=" ";
    }
    v.pop_back();
  }
  return ans;

}

int main(){
  return 0;
}
