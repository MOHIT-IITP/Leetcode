/*check this code there is an error*/
#include<bist/stdc++.h>
#include<iostream>

using namespace std;

int solution(string haystack, string needle){
  int n = needle.size();
  string word;
  for(int i =0;i<haystack.size();i++){
    word = haystack[i:i+n];
    if word == needle{
      return i;
    }
  }
  return -1;
}

int main()
{
  return 0;
}
