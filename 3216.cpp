#include<bits/stdc++.h>
using namespace std;

string getSmallestString(string s){
  int n = s.size();
  for(int i =1;i<n;i++){
    int curr = s[i-1] - '0';
    int next = s[i] - '0';
    if((curr %2 == 0 && next %2 == 0 ) || (curr%2 != 0 && next %2 !=0)){
      if(curr > next){
        swap(s[i], s[i-1]);
        break;
      }
    }
  }
  return s;
}

int main(){
  return 0;
}
