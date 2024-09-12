#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
  return (c=='a' || c=='A' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='u' || c=='U');
}

string reverseVowels(string s){
  int left =0;
  int right = s.size()-1;
  while(left < right){
    while(left<right  && !isVowel(s[left])){
      left++;
    }
    while(left<right && !isVowel(s[right])){
      right--;
    }
    if(left<right){
      swap(s[left],s[right]);
        left++;
        right--;
    }
  }
  return s;
}

int main()
{
  string s="hello";
  string res = reverseVowels(s);
  cout<<res;
  return 0;
}
