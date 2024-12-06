#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        bitset<10001> xNot=0;
        for(int x: banned)
            xNot[x]=1;
        int sum=0, cnt=0;
        for(int x=1; x<=n && sum<=maxSum; x++){
            if (!xNot[x]){
                sum+=x;
                cnt++;
            }
        }
        return (sum<=maxSum)?cnt:cnt-1;
    }
};
int main(){
    return 0;
}
