#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        // here getting the number of each digits
        for(auto it : nums){
            if(it == 0){
                zero++;
            }
            else if (it == 1){
                one++;
            }
            else {
                two++;
            }
        }
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(zero > 0){
                nums[i] = 0;
            }else if(zero <= 0 && one > 0){
                nums[i] = 1;
            }else{
                nums[i] = 2;
            }
        }
    }
};

int main(){
    return 0;
}
