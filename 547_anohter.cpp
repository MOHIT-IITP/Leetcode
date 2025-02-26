#include<bits/stdc++.h>
using namespace std;

class Solution {
    private: 
        void dfs(vector<bool> & vec, vector<vector<int>> & isConnected, int i){
            vec[i] = true;
            int n = isConnected.size();
            for(int j = 0;j<n;j++){
                if(!vec[j] && isConnected[i][j] == 1){
                    dfs(vec, isConnected, j);
                }
            }
        }

    public:
        int findCircleNum(vector<vector<int>> & isConnected){
            int n = isConnected.size();
            int count = 0;
            vector<bool> vec(n, false);
            for(int i=0;i<n;i++){
                if(!vec[i]){
                    count++;
                    dfs(vec, isConnected, i);
                }
            }
            return count;
        }
}

int main(){
    return 0;
}
