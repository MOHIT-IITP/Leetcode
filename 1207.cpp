#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto it : arr){
            mp[it]++;
        }
        unordered_map<int, int> another;
        for(const auto& it : mp){
            another[it.second]++;
        }
        for(const auto & it : another){
            if(it.second >= 2){
                return false;
            }
        }
        return true;
    }
};
int main(){
    return 0;
}
