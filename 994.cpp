#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(); // row
        int m = grid[0].size(); // col

        vector<vector<int>> vis(n, vector<int> (m, 0)); // visited array to mark processed oranges
        
        queue<pair<pair<int, int>, int>> q; // Queue to store rotten orange positions and their respective times

        // Initialize the queue with all initially rotten oranges
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) { // Rotten orange
                    q.push({{i, j}, 0});
                    vis[i][j] = 2; // Mark it as visited
                } else if (grid[i][j] == 1) { // Fresh orange
                    vis[i][j] = 0; // Not visited yet
                }
            }
        }

        // Directions to check up, right, down, left
        int directions[] = {1, 0, -1, 0, 0, 1, 0, -1};
        int tm = 0; // Variable to track time

        while(!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
            q.pop();

            tm = max(tm, time); // Keep track of maximum time

            // Check all 4 possible directions
            for(int i = 0; i < 4; i++) {
                int nrow = row + directions[i * 2];
                int ncol = col + directions[i * 2 + 1];

                // Check if the position is within bounds and is a fresh orange
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0) {
                    // Mark as visited and add to the queue with time incremented by 1
                    vis[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, time + 1});
                }
            }
        }

        // After BFS, check if there's any fresh orange left unrotten
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && vis[i][j] == 0) { // Fresh orange that was never visited
                    return -1; // Impossible to rot all oranges
                }
            }
        }

        return tm; // Return the maximum time it took to rot all the fresh oranges
    }
};

int main(){
	return 0;
}

