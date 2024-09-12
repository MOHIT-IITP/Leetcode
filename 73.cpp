#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    vector<bool> roe(row, false);
    vector<bool> coe(col, false);

    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        if (matrix[i][j] == 0) {
          roe[i] = true;
          coe[j] = true;
        }
      }
    }
    for (int i = 0; i < row; i++) {
      if (roe[i]) {
        for (int j = 0; j < col; j++) {
          matrix[i][j] = 0;
        }
      }
    }

    for (int j = 0; j < col; j++) {
      if (coe[j]) {
        for (int i = 0; i < row; i++) {
          matrix[i][j] = 0;
        }
      }
    }
  }
};
int main() { return 0; }
