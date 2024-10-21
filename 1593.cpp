#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxUniqueSplit(string s){
            unordered_set<string> seen;
            return backtrack(s, 0, seen);
        }
    private:
        int backtrack(const string& s, int start, unordered_set<string>& seen){
            if(start == s.size()) return 0;
            int maxCount = 0;
            for(int j =start+1;j<=s.size();++j){
                string currSubString = s.substr(start, j-start);
                if(seen.find(currSubString)==seen.end()){
                    seen.insert(currSubString);
                    maxCount = max(maxCount , 1+backtrack(s, j, seen));
                    seen.erase(currSubString);
                }
            }
            return maxCount;
        }
}
int main(){
    return 0;
}
