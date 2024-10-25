#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>ans;
        sort(folder.begin(),folder.end());
        unordered_map<string,int>mp;
        for(auto s:folder){
            int n=s.size();
            string temp="";
            bool flag=0;
            for(int i=0;i<n;i++){
                temp.push_back(s[i]);
                if(i==n-1 && mp[temp]){
                    flag=1;
                    break;
                }
                else if(mp[temp] && s[i+1]=='/'){
                    flag=1;
                    break;
                }
            }
            if(!flag){
                mp[temp]++;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}
