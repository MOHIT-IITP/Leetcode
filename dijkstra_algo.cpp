#include<bits/stdc++.h>
using namespace std;

void dijkstraAlgo(int src, int n , vector<pair<int, int>> adj[]){

    vector<int> dist(n+1, INT_MAX);
    dist[src] = 0;

    priority_queue<pair<int, int> , vector<pair<int, int>> , greater<pair<int, int>>> pq;

    pq.push({0, src}); // dist , node 
                       
    while(!pq.empty()){
        int [d, u] = pq.top();
        pq.pop();

        if(d > dist[u]) continue;

        for(auto [v, w] : adj[u]){

            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v})
            }

            // we can also do this 
            // dist[v] = max(dist[v] , dist[u] + w);
        }
    }
    
}
