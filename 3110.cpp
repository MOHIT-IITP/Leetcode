// you have to find the absolute difference between the letter in the given string
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int scoreString(string s){
  int totalSum = 0;
  for(int i=0;i<s.size()-1;i++){
    totalSum+=abs(s[i]-s[i+1]);
  }
  return totalSum
}

int main()
{
  char ch = 'A';
  cout<<int(ch);
  return 0;
}
