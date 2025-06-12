#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row = matrix.size();
       int col = matrix[0].size();
       for(int i = 0; i < row; i++){
        int left = 0;
        int right = col-1;
        while(left <= right){
            int mid = left + (right - left) / 2;

            if(matrix[i][mid] == target){
                return true;
            } 

            if(matrix[i][mid] < target){
                left = mid + 1;
            }
            else 
                right = mid - 1;
        }

       }
       return false; 
    }
};

int main(){
    return 0;
}
