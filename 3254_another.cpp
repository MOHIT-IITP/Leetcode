#include<bits/stdc++.h>
using namespace std;
#define pb push_back
class Solution {
public:
    bool helper(const deque<int>& vec){
        for(int i =0;i<vec.size()-1;++i){
            if(vec[i] +1 != vec[i+1]) return false;
        }
        return true;
    }

    vector<int> resultsArray(vector<int>& nums, int k) {
        int left = 0;
        vector<int> ans;
        int n = nums.size();
        deque<int> curr;
        for(int right = 0;right < n;right++){
            curr.push_back(nums[right]);
            if(curr.size() == k){
                if(helper(curr) == true){
                    int x = *max_element(curr.begin(), curr.end());
                    ans.pb(x);
                }
                else{
                    ans.pb(-1);
                }
            }
            if(curr.size() > k){
                curr.pop_front();
                if(helper(curr)){
                    int x = *max_element(curr.begin(), curr.end());
                    ans.pb(x);
                }else{
                    ans.pb(-1);
                }
                left++;
            }
        }
        return ans;
    }
}
int main(){
    return 0;
}
