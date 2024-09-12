#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

double findMaxAverage(vector<int>& nums , int k){
  int i=0;
  int j=k-1;
  int sum = 0;
  for(int x =0;x<=j;j++){
    sum+=nums[x];
  }
  int maxsum = sum;
  j++;
  while(j<nums.size()){
    sum-=nums[i++];
    sum+=nums[j++];
    maxsum = max(sum, maxsum);
  }
  return maxsum / double(k);


int main()
{
  return 0;
}
