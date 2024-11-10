#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int maxN = *max_element(nums.begin(), nums.end());
        int size = maxN + k + 2;
        vector<int> freq(size, 0);
        for(int num : nums){
            freq[num] += 1;
            
        }
        vector<int> pre(size, 0);
        pre[0] = freq[0];
        for(int i=1;i<size;++i){
            pre[i] = pre[i-1] + freq[i];
        }
        int result = 0;
        for(int x = 0 ;x < size;++x){
            if(freq[x] == 0 && numOperations == 0){
                continue;
            }
                int left = max(0, x -k);
                int right = min(size-1 , x+k);
                int tR = pre[right] - (left > 0 ? pre[left -1 ]: 0);
                int cA = tR - freq[x];
                int total = freq[x] + min(numOperations, cA);
                result = max(result, total);
        }
        return result;

    }
};
int main(){
    return 0;
}
