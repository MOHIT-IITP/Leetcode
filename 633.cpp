// hard question ( medium level)
#include<bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c){
  if(c<0) return false;
  long left = 0;
  long right = sqrt(c);
  while(left<=right){
    long  sum = left*left + right * right;
    if(sum==c) return true;
    else if(sum<c) left++;
    else if(sum>c) right--;
  }
  return false;
}

int main(){
  int c = 1 ;
  if(judgeSquareSum(c)){
    cout<<"True"<<endl;
  }else{
    cout<<"False"<<endl;
  }
  return 0;
}
