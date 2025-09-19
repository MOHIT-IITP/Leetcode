#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solver(vector<int> & nums, int i ,vector<vector<int>> & ans, vector<int> subset){
        if(i == nums.size()){
            ans.push_back(subset);
            return ;
        }

        subset.push_back(nums[i]);
        solver(nums, i + 1, ans, subset);

        subset.pop_back();
        solver(nums, i + 1, ans, subset);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        solver(nums, 0, ans, subset);
        return ans;
    }
};
int main(){
    return 0;
}
