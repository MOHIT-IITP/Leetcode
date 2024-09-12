#include<bits/stdc++.h>
using namespace std;

int minChange(int n, int k ){
  int x = n ^ k ;
  int count = __builtin_popcount(x);
  int ano = x | k;
  ano = (ano == n) ? count : -1;
  return ano;
}

int main(){
  int n,k;
  cin>>n>>k;
  int res = minChange(n,k);
  cout<<res;
  return 0;
}
