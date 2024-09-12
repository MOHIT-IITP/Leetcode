#include<bits/stdc++.h>
using namespace std;

void mergeAlternately(string word1 , string word2){
  int maxi= max(word1.size(),word2.size());
  string res = "";
  for(int i=0;i<maxi;i++){
    if(i<word1.size()){
      res+=word1[i];
    }
    if(i<word2.size()){
      res+=word2[i];
    }
  }
  return res;

}

int main()
{
  string a = "aab";
  string b = "aaaabbbb";
  mergeAlternately(a,b);
  return 0;
}
