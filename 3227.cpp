#include<bits/stdc++.h>
using namespace std;

bool doesAliceWin(string s){
  int countVowel = 0;
  for(auto c:s){
    if(c == 'a' or c=='e' or c=='i' or c=='o' or c=='u'){
      countVowel++;
    }
  }
  return countVowel;
}
  
