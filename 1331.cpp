#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> arrayRankTransform(vector<int> & arr){
            vector<int> res = arr;
            vector<int> ans;
            sort(res.begin() , res.end());

            unordered_map<int, int> mp;
            int rank  = 1;
            for(int i=0;i<res.size() ;i++){
                if(mp.find(res[i]) == mp.end()){
                    mp[res[i]] = rank;
                    ++rank;
                }
            }

            for(auto it : arr){
                ans.push_back(mp[it]);
            }
            return ans;
        }
}


int main(){
    return 0;
}
