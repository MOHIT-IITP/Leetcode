#include<bits/stdc++.h>
#include<string>

using namespace std;
bool ispali(int x){
  if(x<0){return false;}
  long reverse = 0;
  int xcopy = x;
  while(x>0){
    reverse = (reverse*10)+(x%10);
    x/=10;
  }
  return reverse == xcopy;

}
int main(){
  int x = 121;
  if(ispali(x)){
    cout<<"True";
  }else{
    cout<<"False";
  }
  return 0;
}
