#include<bits/stdc++.h>
using namespace std;

int hammingweight( int n){
  int res=0;
  while(n){
    n&=(n-1);
    res++;
  }
  return res;
}

int main()
{
  int result = hammingweight(11);
  cout<<result;
  return 0;
}
