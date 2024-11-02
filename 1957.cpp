#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string makeFancyString(string s){
            char prev = s[0];
            int n = s.length();
            int count = 0;
            string ans = " ";
            ans += prev;
            for(int i=1;i<n;i++){
                char curr = s[i];
                if(prev == curr){
                    count++;
                }else{
                    prev = curr;
                    count = 0;
                }
                if(count >= 2){
                    continue;
                }else{
                    ans += curr;
                }
            }
            return ans;
        }
}

int main(){
    return 0;
}
