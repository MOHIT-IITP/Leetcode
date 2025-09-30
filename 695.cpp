class Solution {
private:
    int dfs(int i , int j, vector<vector<int>> & grid, vector<vector<bool>> &vis, int dirRow[], int dirCol[]){
        int r = grid.size();
        int c = grid[0].size();

        vis[i][j] = true;
        int count = 1;


        for(int k = 0; k < 4; k++){
            int newRow = i + dirRow[k];
            int newCol = j + dirCol[k];

            if(newRow >= 0 && newRow < r && newCol >= 0 && newCol < c && grid[newRow][newCol] == 1 && !vis[newRow][newCol]){
                count += dfs(newRow, newCol, grid, vis, dirRow, dirCol);
            }
        }

        return count;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int r = grid.size();
       int c = grid[0].size();

       int maxArea = 0;
       int dirRow[] = {-1, 0, 1, 0};
       int dirCol[] = {0, 1, 0, -1};

       vector<vector<bool>> vis(r, vector<bool>(c, false));
       for(int i = 0; i < r; i++){
           for(int j = 0; j < c; j++){
               if(grid[i][j] == 1 && !vis[i][j]){
                   int count = dfs(i,j,grid,vis,dirRow,dirCol);
                   maxArea = max(maxArea, count);
               }
           }
       }
       return maxArea;
    }
};
