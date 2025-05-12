#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> nums;
        vector<int> ans;
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j || j==k || k == i){
                        continue;
                    }
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if(num >= 100 && num % 2 == 0 ){
                        nums.insert(num);
                    }
                }
            }
        }
        for(auto num: nums){
            ans.push_back(num);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main(){
    return 0;
}
