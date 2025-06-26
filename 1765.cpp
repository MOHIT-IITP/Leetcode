class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
      int n = isWater.size();
      int m = isWater[0].size();

      vector<vector<int>> vis(n, vector<int> (m, 0));
      vector<vector<int>> dist(n, vector<int> (m, 0));

      queue<pair<pair<int, int> , int>> q;
      for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(isWater[i][j] == 1){
                q.push({{i,j},0});
                vis[i][j]  = 1;
            }
        }
      }
      int rdir[] = {-1, 0, 1, 0};
      int cdir[] = {0, 1, 0, -1};
      while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int step = q.front().second;

        dist[row][col] = step;
        q.pop();
        for(int i = 0;i<4;i++){
            int nrow = row + rdir[i];
            int ncol = col + cdir[i];

            if(nrow >=0 && nrow< isWater.size() && ncol >=0 && ncol < isWater[0].size() && vis[nrow][ncol] == 0 ){
                q.push({{nrow, ncol}, step + 1});
                vis[nrow][ncol]  = 1;
            }
        }
      }  
      return dist;
    }
};
