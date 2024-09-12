// done in cpp longest palindrome leetcode 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int longest(string s){
  int length =0;
  set<char> st;
  for(char elem:s){
    if(st.find(elem)!=st.end()){
      st.remove(elem);
      length+=2;
    }
    else{
      st.insert(elem);
    }
  }
  if(!st.empty()){
    length++;
  }
  return length;
}

int main()
{
  return 0;
}

