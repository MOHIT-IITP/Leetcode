#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int longestSubarray(int arr[],int N,int K)
{
  int len=0;
  for(int i =0;i<N;i++){
    int s=0;
    for(int j=i;j<N;j++){
      s+=arr[j];
      if(s==K)
        len = max(len, j-i+1);
    }
  }
  return len;
}

int main()
{
  int arr[]={10,5,2,1,7,9};
  int N=sizeof(arr)/sizeof(arr[0]);
  int K = 15;
  int result = longestSubarray(arr,N,K);
  cout<<result;
  return 0;
}
