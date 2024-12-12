#include<bits/stdc++.h>
#include<cmath>
using namespace std;
class Solution{
    public:
        long long pickGifts(vector<int> & gifts, int k ){
            priority_queue<int> pq(gifts.begin(), gifts.end());
            while(k--){
                int top = pq.top();
                pq.pop();
                int newtop = floor(sqrt(top));
                pq.push(newtop);
            }
            long long ans = 0;
            while(!pq.empty()){
                ans += pq.top();
                pq.pop();
            }
            return ans;
        }
}

int main(){
    return 0;
}
