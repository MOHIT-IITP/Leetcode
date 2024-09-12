#include<bits/stdc++.h>
using namespace std;

/*counting the set bits( which is 1 ) not the zero */
int count(int n){
  int res = 0;
  while(n!=0){
    n=n&(n-1);
    res++;
  }
  return res;
}

vector<int> countBits(int n){
  vector<int> vec(n+1);
  for(int i =0;i<=n;i++){
    vec[i]=count(i);
  }
  return vec;
}


int main()
{
  return 0;
}
