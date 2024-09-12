// done 
#include<bits/stdc++.h>
#include<cctype>
#include<iostream>

using namespace std;

bool isPalindrome(string s){
  string res="";
  string alpha = "abcdefghijklmnopqrstuvwxyz1234567890";
  for(auto it: s){
    if(isalpha(it) || isdigit(it)){
      res+=it;
    }
  }
  int left = 0;
  int right = s.length()-1;
  while(left<right){
    if(res[left]!=res[right]){
      return false;
    }else{
      left++;
      right--;
    }
  }
  return true;
}

int main(){
  string s="yo : banana ,  boy";
  if(isPalindrome(s)){
    cout<<"true";
  }else{
    cout<<"false";
  }
  return 0;
}
