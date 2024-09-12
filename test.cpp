#include<bits/stdc++.h>
using namespace std;

/*int getKLargestElement(vector<int>& nums, int k){*/
/*  priority_queue<int, vector<int> , greater<int>> minH;*/
/*  for(int i=0;i<k;i++){*/
/*    minH.push(nums[i]);*/
/*  }*/
/*  int n = nums.size();*/
/*  for(int i=0;i<n;i++){*/
/*    if(minH.top()<nums[i]){*/
/*      minH.pop;*/
/*      minH.push(nums[i]);*/
/*    }*/
/*  }*/
/*  return p.top();*/
/**/
/*}*/
/**/
/*void getbit(int n){*/
/*  vector<int> res;*/
/*  if(n==0){*/
/*    cout<<0<<" ";*/
/*    return;*/
/*  }*/
/*  while(n>0){*/
/*    res.push_back(n%2);*/
/*    n/=2;*/
/*  }*/
/*  reverse(res.begin(), res.end());*/
/*  for(auto it: res){*/
/*    cout<<it<< " ";*/
/*  }*/
/*}*/
/**/

int main(){
  int n;
  cin>>n;
  setfill('0')<<setw(4)<<n;
  cout<<n;
  return 0;
}
