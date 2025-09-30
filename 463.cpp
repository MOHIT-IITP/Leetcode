class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        int perimeter = 0 ;
        for(int i = 0 ; i < r; i++){
            for(int j = 0; j < c; j++){
                if( grid[i][j] == 1){
                    perimeter += 4;
                    if(i-1 >= 0){
                        if(grid[i-1][j] == 1){
                            perimeter -= 2;
                        }
                    }
                    if(j-1 >= 0){
                        if(grid[i][j-1] == 1){
                            perimeter -= 2;
                        }
                    }
                }
            }
        }
        return perimeter;
    }
};
