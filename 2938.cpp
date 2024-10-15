#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution {
public:
    long long minimumSteps(string s) {
        ll count = 0;
        ll zeroCount = 0;
        
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i] == '0') {
                zeroCount++;  
            } else if(s[i] == '1') {
                count += zeroCount;  
            }
        }
        
        return count;
    }
}
int main(){
    return 0;
}
