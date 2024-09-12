// correct code working on the leetcod3
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void rotate(vector<vector<int>>& matrix){
  int  n = matrix.size();
  for(int i =0;i<n;i++){
    for(int j = i;j<n;j++){
      swap(matrix[j][i], matrix[i][j]);
    }
  }
  for(int i = 0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i],end());
  }
}


int main()
{
  vector<vector<int>> n({{1,2},{2,3}});
  rotate(n);
  return 0;
}
