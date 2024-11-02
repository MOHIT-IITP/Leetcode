#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        // Calculate the total sum of the array
        for (int num : nums) {
            totalSum += num;
        }
        
        // Iterate through the array to find the pivot index
        for (int i = 0; i < nums.size(); i++) {
            // rightSum is totalSum - leftSum - nums[i]
            if (leftSum == (totalSum - leftSum - nums[i])) {
                return i; // Found the pivot index
            }
            leftSum += nums[i]; // Update leftSum
        }
        
        return -1; // Return -1 if no pivot index found
    }
};

int main(){
    return 0;
}
