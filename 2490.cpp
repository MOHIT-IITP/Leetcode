#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isCircularSentence(string s){
            int n = s.length();
            if(s[0] != s[n-1]) return false;
            for(int i=0;i<n;++i){
                if(s[i] = ' '){
                    if(s[i-1] != s[i+1]) return false;
                }
            }
            return true;
        }
}

int main(){
    return 0;
}
