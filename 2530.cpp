#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long maxKelements(vector<int>& nums, int k){
            priority_queue<int> pq;
            long long ans = 0;
            while(k--){
                long long top = pq.top();
                pq.pop();
                ans += top;
                pq.push(ceil(top/3));
            }
            return ans;
        }
}

int main(){
    return 0;
}
