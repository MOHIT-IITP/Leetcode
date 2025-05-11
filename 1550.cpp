#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool threeConsecutiveOdds(vector<int>& arr){
            int n = arr.size();
            for(int i =0;i<n;i++){
                if(i+3 <= n){
                    if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0){
                        return true;
                    }
                }
            }
            return false;
        }
};

int main(){
    return 0;
}
