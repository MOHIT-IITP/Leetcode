#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 > n2 ) return false;

        vector<int> s1Count(26,0), s2Count(26,0);
        for(int i =0;i<n1;i++){
            s1Count[s1[i]-'a']++;
            s2Count[s2[i]-'a']++;
        }

        for(int i = n1;i < n2; i++){
            if(s1Count == s2Count) return true;
            s2Count[s2[i - n1] - 'a']--;
            s2Count[s2[i] - 'a']++;
        }
        return s1Count == s2Count;
    }
}
int main(){
    return 0;
}
