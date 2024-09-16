#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int findMinDifference(vector<string> &timePoints) {
    vector<int> ans(timePoints.size());

    for (int i = 0; i < timePoints.size(); i++) {
      string it = timePoints[i];
      int h = stoi(it.substr(0, 2));
      int m = stoi(it.substr(3, 2));
      ans[i] = (h * 60 + m);
    }

    sort(ans.begin(), ans.end());

    int mindiff = INT_MAX;

    for (int i = 1; i < ans.size(); i++) {
      mindiff = min(mindiff, ans[i] - ans[i - 1]);
    }

    mindiff = min(mindiff, 1440 - ans.back() + ans.front());
    return mindiff;
  }
};
int main() { return 0; }
