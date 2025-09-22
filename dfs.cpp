#include<bits/stdc++.h>
using namespace std;


void dfs(int node, vector<vector<int>> & adj, vector<bool> & visited ){
    visited[node] = true;
    cout<<node<<" ";

    for(int neighbour: adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, adj, visited);
        }
    }
}

int main(){
    return 0;
}
