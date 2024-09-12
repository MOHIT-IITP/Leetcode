#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool searchElem(int arr[], int N, int K)
{

  /*O(n)*/
  for(int i = 0;i<N;i++)
  {
    if(arr[i]==K)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int arr[]={1,2,3,4,5,6};
  int N = sizeof(arr)/sizeof(arr[0]);
  int K = 10;
  searchElem(arr, N,K);

  if(searchElem(arr,N,K)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }

  return 0;
}
