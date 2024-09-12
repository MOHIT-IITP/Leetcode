// the answer is correct and time complexity is O(n2)
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void findUnion(int arr[],int arr1[],int n, int m)
{
  set<int> s;
  for(int i = 0;i<n;i++)
  {
    s.insert(arr[i]);
  }
  for(int j=0;j<n;j++)
  {
    s.insert(arr1[j]);
  }
  while(!s.empty())
  {
    cout<<*s.begin()<<" ";
    s.erase(s.begin());
  }
}

int main()
{ 
  int n = 5; 
  int arr1[] = {1, 2, 3, 4, 5};
  int m = 5; 
  int arr2 [] = {1, 2, 3, 6, 7};
  findUnion(arr1,arr2,n,m);
  return 0;
}
