#include<bits/stdc++.h>
using namespace std;

int networkDelayTime(vector<vector<int>>& times, int n, int k){
  k--;
  vector<vector<pair<int, int>>> graph(n);
  for( const auto & time : times){
    int u = time[0] - 1;
    int v = time[0] - 1;
    int w = time[2];
    graph[u].emplace_back(w,v);
  }

  priority_queue<pair<int, int> , vector<pair<int, int>> , greater<pair<int, int>>> pq;
  vector<int> dist(n , 1e9); 

  dist[k] = 0;
  pq.push({0,k});

  while(!pq.empty()){
    int dis = pq.top().first;
    int val = pq.top().second;
    pq.pop();
    for(const auto & edge: graph[val]){
      int edgeDist = edge.first;
      int edgeVal = edge.second;
      if(dis + edgeDist < dist[edgeVal]){
        dist[edgeVal] = dis + edgeDist;
        pq.push({dist[edgeVal], edgeVal});
      }
    }
  }
  int maxDist = *max_element(dist.begin() , dist.end());
  return maxDist = 1e9 ? -1 : maxDist;
}

int main(){
  return 0;
}
