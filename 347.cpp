#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    vector<int> ans;
    // step1 done
    unordered_map<int, int> mp;
    for (auto it : nums) {
      mp[it]++;
    }

    // step 2 make heap
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        hp; // min heap
    for (const auto &it : mp) {
      hp.push({it.second, it.first});
      if (hp.size() > k)
        hp.pop();
    }

    // step 3 done
    while (!hp.empty()) {
      ans.push_back(hp.top().second);
      hp.pop();
    }

    return ans;
  }
};

int main() { return 0; }
