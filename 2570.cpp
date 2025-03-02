#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>> & nums1, vector<vector<int>> nums2){
            map<int, int> mp;
            for(int i =0 ; i<nums1.size();i++){
                mp[nums1[i][0]] += nums1[i][1];
            }
            for(int i =0 ; i<nums2.size();i++){
                mp[nums2[i][0]] += nums2[i][1];
            }

            vector<vector<int>> ans;
            for(const auto & it: mp){
                vector<int> temp;
                temp.push_back(it.first);
                temp.push_back(it.second);
                ans.push_back(temp);
            }
            return ans;
        }
}

int main(){
    return 0;
}
