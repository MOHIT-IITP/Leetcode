#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        const int n=arr.size();
        int cnt=0, diff=0;
        for(int i=0; i<n; i++){
            diff+=arr[i]-i;
            cnt+=(diff==0);
        }
        return cnt;
    }
};
int main(){
    return 0;
}
