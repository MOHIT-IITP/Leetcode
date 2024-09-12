#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int minimumPushes(string word){
  vector<int> freq(26,0);
  for(char & ch: word){
    freq[ch-'a']++;
  }
  int res =0;
  for(int i=0;i<26;i++){
    res += freq[i]*((i/8)+1);
  }
  return res;
}

int main(){
  return 0;
}
