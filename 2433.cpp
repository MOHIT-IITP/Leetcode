#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> findArray(vector<int> &pref) {
    int n = pref.size();
    vector<int> ans;
    ans.push_back(pref[0]);
    for (int i = 0; i < n - 1; i++) {
      ans.push_back(pref[i] ^ pref[i + 1]);
    }
    return ans;
  }
};

int main() { return 0; }
