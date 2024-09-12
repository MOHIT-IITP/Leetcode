#include<bits/stdc++.h>
using namespace std;

int numsIsland(vector<vector<char>>& grid){
  int n = grid.size();
  if(n==0) return 0;
  int m = grid[0].size();
  int island = 0;

  vector<vector<int>> vis(n, vector<int>(m,0));
  for(int row = 0;row<n;row++){
    for(int col=0;col<m;col++){
      if(!vis[row][col] && grid[row][col] == '1'){
        island++;
        bfs(row,col,vis,grid);
      }
    }
  }
  return island;
};

void bfs(int row, int col , vector<vector<int>> & vis, vector<vector<char>>& grid){
  vis[row][col] = 1;
  queue<pair<int,int>> q;
  q.push({row,col});
  vector<pair<int, int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
  while(!q.empty()){
    int row = q.front().first;
    int col = q.front().second;
    q.pop();

    // traverse in the neighbour and mark them if its a land
    for(auto it: directions){
      int nrow = row+it.first;
      int ncol = col+it.second;
      if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
        vis[nrow][ncol]=1;
        q.push({nrow,ncol});
      }
    }
  }

};

int main(){
  return 0;
}
