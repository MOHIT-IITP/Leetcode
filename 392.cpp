#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isSequence(string s, string t){
  int index = 0;
  for(int i=0;i<t.length();i++){
    if (index>=0 && s[index]== t[i]){
      index++;
    }
    if( index==s.length()-1){
      return true;
    }
  }
  return false;
}

int main(){
  string s ="ab";
  string t = "adefb";
  if(isSequence(s,t)){
    cout<<"True";
  }else{
    cout<<"False";
  }
}
