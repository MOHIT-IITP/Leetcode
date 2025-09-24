// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

void bellmanFord(int n, int src, vector<tuple<int,int,int>> &edges){
    vector<int> dist(n+1, 1e9);
    dist[src] = 0;

    for(int i = 0 ; i < n ;i++){
        for(auto [u, v, w]: edges){
            if(dist[u] != 1e9 && dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
            }
        }
    }
}


// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//
//     }
//     return 0;
// }
