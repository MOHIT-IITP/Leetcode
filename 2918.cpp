#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long firstzero = 0 , secondzero = 0;
        long long firstsum = 0, secondsum = 0;

        for(auto it : nums1){
            if(it == 0){
                firstzero++;
                firstsum++;
            }
            firstsum += it;
        }
        
        for(auto kit : nums2){
            if(kit == 0){
                secondzero++;
                secondsum++;
            }
            secondsum += kit;
        }

        if(firstsum > secondsum && secondzero == 0){
            return -1;
        }
        else if(firstsum < secondsum && firstzero == 0){
            return -1;
        }
        return max(firstsum, secondsum);
    }
}

int main(){
    return 0;
}
