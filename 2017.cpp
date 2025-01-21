#include <bits/stdc++.h>
#include <climits>
using namespace std;

class Solution {
public:
  long long gridGame(vector<vector<int>> &grid) {
    long long firstCol = accumulate(grid[0].begin(), grid[0].end());
    long long secondCol = 0;
    long long ans = LLONG_MAX;

    for (int i = 0; i < grid[0].size(); i++) {
      firstCol -= grid[0][i];
      ans = min(ans, max(firstCol, secondCol));
      secondCol += grid[1][i];
    }
    return ans;
  }
}


int main(){
  return 0;
}
