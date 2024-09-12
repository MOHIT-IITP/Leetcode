#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;

    // storing the sorted string in the map to find easily
    for (string &s : strs) {
      string sorted = s;
      sort(sorted.begin(), sorted.end());
      mp[sorted].push_back(s);
    }

    // finding the similar and putting in the ans
    for (auto &[_, group] : mp) {
      ans.push_back(group);
    }

    return ans;
  }
};
int main() { return 0; }
