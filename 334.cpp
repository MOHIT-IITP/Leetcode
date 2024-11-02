#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool increasingTriplet(vector<int> & nums){
            int first = INT_MAX, second = INT_MAX;
            for(auto num : nums){
                if(num <= first){
                    first = num;
                }else if(num <= second){
                    second = num;
                }else{
                    return true;
                }
            }
            return false;
        }
}

int main(){
    return 0;
}
