#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
public: 
    int numOfSubarrays(vector<int> & arr){
        int n = arr.size();
        vector<int> vec;
        for(int i =0;i<n;i++){
            int sum = 0;
            for(int j =i;j<n;j++){
                sum+=arr[j];
                vec.push_back(sum);
            }
        }
        int count = 0;
        for(auto it: vec){
            if(it%2!=0){
                count++;
            }
        }
        return count % MOD;
    }

int main(){
    return 0;
}
