#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        int noToAdd = 0;
        if (n % k != 0) {
            noToAdd = k - (n % k);
        }

        for (int i = 0; i < noToAdd; i++) {
            s += fill;
        }

        vector<string> vec;
        for(int i = 0 ;i < s.length() ;i += k){
            string temp = s.substr(i,k);
            vec.push_back(temp);
        }

        return vec;
    }
};
int main(){
    return 0;
}
