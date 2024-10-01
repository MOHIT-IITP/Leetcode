#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool canArrange(vector<int> & arr, int k){
            vector<int> freq(k,0);
            for(int i =0;i<arr.size();i++){
                int remainder = ((arr[i] % k) + k) % k;
                freq[remainder]++;
            }
            if(freq[0] % 2 != 0){
                return false;
            }
            for(int i = 1 ;i < k;i++){
                if(freq[i] != freq[k-i]){
                    return false;
                }
            }
            return true;
        }
}

int main(){
    return  0;
}
