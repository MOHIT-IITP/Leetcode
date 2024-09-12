#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto ch:arr){
            mp[ch]++;
        }
        for(auto it:arr){
            if(mp[it]==1){
                k--;
                if(k==0) return it;
            }
        }
        string m = "";
        return m;
    }
};
int main(){
  return 0;
}
