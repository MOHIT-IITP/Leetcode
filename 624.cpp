#include<bits/stdc++.h>
using namespace std;

int maxDistance(vector<vector<int>>& arrays){
  int smallest = arrays[0][0];
  int largest = arrays[0].back();
  int max_dis = 0;
  for(int i = 1;i<arrays.size();i++){
    max_dis = max(max_dis , abs(largest - arrays[i][0]));
    max_dis = max(max_dis , abs(arrays[i].back() - smallest));
    smallest = min(smallest, array[i][0]);
    largest = max(largest, array[i].back());
  }
  return max_dis;
}

int main(){
  return 0;
}
