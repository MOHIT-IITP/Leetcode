#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
  string x = to_string(a);
  string y = to_string(b);

  if ((x + y) > (y + x)) {
    return true;
  }
  return false;
}
class Solution {
public:
  string largestNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end(), compare);

    if (nums[0] == 0) {
      return "0";
    }
    string ans = "";
    for (int num : nums) {
      ans += to_string(num);
    }
    return ans;
  }
};
int main() { return 0; }
