#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
       int r = rStart , c = cStart; 
       int di = 0, dj = 1;
       int twice = 2;
       vector<vector<int>> res;
       int move = 1;
       int next_move = 2;
       while(res.size()< rows * cols){
        if(r>=0 && r<rows && c >=0 && c< cols){
            res.push_back({r,c});
        }
        r += di;
        c += dj;
        move -= 1;
        if(move == 0){
            int temp = di;
            di = dj;
            dj = -temp;
            twice -=1;
            if(twice ==0){
                twice = 2;
                move = next_move;
                next_move +=1;
            }else{
                move = next_move - 1;
            }
        }
       }
       return res;
    }
};
int main(){
  return 0;
}
