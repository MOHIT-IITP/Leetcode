#include<bits/stdc++.h>
using namespace std;

int addDigit(int num){
  if(num<10){
    return num;
  }
  int sum =0;
  while(num>0){
    sum += num%10;
    num/=10;
  }
  return addDigit(sum);
}

int main()
{
  int num = 38;
  int result = addDigit(num);
  cout<<result;
  return 0;
}
