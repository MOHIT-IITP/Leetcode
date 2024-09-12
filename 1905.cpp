class Solution{
  vector<pair<int, int>> dirs = {{-1,0},{1,0},{0,1},{0,-1}};
  bool dfs(int row, int col , vector<vector<int>> grid1, vector<vector<int>> grid2, vector<vector<bool>> visited){
    visited[row][col]=1;
    bool isIsland = true;
    

    if(grid1[row][col]==0){
      isIsland = false;
    }

    for(auto dir : dirs){
      int nextR = row + dir.first;
      int nextC = col + dir.second;
      if(nextR > 0 && nextC > 0 && nextR < grid2.size() && nextC < grid2[0].size() && grid2[nextR][nextC]==1 && !visited[nextR][nextC]){
        bool res =  dfs(nextR, nextC , grid1, grid2, visited){
          isIsland = isIsland && res;
        }
      }
    }
  }
  return isIsland;

}
  int countSubIslands(vector<vector<int>>& grid1 , vector<vector<int>>& grid2){
  int rows = grid1.size();
  int cols = grid1[0].size();

  vector<vector<bool>> visited(rows, vector<bool>(cols, false));
  int count = 0;
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      if(!visited[i][j] && grid2[i][j]==1){
        if(dfs(i,j,grid1,grid2, visited)){
          count++;
        }
      }
    }
  }
  return count;
}

