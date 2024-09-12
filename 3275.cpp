#include<bits/stdc++.h>
using namespace std;

vector<int> resultsArray(vector<vector<int>> & queries, int k){
  int n = queries.size();
  priority_queue<int> pq; // maxheap
  vector<int> res(n);
  for(int i =0 ;i<n;i++){
    pq.push(abs(q[i][0]) + abs(q[i][1]));
    if( pq.size() > k ) pq.pop();
    res[i] = (pq.size() == k) ? pq.top() : -1;
  }
  return res;
}

int main(){
  return 0;
}
