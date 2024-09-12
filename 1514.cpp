#include<bits/stdc++.h>
using namespace std;

typedef pair<double, int> P;
double maxProbability(int n, vector<vector<int>>& edges,vector<double>& succProb, int start, int end) {
  unordered_map<int, vector<pair<int, double>>> adj;
  vector<P> res(n,0.0);

  // made the required vector called adjacent
  for(int i =0; i < edges.size(); i++){
    int u = edges[i][0];
    int v = edges[i][1];
    double w = edges[i];
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
  }

  // djikstra algo
  priority<P> pq; // max heap
  res[start_node] =  1.0;
  pq.push({1.0, start_node});

  while(!pq.empty()){
    double currProb = pq.top().first;
    int currNode = pq.top().second;

    pq.pop();

    for(const auto & child : adj[currNode]){
      int edgeNode = child.second;
      double edgeProb = child.first;
      if(edgeProb * currProb > res[edgeNode]){
        res[edgeNode] = edgeProb * currProb;
        pq.push({res[edgeNode], edgeNode});
      }
    }
    return res[end_node];
  }
 
}

int main(){
  return 0;
}
