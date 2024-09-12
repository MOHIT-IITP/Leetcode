#include<bits/stdc++.h>
using namespace std;

string defandIPaddr(string address){
  string res;
  for(int i=0;i<address.size();i++){
    if(address[i]=='.'){
      res+=('[');
      res+=(address[i]);
      res+=(']');
    }else{
      res+=(address[i]);
    }
  }
  return res;
}

int main()
{
  return 0;
}
