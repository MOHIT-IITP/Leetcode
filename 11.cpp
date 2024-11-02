#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxArea(vector<int>& height){
            int n = height.size();
            int left = 0;
            int right = n-1;
            int maxA = 0;
            while(left < right){
                int dis = right - left;
                maxA = max(maxA , dis * min(height[right], height[left]));
                if(height[left] < height[right]){
                    ++left;
                }else{
                    right--;
                }
            }
            return maxA;
        }
}

int main(){
    return 0;
}
