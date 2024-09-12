/*correct and better approach to reverse a string*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void reverseString(vector<char> & s){
  int left=0, right =s.size()-1;
  while(left<right){
    swap(s[left],s[right]);
    left++;
    right--;
  }
}

int main(){
  return 0;
}
