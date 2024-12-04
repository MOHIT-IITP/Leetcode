#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
       const int n = str1.size(), m = str2.size();
       char target = str2[0];
       int s, t;
       for(s =0 , t =0; s < n && t < m; s++){
        char sc = str1[s];

        if(sc == target || sc + 1 == target || (sc == 'z' && target == 'a')){
            target = str2[++t];
        }
       }
       return t==m;
    }
}
int main(){
    return 0;
}
