#include<bits/stdc++.h>
using namespace std;

string losingPlayer(int x, int y ){
  bool count = true;
  while(x>=1 && y>=4){
    x-=1;
    y-=4;
    count = !count;
  }
  if(count ) return "Alice";
  else return "Bob";
}

int main(){
  return 0;
}
