/*correct and easy approach to rotate a array list etc*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int rotate(vector<int>& nums,int k){
  int n=nums.size();
  k = k%n;

  //reversing the whole array 
  reverse(nums.begin(),nums.end());
  // reversing the array from begin upto k
  reverse(nums.begin(),nums.begin()+k);
  // reversing the array from k to end
  reverse(nums.begin()+k,nums.end());

}

int main()
{
  vector<int> nums({1,2,3,4,5});
  int k=1;
  rotate(nums,k);
  return 0;
}
