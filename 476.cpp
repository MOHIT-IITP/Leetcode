#include<bits/stdc++.h>
using namespace std;

// this code exceeded the time limit 
int findcompliment(int num){
  if(num==0) return 1;
  int mask = 1;
  while(mask<=num){
    mask<<=1;
  }
  return (mask-1)^num;
}

// optimized code 
int findcompliment(int num){
  if(num==0) return 1;
  unsigned int mask = ~0;
  while(num&mask){
    mask<<=1;
  }
  return ~mask&~num;
}
int main(){
  int x;
  cin>>x;
  int result = findcompliment(x);
  cout<<result;
  return 0;
}
