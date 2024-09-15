#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> getSneakyNumbers(const vector<int> &nums) {
    vector<int> ans;
    unordered_map<int, int> mp;

    for (const auto &num : nums) {
      mp[num]++;
    }
    for (const auto &pair : mp) {
      if (pair.second >= 2) {
        ans.push_back(pair.first);
      }
    }

    return ans;
  }
};

int main() { return 0; }
