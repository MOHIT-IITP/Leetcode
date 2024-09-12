// is happy in leetcode , code solution below 
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool isHappy(int n){
  set<int> s;
  string curr = to_string(n);
  while(!s.count(stoi(curr))){
    s.insert(stoi(curr));
    int sum =0;
    for(auto it: curr){
      int digit =it - '0';
      sum +=digit*digit;
    }
    if(sum==1){
      return true;
    }
    curr = to_string(sum);
  }
  return false;
}

int main{
  return 0;
}
