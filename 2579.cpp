#include<bits/stdc++.h>
using namespace std;

class Solution {
    long long coloredCells(int n){
        long long ans = 1;
        for(int i=0;i<n;i++){
            ans += i * 4;
        }
        return ans;
    }
}

int main(){
    return 0;
}

