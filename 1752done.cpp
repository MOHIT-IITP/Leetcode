/*great question */
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool checkSort(vector<int>& nums){
  int szz= nums.size();
  int cnn=0;
  for(int i=1;i<szz;i++){
    if(nums[i-1]>nums[i]){
      cnn++;
    }
  }
  if(nums[szz-1]>nums[0]){
    cnn++;
  }
  return cnn<=1;
}



int main(){
  vector<int> arr={3,4,5,1,2};
  checkSort(arr);

  if(checkSort(arr)){
    cout<<"Array is sorted"<<endl;
  }else{
    cout<<"Array is not sorted"<<endl;
  }
  return 0;
}
