// giving run time error
#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlower(vector<int>& flowerbed, int n){
  for(int i=0;i<flowerbed.size();i++){
    if(i!=0 && i!=flowerbed.size()-1 && flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
      flowerbed[i]=1;
      n--;
      continue;
    }
    if(i==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
      flowerbed[i]=1;
      n--;
      continue;
    }
    if(i==flowerbed.size()-1 && flowerbed[i-1]==0 && flowerbed[i]==0){
      n--;
      flowerbed[i]==1;
      continue;
    }
  }
  if(n>0){
    return false;
  }
  return true;
}

int main()
{
  vector<int> a({1,0,0,0,1});
  int n = 1;
  if(canPlaceFlower(a,n)){
    cout<<"true"<<endl;
  }else{
    cout<<"false"<<endl;
  }
  return 0;
}

// another code solution 

bool canPlaceFlower(vector<int> & flowerbed, int n){
  for(int i=0;i<flowerbed.size();i++){
    bool left = i == 0 || flowerbed[i-1]==0;
    bool right = i == flowerbed.size()-1 || flowerbed[i+1]==0;
    if(left && right && flowerbed[i]==0){
      flowerbed[i]==1;
      n--;
    }
  }
  return n<=0;
}





