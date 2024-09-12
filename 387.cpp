// don't know why this is not working 
#include<bits/stdc++.h>
using namespace std;

int firstuniquechar(string s){
  unordered_map<char,int> mpp;
  for(int i=0;i<s.size();i++){
    if(mpp.find(s[i])!=mpp.end()){
      mpp[s[i]]+=1;
    }
    mpp[s[i]]=1;
  }
  for(int i=0;i<s.size();i++){
    if(mpp[s[i]]==1){
      return i;
    }
  }
  return -1;
}

int main()
{
  return 0;
}

// another approach

int firstUniqueChar(string s){
  vector<int> freq(26);
  for(auto c: s)freq[c-"a"]++;
  for(int index = 0;index<s.size();index++){
    if(freq[s[index]-'a']==1)return index;
  }
  return -1;
}
