#include<bits/stdc++.h>
using namespace std;

int flip(int a, int b,int c){
  int total = 0;
  for(int i=0;i<32;i++){
    if(c&(1<<i)){
      if(!(a&(1<<i)||(b&(1<<i)))){
        total++;
      }
    }
    else{
      if(a&(1<<i)){total++;}
      if(b&(1<<i)){total++;}
    }
  }
  return total;
}

int main()
{
  return 0;
}
