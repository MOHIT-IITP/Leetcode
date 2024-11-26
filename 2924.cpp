#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        int res, count = 0, m = edges.size();
        unordered_map<int, int> mp;

        for(int i=0;i<n;i++){
            mp[i] = 0;
        }
        
        for(int i =0;i<m;i++){
            mp[edges[i][1]]++;
        }

        for(auto const & it : mp){
            if(it.second == 0){
                count++;
                res = it.first;
            }
        }
        return count == 1 ? res : -1 ;
    }
}

int main(){
    return 0;
}
