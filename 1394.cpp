#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto it : arr){
            mp[it]++;
        }
        int lucky = -1;
        for(auto & [key , value] : mp){
            if(key == value){
                lucky = max(lucky , key);
            }
        }
        return lucky;
    }
};

int main(){
    return 0;
}
