#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
  /*if(n==0){return false;}*/
  /*if((n&n-1)==0){return true;}*/
  /*return false;*/
  //single line answer
  return (n>0 && (n & (n-1))==0) ? true:false;
}

int main()
{
  if(isPowerOfTwo(16)){
    cout<<"True";
  }
  else{
    cout<<"False";
  }
  return 0;
}
