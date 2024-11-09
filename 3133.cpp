#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long midEnd(int n , int x){
            long long num = x;
            for(int i=1;i<n;++i){
                num = (num + 1 ) | x;
            }
            return num;
        }
}

int main(){
    return 0;
}
