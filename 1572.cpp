#include<bits/stdc++.h>

using namespace std;

int diagonalSum(vector<vector<int>> & matrix){
  int sum =0;
  for(int i=0;i<matrix.size();i++){
    sum+=matrix[i][i];
    // check the middle element, which should go only one time
    if(i!=n-i-1){
      sum+=matrix[i][n-i-1]
    }
  }
  return sum;
}

int main()
{
  return 0;
}
