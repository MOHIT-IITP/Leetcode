#include<bits/stdc++.h>
using namespace std;

double myPow(double x, long n){
  if(x==0){return 0;}
  if(n==0){return 1;}
  if(n<0){
    x=1/x;
    n=-n;
  }
  double half = myPow(x,abs(n/2));
  double result = half*half;
  if(n%2!=0){
    result*=x;
  }
  return result;
}

int main()
{
  return 0;
}
