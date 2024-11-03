#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int largestAltitude(vector<int>& gain){
            for(int i=1;i<gain.size();i++){
                gain[i] += gain[i-1];
            }
            int x = *max_element(gain.begin(), gain.end());
            return x <= -1 ? 0: x;
        }
}
int main(){
    return 0;
}
