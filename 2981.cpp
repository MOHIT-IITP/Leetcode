// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
class Solution{
    public:
        int maximumLength(string s){
            int n = s.length() , maxlen = -1;
            for(int len =1 ;len <= n; ++len){
                unordered_map<string, int> freq;
                for(itn i =0; i <= n - len; ++i){
                    string sub = s.substr(i, len);
                }
                bool is_special = true;
                for(int j = 1; j < len; ++j){
                    if(sub[j] != sub[0]){
                        is_special = false;
                        break;
                    }
                }
            }
            if(is_special){
                freq[sub]++;
                if(freq[sub] >= 3){
                    maxlen = max(maxlen, len);
                }
            }
        }
        return maxlen;
}

int main() {
    return 0;
}
