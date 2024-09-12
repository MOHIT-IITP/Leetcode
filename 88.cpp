#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void merge(vector<int>& nums1,int m, vector<int>& nums2,int n){
  int count=0;
  for(int i =0;i<m;i++){
    if(nums1[i]==0){
      nums1[i]=nums2[count];
      count++;
    }
  }
  sort(nums1.begin(),nums1.end());
  for(auto it: nums1){
    cout<<it<<" ";
  }
}

/*another process */
for(int j=0;j<n;j++){
  nums1[m+j]=nums2[j];
}
sort(nums1.begin(),nums1.end());

int main()
{
  vector<int> nums1({1,2,3,0,0,0});
  vector<int> nums2({2,5,6});
  int m,n;
  m=nums1.size();
  n=nums2.size();
  merge(nums1,m,nums2,n);
  return 0;
}
