#include<bits/stdc++.h>
using namespace std;


void bfs(int start, vector<vector<int>> & adj, int n ){
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(start);
    vis[start] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << endl;

        for(int neighbour: adj[node]){
            if(!vis[neighbour]){
                vis[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

int main(){
    return 0;
}
