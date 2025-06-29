#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> original = nums; 
        sort(nums.begin(), nums.end(), greater<int>()); 
        
        multiset<int> topK;
        for (int i = 0; i < k; ++i) {
            topK.insert(nums[i]);
        }

        vector<int> result;
        for (int num : original) {
            auto it = topK.find(num);
            if (it != topK.end()) {
                result.push_back(num);
                topK.erase(it);
            }
        }
        return result;
    }
};

int main(){
    return 0;
}
