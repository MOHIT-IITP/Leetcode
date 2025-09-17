#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int majority(vector<int> & nums)
{
  int n = nums.size();
  sort(nums.begin(), nums.end());
  return nums[n/2];
}



int main()
{
  vector<int> nums({1,2,1,2,2,2});
  int res = majority(nums);
  cout<<res<<endl;
  return 0;
}




// using boyer moore voting algo
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int idx = 0;

        for(int i = 0 ;i < n; i++){
            if(intervals[idx][1] >= intervals[i][0]){
                intervals[idx][1] = max(intervals[idx][1] , intervals[i][1]);
            }else{
                idx++;
                intervals[idx]= intervals[i];
            }
        }
        intervals.erase(intervals.begin() + idx, intervals.end());
        return intervals;
    }
};
