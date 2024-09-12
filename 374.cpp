#include<bits/stdc++.h>
using namespace std;

int guessNumber(int n ){
  int l=0,r=n;
  while(l<=r){
    int m = l+(l-r)/2;
    int res = guess(m);
    if(res == 0){
      return mid;
      break;
    }
    if(res== -1){
      end = mid-1;
    }
    if(res==1){
      start = mid+1;
    }
    return -1;
  }
}

int main()
{
  return 0;
}
